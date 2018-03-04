//ANIRUDH KANNAN V P
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string s;
	getchar();
	while(t--){
		ios_base::sync_with_stdio(false);
		cin.tie(0);
		getline(cin,s);
		if(s=="Mike")
			cout<<"Eleven\n";
		else if(s=="Eleven")
			cout<<"Mike\n";
		else if(s=="Lucas")
			cout<<"Mad Max\n";
		else if(s=="Mad Max")
			cout<<"Lucas\n";
		else if(s=="Dustin")
			cout<<"Mad Max\n";
		else if(s=="Will")
			cout<<"Upside Down\n";
		else if(s=="Nancy")
			cout<<"Jonathan\n";
		else if(s=="Jonathan")
			cout<<"Nancy\n";
		else if(s=="Steve")
			cout<<"Nancy\n";
		else
        	cout<<"Get eaten by a Demogorgan\n";
	}
	return 0;
}
