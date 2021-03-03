#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag=0;
        int count=0;
        int i=0;
        int j=s.size()-1;
        string b;
        int c=0;
        while(i<j){
            if(s[i]!=s[j]){
                b+='(';
                b+=')';
            }
            else{
                if(c==0){
                    c+=2;
                    b+='(';
                    b+='(';
                }
                else{
                    c-=2;
                    b+=')';
                    b+=')';
                }
            }
            i++;
            j--;
        }
        int o=0;
        int e=0;
        for(int i=0;i<b.size();i++){
            if(b[i]=='(')
                o++;
            else
                o--;
        }
        cout<<b<<endl;
        if(o==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}

