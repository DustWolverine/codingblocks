 /*It’s 10:30 pm and Khushi is trying to make a to-do list for the next day.
 There are N tasks where each task requires H hours to complete. Considering she takes X hours 
 in completing her mundane tasks,
 determines whether she will be able to finish all the tasks the other day. */


// code cracker CODECHEF APRIL 2021


#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
using namespace std; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,x;
	int h[100],sum=0;
	cin>>n>>x;
	for(int i=0;i<n;i++){
      cin>>h[i];
      sum+=h[i];
	}
	if((24-x)>=sum){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}