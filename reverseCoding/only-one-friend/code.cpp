//ANIRUDH KANNAN V P
#include "bits/stdc++.h"
using namespace std;
unsigned p1[5761459];
#define N 100000001
vector<bool>prime (N,true);
int main(){
prime[0]=false;
prime[1]=false;
unsigned p,i,k=0;
for(p=2;p<N;p++){
if(prime[p]==true){
for(i=2*p;i<N;i+=p){
prime[i]=false;
}
}
}
for(i=2;i<=N;i++)
if(prime[i]==true)
p1[k++]=i;
int t;
int m,n;
scanf("%d",&t);
while(t--){
scanf("%d",&m);
printf("%d\n",p1[m-1]);
}
return 0;
}
