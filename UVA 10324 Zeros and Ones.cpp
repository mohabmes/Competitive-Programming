#include <bits/stdc++.h>

using namespace std;

bool check(string in){
    for(int i=1; i<in.length(); i++){
        if(in[i]!=in[i-1])return false;
    }
    return true;
}
int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string s;
    int cnt=1;
    while(cin>>s){
        cout<<"Case "<<cnt++<<":\n";
        int n, i=0, j=0;
        cin>>n;
        while(n--){
            cin>>i>>j;
            if(i>j)swap(i,j);
            string t = s.substr(i,(j-i)+1);
            if(check(t))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
	return 0;
}
