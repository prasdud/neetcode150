#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                cout << "true" << endl;
                return true;
            }
            seen.insert(num);
        }
        cout << "false" << endl;
        return false;
    }
};

int main() {
    vector<int> nums{1, 2, 3, 3};
    Solution s;
    s.hasDuplicate(nums);
    return 0;
}

