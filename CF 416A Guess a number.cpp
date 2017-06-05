#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,strt=-1e9-1,end=1e9+1;
    cin>>n;
    while(n--){
        string op, ans; int num;
        cin>>op>>num>>ans;
        if(ans=="N"){
            if(op==">" ) end = min(end , (num));
            if(op==">=") end = min(end , num - 1);
            if(op=="<" ) strt = max(strt , num);
            if(op=="<=") strt = max(strt ,(num + 1));
        }else{
            if(op==">" ) strt = max(strt, (num + 1));
            if(op==">=") strt = max(strt, num);
            if(op=="<" ) end = min(end, (num - 1));
            if(op=="<=") end = min(end, num);
        }
    }

    if(strt<=end) cout<<strt;
    else cout<<"Impossible";
    return 0;
}