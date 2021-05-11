#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        int s1=0,s2=0;
        for(int i=0;i<n;++i){
           string s;
           cin>>s;
           if((s[0]=='E') or (s[0]=='Q') or (s[0]=='U') or (s[0]=='I') or (s[0]=='N') or (s[0]=='O') or(s[0]=='X') ){
            s1+=a;
           }
           else{
            s2+=b;
           }
        }
        if(s1>s2){
            cout<<"SARTHAK"<<endl;
        }
        if(s1<s2){
            cout<<"ANURADHA"<<endl;
        }
        if(s1==s2){
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}