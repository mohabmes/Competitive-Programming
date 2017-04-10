#include <iostream>
#include <deque>
#include <cstdio>
using namespace std;

void print(deque<int>d){
    while(!d.empty()){
        cout<<" "<<d.front();
        d.pop_front();
        if(d.size())cout<<",";
    }cout<<"\n";
}

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,t;
    while (cin>>n && n!=0){
        deque<int> cards;
        deque<int> discarded;
        for(int i=0; i<n; i++)
            cards.push_back(i+1);
        while(cards.size()>1){
            t = cards.front();
            cards.pop_front();
            discarded.push_back(t);
            t = cards.front();
            cards.pop_front();
            cards.push_back(t);
        }
        cout<<"Discarded cards:";
        print(discarded);
        cout<<"Remaining card:";
        print(cards);
    }
    return 0;
}