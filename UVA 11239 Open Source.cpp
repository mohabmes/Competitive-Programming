#include <iostream>
#include <cstdio>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
/*
UBQTS TXT
tthumb
LIVESPACE BLOGJAM
philton
aeinstein
YOUBOOK
j97lee
sswxyzy
j97lee
aeinstein
SKINUX
1
0
*/
int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    map<string,set<string>> project;
    set<string>accStudent;
    set<string>student;
    vector<pair<int,string>>res;

    string s,pn;
    while(getline(cin,s) && s!="0"){
        while(s !="1"){
            if(s[0]>='A' && s[0]<='Z'){
                pn=s;
                project[pn];
            }
            else{
                if(accStudent.count(s)==0){
                    accStudent.insert(s);
                    project[pn].insert(s);
                }
                else{
                    if(!project[pn].count(s))
                        {accStudent.erase(s);student.insert(s);}
                }
            }
            getline(cin,s);
        }
    }
    cout<<endl<<endl;

    for (map<string,set<string>>::iterator it=project.begin(); it!=project.end(); ++it){
        int cnt=0;
        for (auto n: it->second){
            for (set<string>::iterator it2=student.begin(); it2!=student.end(); ++it2){
                if(n!=*it2)cnt++;
            }
        }
        res.push_back(make_pair(cnt,it->first));
    }
    sort(res.begin(),res.end());
    for (int i=res.size()-1; i>=0; i--){
        cout<<res[i].second<<" "<<res[i].first<<endl;
    }

	return 0;
}
