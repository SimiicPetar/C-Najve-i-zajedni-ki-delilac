#include <iostream>
#include <cmath>

using namespace std;

void nzs (int m ,int n){
	int mn=min(m,n);
	int GCD=1;
	for(int i=1;i<=mn;i++){
		if(m%i==0 && n%i==0){
			GCD=max(GCD,i);
		}
	}
	cout<<GCD<<endl;
}
int main(){
	int n;
	cin>>n;
	int a[n], b[n];
	a[n]={0};
	b[n]={0};
	for(int i = 0;i < n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i = 0;i < n;i++){
		nzs(a[i],b[i]);
	}
}
