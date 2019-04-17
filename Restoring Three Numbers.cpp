#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	vector<ll> v;
	for(int i=0;i<4;i++){
		ll k;
		cin>>k;
		v.push_back(k);
	}
	sort(v.begin(),v.end());
	cout<<v[3]-v[0]<<" ";
	cout<<v[3]-v[1]<<" ";
	cout<<v[3]-v[2]<<"\n";
	return 0;
}
