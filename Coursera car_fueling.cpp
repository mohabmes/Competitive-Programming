#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int d, int n, int tank, vector<int> & stops) {
    int fuel = tank, refill=0;
    for (int i = 0; i < stops.size()-1; ++i){
        if((stops[i+1]-stops[i]) >tank || stops[1] > tank)
            return -1;

        if(fuel >= stops[i+1] - stops[i]){
            fuel -= (stops[i+1] - stops[i]);
        }
        else if(fuel < stops[i+1] - stops[i]){
            fuel=tank;
            fuel -= (stops[i+1] - stops[i]);
            refill++;
        }
        else return -1;
    }
    return refill;
}


int main() {
    //freopen("input.txt", "r",stdin);
    int d, m, n;
    cin >> d >> m >> n;
    n++;

    vector<int> stops(n);
    for (int i = 1; i < n; i++)
        cin >> stops[i];
    stops.push_back(d);
    cout << compute_min_refills(d, n, m, stops) << "\n";

    return 0;
}

