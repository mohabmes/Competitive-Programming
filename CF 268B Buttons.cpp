#include <iostream>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=1; i<n; i++){
        cnt +=i*(n-i);
    }
	cout<<cnt+n;
}