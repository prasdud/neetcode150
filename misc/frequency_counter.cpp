//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

class frequency_counter
{
    private:
    /* data */
    string sample;
    public:
    string getSample(){
        return sample;
    }

    void setSample(string str){
        sample = str;
    }

    int checkFrequency(string str, char c){
        int counter = 0;
        for (auto ch: str)
        {
            /* code */
            if (ch == c)
            {
                counter++;
                /* code */
            }
            
        }
        return counter;
        
    }

};


void solve() {
    // Your code here
    frequency_counter count;
    count.setSample("HIIPOWER");
    string temp = count.getSample();
    char ch = 'I';
    int res = count.checkFrequency(temp, ch);
    cout << "Frequency of "<<ch<<" is "<<res<<endl; 
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


