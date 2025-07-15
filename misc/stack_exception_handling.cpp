//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()


class customStack
{
private:
    int arr[5];
    int topIndex = -1;
    /* data */
public:
    customStack(){
        topIndex=-1;
    }

    int pop(){
        if(topIndex==-1){
            throw underflow_error("stack underflow");
        }
        return arr[topIndex--];
    }

    void push(int n){
        if (topIndex == 4)
        {
            throw overflow_error("Stack overflow");
            /* code */
        }
        arr[++topIndex] = n;
    }

    int top(){
        if (topIndex==-1)
        {
            throw underflow_error("stack underflow, stack empty");
            /* code */
        }
        return arr[topIndex];
    }
};



void solve() {
    // Your code here

    customStack s1;
    try {
        s1.push(10);
        s1.push(20);
        s1.push(20);
        s1.push(20);
        s1.push(20);
        s1.push(20);

        cout << "Top: " << s1.top() << endl;

        cout << "Popped: " << s1.pop() << endl;
        cout << "Popped: " << s1.pop() << endl;

        cout << "Popped again: " << s1.pop() << endl;
    }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    

}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


