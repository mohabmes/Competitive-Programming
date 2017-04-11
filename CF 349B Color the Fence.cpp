#include <iostream>
using namespace std;
int main(){
    int v;  
	cin>>v;
    int a[10], s=1000000, l;
    for(int x=0; x<9; x++){
        cin>>a[x];
        if(a[x]<s)
			s=a[x];
    }
	l=v/s;
    if(l==0){
		cout<<"-1";
		return 0;
	}
    for(int x=l; x>=0; x--){
        for(int y=8; y>=0; y--){
            if((v-a[y])/s==x&&v>=a[y]){
				cout<<y+1;
				v-=a[y];
			}
        }
    }
}