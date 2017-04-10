#include <cstdio>
#include <stack>
#include <iostream>
using namespace std;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    getline(cin, s);
    while (n--) {
	getline(cin, s);
	int len = s.length();
        stack<char> prnthss;
        for(int i=0; i<len; i++){
            if( s[i]=='(' || s[i]=='['){
                prnthss.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == ']') {
                if (s[i] == ')' && (prnthss.empty() || prnthss.top() != '(')){
                    prnthss.push(' ');
                    break;
                }
                else if (s[i] == ']' && (prnthss.empty() || prnthss.top() != '[')){
                    prnthss.push(' ');
                    break;
                }
                prnthss.pop();
            }
        }
        if(prnthss.empty())cout<<"Yes\n";
        else cout<<"No\n";
   }
   return 0;
}
