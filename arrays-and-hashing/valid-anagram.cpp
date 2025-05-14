#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isAnagram(string ss, string tt) {
        if (ss.length() != tt.length()) return false;

        int count[26] = {0};
        for (int i = 0; i < ss.length(); i++) {
            count[ss[i] - 'a']++;
            count[tt[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true;
    }
};

int main() {
    Solution s;
    s.isAnagram("fe", "ja");
    return 0;
    
}


