#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    int n;
	while(tc--){
		cin>>n;
		int arr[n]={0};
		for(int i=0; i<n; i++)
            cin>>arr[i];
        int mx=*max_element(arr,arr+n),
            mn=*min_element(arr,arr+n);
		cout<<(mx-mn)*2<<endl;
	}
	return 0;
}