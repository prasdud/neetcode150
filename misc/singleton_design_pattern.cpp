//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()


class singleton_design_pattern
{
    private:
    
    singleton_design_pattern(){}
    static singleton_design_pattern* instance;
        /* data */
    
    public:
    void test() {
        cout << "This should not print when calling directly" << endl;
    }

    static singleton_design_pattern* getInstance(){
        if(instance == nullptr)
            instance = new singleton_design_pattern();
        return instance;
    }
};

singleton_design_pattern* singleton_design_pattern::instance = nullptr;

void solve() {
    singleton_design_pattern* a = singleton_design_pattern::getInstance();
    singleton_design_pattern* b = singleton_design_pattern::getInstance();

    //these should fail
    //singleton_design_pattern* s2 = new singleton_design_pattern();
    //singleton_design_pattern s1;

    if (a == b) {
        cout << "singleton works" << endl;
    } else {
        cout << "different instances singleton fail" << endl;
    }

    a->test();
    b->test();
}


int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


