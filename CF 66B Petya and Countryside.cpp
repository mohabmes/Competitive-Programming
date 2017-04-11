#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n],p[n]={0},max=0;
    for(int x=0; x<n; x++) 
		cin>>a[x];
    for(int x=0; x<n; x++){
        p[x]++;
        for(int y=x+1; y<n; y++){
            if(a[y]<=a[y-1])
				p[x]++; 
            else 
				break;
        }
        for(int y=x-1; y>=0; y--){
            if(a[y]<=a[y+1])
				p[x]++; 
            else 
				break;
        }
        if (p[x]>max) 
			max=p[x];
    }
	cout<<max;
}