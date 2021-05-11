#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t; 
	while(t--){
		int w1,w2,x1,x2,m;
		cin>>w1>>w2>>x1>>x2>>m;
		vector<int> vi;
		int d=w2-w1;
		int lo=x1*m;
		int hi=x2*m;
		if(d>=lo and d<=hi){
			vi.push_back(1);
		}
		else{
			vi.push_back(0);
		}
		for(auto  x : vi){
			cout<<x<<endl;
		}
}
return 0;
}
