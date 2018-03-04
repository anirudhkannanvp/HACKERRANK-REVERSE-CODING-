#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t,n,q,x,y,i;
	t=1+rand()%static_cast<ll>(10);
	printf("%lld\n",t);
	while(t--){
		n=1+rand()%static_cast<ll>(100000);
		q=1+rand()%static_cast<ll>(100000);
		printf("%lld %lld\n",n,q);
		for(i=0;i<n;i++)
			printf("%lld ",1+rand()%static_cast<ll>(1000000));
		printf("\n");
		for(i=0;i<q;i++){
			x=1+rand()%static_cast<ll>(n);
			y=1+rand()%static_cast<ll>(n);
			printf("%lld %lld %lld\n",min(x,y),max(x,y),1+rand()%static_cast<ll>(1000000));
		}
	}
	return 0;
}