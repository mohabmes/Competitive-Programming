#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    set<pair<int,int>>v;
    while(n--){
        int a[m]={0}, sz=m;
        for(int i=0; i<m; i++)cin>>a[i];
        if(k==0){
            int i, j, key;
            for(j = 1; j < sz; j++){
                key = a[j];
                i = j - 1;
                while(i >= 0 && a[i] > key){
                    a[i+1] = a[i];
                    v.insert(make_pair(j+1,i+1));
                    i--;
                }
                a[i+1] = key;
            }
        }
        else{
            int i, j, key;
            for(j=1; j<sz; j++){
                key=a[j];
                i=j-1;
                while(i >= 0 && a[i] < key){
                    a[i+1] = a[i];
                    v.insert(make_pair(j+1,i+1));
                    i--;
                }
                a[i+1] = key;
            }
        }
    }
    cout<<v.size()<<endl;
    set<pair<int,int>>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        if(k==0)
            cout<<min(it->first,it->second)<<" "<<max(it->first,it->second)<<endl;
        if(k==1)
            cout<<max(it->first,it->second)<<" "<<min(it->first,it->second)<<endl;
    }
}