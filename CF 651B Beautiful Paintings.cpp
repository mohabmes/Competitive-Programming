#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, t;
    cin>>n;
    int a[1001]={0};
    for(int i=0; i<n; i++){
        cin>>t;
        ++a[t];
    }
    cout<<n-*max_element(a, a+1001);
    return 0;
}