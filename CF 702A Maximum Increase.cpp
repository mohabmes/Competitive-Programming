#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, prv=0, cnt=0, ans=1, tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(tmp - prv > 0)cnt++;
        else cnt=1;
        ans = max(ans, cnt);
        prv = tmp;
    }
    cout<< ans;
	return 0;
}