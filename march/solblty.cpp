#include<iostream>
using namespace std; 
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,a,b;
		cin>>x>>a>>b;
		int sum=(100-x)*b;
		int res=(a+sum)*10;
		cout<<res<<"\n";
	}
	return 0;
}