#include <iostream>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    int n,cnt=0;
    cin>>n;
    for(int x=1; x<=n; x++){
        for(int y=x; y<=n; y++)
            if(x*y <= n)
                cnt++;
    }
    cout<<cnt;
    return 0;
}
