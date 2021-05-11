/*Suppose Chef is stuck on an island and currently he has x units of food supply and y units of water supply in total.
 that he could collect from the island.
 He needs xr units of food supply and yr units of water supply per day at the minimal.
  to have sufficient energy to build a boat from the woods and also to live for another day.
   Assuming it takes exactly D days to build the boat and reach the shore, 
tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?*/

#include<iostream>
#include<algorithm>
using namespace std; 
int main(){
	int x,y,z,w,d,m,t;
	cin>>t;
	while(t--){
	cin>>x>>y>>z>>w>>d;
	m=min(x/z,y/w);
	(d<=m) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}
