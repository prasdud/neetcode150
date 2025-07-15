//prasdud
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()


class bank_account_class
{
    private:
    int accountNumber;
    string customerName;
    float currentBalance;
    
    public:
    bank_account_class(int Number, string Name, float Balance){
        accountNumber = Number;
        customerName = Name;
        currentBalance = Balance;
    }

    float getCurrentBalance(){
        return currentBalance;
    }

    void setCurrentBalance(float balance){
        currentBalance = balance;
    }

    void accountOverview(){
        cout << "Account number = "<<accountNumber<<"\nCustomer Name = "<<customerName<<"\n Current balance = "<<currentBalance<<endl;
    }

};


void solve() {
    // Your code here
    bank_account_class account(1234, "john", 45000);
    account.getCurrentBalance();
    account.accountOverview();
    account.setCurrentBalance(55000);
    account.accountOverview();

}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


