#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    //freopen("in.txt", "r", stdin);
    int n,m,k,cnt=0;
    cin>>n>>m>>k;
    int a[++m]={0};
    for(int i=0; i<m; i++)
		cin>>a[i];
    for(int i=0; i<m-1; i++){
        if(__builtin_popcount(a[m-1]^a[i])<=k)
			cnt++;
    }
    cout<<cnt<<endl;
	return 0;
}