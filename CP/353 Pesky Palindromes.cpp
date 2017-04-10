#include <iostream>
#include <algorithm>
#include <cstdio>
#include <set>
using namespace std;

bool IsPalindrome(string in){
    string out(in);
    reverse(out.begin(), out.end());
    if(in==out) return 1;
    return 0;
}
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string s;
    while(cin>>s){
        int cnt=0;
        set<string> st;

        for (int x=0; x<s.size(); x++)
            for (int y=x; y<s.size(); y++){
                string sub = s.substr(x, y-x+1);
                if (!st.count(sub)&& IsPalindrome(sub)){
                    st.insert(sub);
                    cnt++;
                }
            }
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes.\n";
    }
	return 0;
}
