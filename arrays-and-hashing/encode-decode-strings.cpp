//prasdud
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

class Solution {
public:

//     string encode(vector<string>& strs) {
//         string result;
//         int temp;
//         unordered_map<int, vector<string>> counter;
//         for(const string& str: strs){
//             temp = str.length();
//             counter[temp].push_back(str);
//         }
// 
//         //cout << result;
//         for(auto& [key, value] : counter){
//             for(const string& str: value){
//                 result += to_string(key) + '#' +str;
//             }
//             //cout<<key<<' '<<value<<endl;
//         }
//         //cout << result;
//         return result;
//     }
    string encode(vector<string>& strs) {
        string result;
        for (const string& str : strs) {
            result += to_string(str.length()) + '#' + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i =0;
        while(i<s.size()){
            int j=i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            i = j+1;
            result.push_back(s.substr(i, len));
            i+=len;

        }
        for(auto& s: result){
           // cout << s <<endl;
        }
        return result;
    }
};


void solve() {
    // Your code here
    vector<string> strr = {"neet","code","love","you"};
    Solution s1;
    string str2 = s1.encode(strr);
    vector<string>str23 = s1.decode(str2);
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


