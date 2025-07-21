//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res = 0;

        stack<int> st;
        for(auto i: tokens){
            if (i != "+" && i != "-" && i != "*" && i != "/"){
                st.push(stoi(i));
            }
            else{

                int a = st.top(); st.pop();
                int b = st.top(); st.pop();

                if (i == "+") st.push(a + b);
                else if (i == "-") st.push(a - b);
                else if (i == "*") st.push(a * b);
                else if (i == "/" && b!=0) st.push(a / b);
            }
        }
        return st.top();
    }
};

void solve() 
{
    // Your code here
    Solution so;
    vector<string> tokens = {"2","1","+","3","*"};
    int res = so.evalRPN(tokens);
    cout << res << endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


