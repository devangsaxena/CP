// Author : Devang Saxena 
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)		substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x) 		cerr<<#x<<": "<<x<<" "<<endl;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Problem Link: 

int32_t main()
{
	FIO;
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int num0=0, num1=0;
		int ans=0;
		for(char c:s){
			if(c=='0')num0++;
			else num1++;
		}
		 if(num0==num1 && s.length()>2){
		 	if(s.back()=='1')ans=min(num0,num1-1);
		 	else ans=min(num0-1,num1);
		 }else if(num0==num1 && s.length()==2)ans=0;
		 else{
		 	ans=min(num0,num1);
		 }
		cout<<ans<<endl;
	}

	return 0;
}
