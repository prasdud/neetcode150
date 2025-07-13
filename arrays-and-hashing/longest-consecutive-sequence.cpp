//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        int maxLen=0;
        
        for(int val: nums){
            hash.insert(val);
        }
        for(int num: nums){
            if(hash.find(num-1) == hash.end()){
                int currentNum = num;
                int currentStreak = 1;
                while(hash.find(currentNum+1) != hash.end()){
                    currentNum++;
                    currentStreak++;
                }
                maxLen = max(maxLen, currentStreak);
            }
        }
        cout<<maxLen;
        return maxLen;

    }
};

void solve() {
    // Your code here
    Solution s;
    vector<int> input = {2,4,20,10,3,4,5};
    s.longestConsecutive(input);
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


