#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    while(cin>>n) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        bool cs=1, cq=1, cpq=1;

        int cmd, value;
        while(n--) {
            cin>>cmd>>value;
            if(cmd == 1) {
                s.push(value);
                q.push(value);
                pq.push(value);
            }
            else {
                if(s.empty() || s.top()!=value) cs=0;
                else s.pop();
                if(q.empty() || q.front()!=value) cq=0;
                else q.pop();
                if(pq.empty() || pq.top()!=value) cpq=0;
                else pq.pop();
            }
        }
        if(!cs && !cq && !cpq)cout<<"impossible"<<endl;
        else if(cs && !cq && !cpq) cout<<"stack"<<endl;
        else if(!cs && cq && !cpq) cout<<"queue"<<endl;
        else if(!cs && !cq && cpq) cout<<"priority queue"<<endl;
        else cout<<"not sure"<<endl;
    }
	return 0;
}
