#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for(string& s: strs){
            int freq[26] = {0};
            for(char c: s){
                freq[c - 'a']++;
            }

            // convert freq arr to string

            stringstream keyBuilder;
            for(int i=0; i<26; i++){
                keyBuilder << freq[i] << '#';
            }
            
            string key = keyBuilder.str();
            anagramGroups[key].push_back(s);

        }
        
        vector<vector<string>> result;
        for(auto& pair : anagramGroups){
            result.push_back(pair.second);
        }

        return result;
    }
};



int main(){
    Solution s1;
    s1.groupAnagrams();
    return 0;
}
