
int count(string e) {
    stack<char> s;
    for(int i=0;i<e.size();i++){
        if(e[i]=='}' && !s.empty()){
            if(s.top='{'){
                s pop();
            } else {
                s.push(e[i]);
            }
        } else {
            s.push(e[i]);
        }
    }
    int n=0;
    while(!s.empty() && s.top=='{'){
        s.pop();
        n++;
    }
    return ((s.size())/2 + n/2);
}
