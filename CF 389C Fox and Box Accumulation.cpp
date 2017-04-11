#include <iostream>
#include <algorithm>
using namespace std;
int a[101],n,cnt,tmp,sum;
int main(){
    //freopen("in.txt", "r", stdin);
	cin>>n;
	for(int i=0; i<n; i++){
        cin>>tmp;
        a[tmp]++;
	}
	for(int i=0; i<101; i++){
        sum+=a[i];
        cnt=max(cnt, int(ceil(double(sum)/(i+1))));

	}
	cout<<cnt;
	return 0;
}