//ANIRUDH KANNAN V P
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll f(ll n){
	ll ans=1;
	while(n){
		ans*=max((ll)1,n%10);
		n/=10;
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	deque<ll> out;
	out.push_back(0);
	ll t,i,n;
	for(i=1;i<100001;i++)
		out.push_back(out[i-1]+f(out[i-1]));
	cin>>t;
	while(t--){
		cin>>n;
		cout<<out[n]<<endl;
	}
	return 0;
}
