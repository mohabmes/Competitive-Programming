#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;
int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    map<int,int> num;
    vector <int> vec;
    int n;
    while(cin>>n){
        if(num.count(n))num[n]++;
        else num[n]=1, vec.push_back(n);
    }
    for(int i=0; i<vec.size();i++){
        cout<<vec[i]<<" "<<num[vec[i]]<<endl;
    }

	return 0;
}
