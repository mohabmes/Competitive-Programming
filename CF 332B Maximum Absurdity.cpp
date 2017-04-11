#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
int main() {
	ll n,k,t;
	cin>>n>>k;
	ll sum[n+1]={0};
	pair<ll,ll> a[n+2],b[n+2];
	pair<ll,pair<ll,ll>>ans;
	for(int i=1; i<=n; i++){
        cin>>t;
        sum[i]=t+sum[i-1];
	}
	for(int i=k+1; i<=n-k+1; i++)
        a[i] = max(a[i-1], make_pair(sum[i-1]-sum[i-1-k], n-i+k));
    for(int i=n-k+1; i>=0; i--)
        b[i] = max(b[i+1], make_pair(sum[i+k-1]-sum[i-1], n-i));
    for(int i=k+1; i<=n-k+1; i++)
        ans = max(ans, pair<ll,pair<ll,ll>>(a[i].first+ b[i].first, make_pair(a[i].second, b[i].second)));
	cout<<n-ans.second.first<<" "<<n-ans.second.second;
}