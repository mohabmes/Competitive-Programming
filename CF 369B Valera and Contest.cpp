#include <iostream>
using namespace std;
int main()
{
    int n,k,l,r,sa,sk;
	cin>>n>>k>>l>>r>>sa>>sk;
	int a[n]={0};
	double dd=sk/k;
	int remainder=sk%k;
    for(int i=0; i<k; i++) {
        a[i]=dd+(remainder>0);
        remainder--;
    }
    sa-=sk;
    if(k!=n){
        remainder=sa%(n-k);
        for(int i=k; i<n; i++) {
            a[i]=sa/(n-k);
            if(remainder>0)
				a[i]++, sa--,remainder--;
        }
    }
	for(int i=0; i<n; i++) 
            cout<<a[i]<<" ";
}