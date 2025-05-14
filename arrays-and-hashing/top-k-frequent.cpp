//prasdud
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      int numsSize = nums.size();
      unordered_map<int, int> freq;
    

        for (int num : nums){
            freq[num]++;
        } 
      // Building and filling buckets
      vector <vector< int >> buckets(numsSize+1);
        for (auto& [num, f] : freq){
            buckets[f].push_back(num);
        }
        vector <int> result;
        for (int i=numsSize; i>=1 && result.size() < k; --i){
            for (int num: buckets[i]){
                result.push_back(num);
                if(result.size() == k) break;
            }
        }
        return result;
    }
};


void solve() {
    // Your code here
    vector <int> nums = {1, 2, 2, 3, 3, 3};
    int k = 2;
    Solution s;
    s.topKFrequent(nums, k);
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


