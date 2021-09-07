
int search(int i,int j,string s,char ch[],int xx) {
    int found=0;
    if(i>=0 && i<6 && j>=0 && j<6 && s[xx]=ch[i][j]){
        char temp=ch[i][j];
        ch[i][j]="0";
        xx++;
        if(x==6){
            found=1;
        } else {
            found+=search(i+1,j,s,ch,xx);
            found+=search(i-1;j,s,ch,xx);
            found+=search(i,j+1,s,ch,xx);
            found+=search(i,j-1,s,ch,xx);
        }
        ch[i][j]=temp;
    }
    return found;
}

int main(){
    string s="GEEKS";
    char ch[6][6]={
        //insert 2d char array here
    }
    int count=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            count+=search(i,j,s,ch,0);
        }
    }
    cout<<count<<"\n";
}
