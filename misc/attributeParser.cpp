#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    unordered_map<string, string> tag_map;
    vector<string> tag_stack;

    regex attr_pattern(R"((\w+)\s*=\s*\"([^\"]+)\")");

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        if (line.substr(0, 2) == "</") {
            tag_stack.pop_back();
        } else {
            line = line.substr(1, line.length() - 2); // remove < and >

            stringstream ss(line);
            string tag_name;
            ss >> tag_name;

            // build current full path
            string full_path = tag_name;
            if (!tag_stack.empty()) {
                full_path = tag_stack.back() + "." + tag_name;
            }
            tag_stack.push_back(full_path);

            // Extract attributes from the remaining line
            smatch match;
            auto begin = sregex_iterator(line.begin(), line.end(), attr_pattern);
            auto end = sregex_iterator();

            for (auto it = begin; it != end; ++it) {
                string attr = (*it)[1];
                string val = (*it)[2];
                tag_map[full_path + "~" + attr] = val;
            }
        }
    }

    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        if (tag_map.find(query) != tag_map.end()) {
            cout << tag_map[query] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }
}

int32_t main() {
    fast_io;
    solve();
    return 0;
}
