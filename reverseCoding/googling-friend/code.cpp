//ANIRUDH KANNAN V P
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 100000007
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	deque<ll>fib;
	fib.push_back(1);fib.push_back(1);
	ll i,n,t;
	for(i=2;i<10002;i++)
		fib.push_back((fib[i-1]+fib[i-2])%MOD);
	cin>>t;
	while(t--){
		cin>>n;
		cout<<((fib[n]+((n*n)%MOD+n)%MOD)%MOD)<<endl;
	}
	return 0;
}
