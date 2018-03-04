//ANIRUDH KANNAN V P
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll lcs( char *X, char *Y, ll m, ll n ){
   	ll L[m+1][n+1];
   	ll i,j;
   	for(i=0; i<=m; i++)
    	for (j=0; j<=n; j++)
       		if (i == 0 || j == 0)
         		L[i][j] = 0;
       		else if (X[i-1] == Y[j-1])
         		L[i][j] = L[i-1][j-1] + 1;
       		else
         		L[i][j] = max(L[i-1][j], L[i][j-1]);
   	return L[m][n];
}
int main(){
  ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	char a[1000],b[1000];
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<(2*lcs(a,b,strlen(a),strlen(b)))<<endl;
	}
	return 0;
}
