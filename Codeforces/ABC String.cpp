#include<bits./stdc++.h>
using namespace std;
bool balanced_parenthesis(string s)
{
    stack<int> a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            a.push(s[i]);
        else if(s[i]==')')
        {
            if(a.empty() or a.top()!='(')
                return false;
            a.pop();
        }
    }
    if(a.empty())
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a=1,b=1;
        cin>>s;
        if(s[0]==s[s.length()-1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        char c1=s[0];
        s[0]='(';
        char c2=s[s.length()-1];
        int n=s.length();
        s[n-1]=')';
        for(int i=1;i<n-1;i++)
        {
            if(s[i]==c1)
            {
                s[i]='(';
                a++;
            }
            else if(s[i]==c2)
            {
                s[i]=')';
                b++;
            }
        }
        char c;
        if(a>b)
            c=')';
        else if(a<b)
            c='(';
        else if((a+b)!=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!='(' && s[i]!=')')
                s[i]=c;
        }
        //cout<<s<<endl;
        if(balanced_parenthesis(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
