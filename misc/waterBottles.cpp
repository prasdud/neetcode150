//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int canDrink=numBottles;
        int empty = numBottles;
        while(empty >= numExchange){
            int newBottles = (empty)/ numExchange;
            canDrink+=newBottles;
            empty = newBottles+ (empty % numExchange);
        }
        
        cout << canDrink;
        return canDrink;
    }
};

void solve() {
    // Your code here
    Solution s;
    s.numWaterBottles(15, 4);
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


