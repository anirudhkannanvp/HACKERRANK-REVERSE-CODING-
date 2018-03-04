// ANIRUDH KANNAN V P
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,temp;
	cin>>t;
	while(t--){
		cin>>n;

		deque<int> a;
		for(i=0;i<n;a.pb(temp),i++)
			cin>>temp;
		cin>>temp;
		cout<<lower_bound(a.begin(),a.end(),temp)-a.begin()<<endl;
	}
	return 0;
}
