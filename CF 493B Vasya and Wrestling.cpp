#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    int n, t;
    ll a=0, b=0;
    string last;
	vector<int> p1, p2;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin >> t;
		if (t>0) {
			p1.push_back(t);
			a+=t;
		}else{
			p2.push_back(-t);
			b+=(-t);
		}
		last=(t>0)?"first":"second";
	}
	if(a!=b){
        if(a>b)
			cout<<"first";
        else 
			cout<<"second";
	}
	else if(p1!=p2){
        if(p1<p2)
			cout<<"second";
        else 
			cout<<"first";
	}
    else 
		cout<<last;
}