struct key {
    int freq;
    char ch;
}

string rearrange(string s) {
    int count[26];
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }
    priority_queue<key> pq;
    for(char i='a';i<='z';i++){
        if(count[i-'a']) pq.push_back(count[i],c);
    }
    string ans="";
    key prev{-1,'#'};
    while(!pq.empty()){
        key k=pq.top();
        ans+=k.ch;
        if(prev.freq>0) pq.push(prev);
        
        (k.freq)--;
        prev=k;
    }
    if(ans.length()!=s.length()){
        return "not possible";
    }
    return ans;
}
