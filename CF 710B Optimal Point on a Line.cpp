#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, opt;
    cin>>n;
    int a[n]={0};
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    if(n % 2 == 1)
        opt = a[n/2];
    else
        opt = a[(n-1)/2];
    cout<<opt;
    return 0;
}