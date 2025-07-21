//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        int distance = 0;
        for(int i =0; i<boxes.size(); i++){
            int destination = boxes[i];
            distance = 0;
            for(int j=0; j<boxes.size(); j++){
                if(boxes[j] == '1'){
                    distance += abs(j-i);
                }
                else{
                    continue;
                }
            }

            res.push_back(distance);
        }
        return res;
    }
};

void solve() {
    Solution s;
    string boxes = "001011";
    vector<int> res = s.minOperations(boxes);
    for(auto el: res){
        cout << el << endl;
    }
    // Your code here
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


