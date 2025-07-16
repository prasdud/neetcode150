#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    unordered_map<string, string> attr_map;
    string curr_path;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        // Remove < and >
        if (line[1] == '/') {
            // Closing tag
            int pos = curr_path.rfind('.');
            if (pos != string::npos)
                curr_path = curr_path.substr(0, pos); // remove last tag
            else
                curr_path = ""; // root level
        } else {
            // Opening tag
            line = line.substr(1, line.length() - 2); // strip < >

            stringstream ss(line);
            string tag;
            ss >> tag;

            // Update current path
            if (curr_path.empty())
                curr_path = tag;
            else
                curr_path += "." + tag;

            // Parse attribute-value pairs
            string attr, eq, val;
            while (ss >> attr >> eq >> val) {
                val = val.substr(1, val.length() - 2); // remove quotes
                attr_map[curr_path + "~" + attr] = val;
            }
        }
    }

    // Handle queries
    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        if (attr_map.count(query))
            cout << attr_map[query] << endl;
        else
            cout << "Not Found!" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
