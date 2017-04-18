#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	char c;
	int n,t;
	getline(cin,s);
	t=n=s.length();
	bool sum[n+1]={0};
	int flag=n;
	while(t){
		if(t!=n){
			c=s[0];
			for(int i=1;i<n-1;i++){
				s[i-1]=s[i];
			}
			s[n-1]=c;
		}
		for(int i=0;i<(n+1)/2;i++){
			if(s[i]!=s[n-i-1]){
				flag--;
				sum[n-t]=1;
				break;
			}
		}
		t--;
	}
	cout<<flag<<":";
	for(int i=0;i<n;i++){
		if(sum[i]==0) cout<<" "<<i;
	}
}
