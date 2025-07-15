//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define PI 3.14159

class operator_overloading
{
    private:
    float radius;
    float area;

        /* data */
    public:
    void setRadius(float val){
        radius = val;
    }

    float getRadius(){
        cout << radius;
        return radius;
    }

    void setArea(float val){
        area = val;
    }

    float getArea(){
        cout << area;
        return area;
    }

    float calcArea(){
        return PI*radius*radius;
    }

    bool operator==(operator_overloading const&obj){
        operator_overloading res;
        return this ->area == obj.area;
    }
};



void solve() {
    // Your code here
    operator_overloading op1;
    op1.setRadius(2.14);
    op1.setArea(op1.calcArea());
    float res = op1.getArea();
    cout << "The area is "<<res<<endl;

    operator_overloading op2;
    op2.setRadius(2.11);
    op2.setArea(op2.calcArea());
    bool result = op1==op2;
    cout <<"The both areas are equal = "<< result<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


