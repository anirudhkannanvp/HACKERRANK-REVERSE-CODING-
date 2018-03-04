//TEJKIRAN V
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll a[1000000];
int main(){
	ll t,n,q,ans,i,temp[3];
	cin>>t;
	while(t--){
	    cin>>n>>q;
	    for(i=0;i<n;i++)
	    	scanf("%lld",&a[i]);
	    ll zeros[n+1]={0};
	    while(q--){
	        for(i=0;i<3;i++)
	        	cin>>temp[i];
	        zeros[temp[0]-1]+=temp[2];
	        zeros[temp[1]]-=temp[2];
	    }
	    ans=0;
	    for(i=0;i<n;i++){
	        ans+=zeros[i];
	        cout<<a[i]+ans<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
