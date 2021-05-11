//codechef long challange may 2021
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		ll n,x,k;
		cin>>n>>x>>k;
		for(ll i=0;i<=n+1;i+=k){
			for(ll j=n+1;j>=0;j-=k){
			if(i==x or j==x){
				cout<<"YES"<<"\n";
			}
			else{
				cout<<"NO"<<"\n";
			}
		}
	}
}
		return 0;

		}

