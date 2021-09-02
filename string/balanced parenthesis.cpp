
bool isbalanced(string par) {
    stack<char> s;
    char x;
    for(int i=0;i<par.size();i++){
        if(par[i]=='(' || par[i]=='{' || par[i]=='['){
            s.push(par[i]);
        }
        if(s.empty()) return false;
        switch(par[i]){
            case ')':
                 x=s.top();
                 s.pop();
                 if(x=='{' || x=='[') return false;
                 break;
            case '}':
                 x=s.top();
                 s.pop();
                 if(x=='(' || x=='[') return false;
                 break;
            case ']':
                 x=s.top();
                 s.pop();
                 if(x=='{' || x=='(') return false;
                 break;
        }
    }
    return (s.empty());
}
