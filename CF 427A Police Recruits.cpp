#include <iostream>
using namespace std;
int main(){
    int n,a,cnt=0,sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a>0)sum+=a;
        else if(a<0 && sum>0)sum--;
        else if(a<0 && sum<=0)cnt++;
    }cout<<cnt;
}