#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    cout<<n<<endl;
    while(n>1)
    for(int x=2; x<=n; x++){
        if(n%x==0){ 
			n/=x; 
			cout<<n<<endl; 
			break; 
		}
    }
}