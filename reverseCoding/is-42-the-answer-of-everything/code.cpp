//ANIRUDH KANNAN V P
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){
	ll temp;
	while(b>0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
	ll t,a,b;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<(gcd(a,b)*42)<<" "<<42<<" "<<((a*b)/gcd(a,b)+42)<<endl;
	}
	return 0;
}
