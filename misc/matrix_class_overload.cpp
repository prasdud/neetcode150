//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()


class matrix_class_overload
{
    private:
    /* data */
    int matrix[2][2];
    public:

    matrix_class_overload(){
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                matrix[i][j] = 0;
            }
            /* code */
        } 
    }

    matrix_class_overload(int data[2][2]){
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                matrix[i][j] = data[i][j];
            }
            /* code */
        } 
    }

    matrix_class_overload operator*(matrix_class_overload const& obj){
        matrix_class_overload res;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                res.matrix[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    res.matrix[i][j] += matrix[i][k] * obj.matrix[k][j];
                }
                
                /* code */
            }
            
            /* code */
        }
        
        return res;
    }

    void printRes() {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

};


void solve() {
    // Your code here
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    matrix_class_overload m1(a);
    matrix_class_overload m2(b);
    matrix_class_overload result = m1 * m2;
    result.printRes();

}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


