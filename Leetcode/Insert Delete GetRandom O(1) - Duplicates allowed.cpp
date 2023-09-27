class RandomizedCollection {
    vector<int> arr;
    map<int,set<int>> m;
public:
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        m[val].insert(arr.size());
        arr.push_back(val);
        return m[val].size()==1;
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end()) return false;
        int idx = *(m[val].begin());
        m[val].erase(m[val].begin());
        int last = arr[arr.size()-1];
        arr[idx] = last;
        m[last].insert(idx);
        m[last].erase(arr.size()-1);
        arr.pop_back();
        if(m[val].size()==0){
            m.erase(val);
        }
        return true;
    }
    
    int getRandom() {
        return arr[random()%arr.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
