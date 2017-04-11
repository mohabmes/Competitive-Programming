#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int m,n;
	cin>>n>>m;
	int a[m];
	for(int i=0; i<m; i++)cin>>a[i];
	sort(a,a+m);
	if(a[0]==1 || a[m-1]==n){cout<<"NO"; return 0;}
	else{
        for(int i=1; i<m; i++){
            int tmp=a[i];
            if(a[i-1]==tmp-1 && a[i+1]==tmp+1)
                {cout<<"NO"; return 0;}
        }
	}
	cout<<"YES";
	return 0;
}