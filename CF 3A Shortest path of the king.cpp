#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s, t, ans;
    vector<string> v;
    cin>>s>>t;
    while(s!=t){
        ans="";
        if(s[0]<t[0])
            s[0]+=1, ans+="R";
        else if (s[0] > t[0])
            s[0]-=1, ans+="L";

        if(s[1]<t[1])
            s[1]+=1, ans+="U";
        else if (s[1] > t[1])
            s[1]-=1, ans+="D";
        v.push_back(ans);
    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<endl;
    return 0;
}