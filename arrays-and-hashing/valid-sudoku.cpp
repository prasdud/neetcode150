//prasdud
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<char> hash; 
    bool rowChecked[9] = {false};
    bool colChecked[9] = {false};
    bool boxChecked[9] = {false};

      for(int i=0;i<81;i++){
            //handle empty box
            int row = i/9;
            int col = i%9;
            //if(board[row][col] == '.')
            //    continue;

            //handle rows
            if(!rowChecked[row]){
                for(int j=0;j<9;j++){
                if(board[row][j] == '.') continue;

                    //if board[i] already exists in hash, break INVALID SUDOKU
                    //else add board[i] to hash and continue
                    auto result = hash.insert(board[row][j]);
                    if(result.second == false){
                        cout << "INVALID";
                    
                        hash.clear();
                        return false;
                    }
                
                }
                rowChecked[row]=true;
                hash.clear();
            }


            //handle columns 
            if(!colChecked[col]){
                for(int j=0;j<9;j++){
                if(board[j][col] == '.') continue;

                    //if board[i] already exists in hash, break INVALID SUDOKU
                    //else add board[i] to hash and continue

                    auto result = hash.insert(board[j][col]);
                    if(result.second == false){
                        cout << "INVALID";
                        
                        hash.clear();
                        return false;
        
                    }
                }

                colChecked[col] = true;
                hash.clear();
            
            }

            //handle squares
            
            int row_start = 3*(row/3);
            int col_start = 3*(col/3);
            int boxIndex = (row/3) * 3 + (col/3);

            if(!boxChecked[boxIndex]){
                for(int r=row_start;r<row_start+3;r++){
                    for(int c = col_start; c<col_start+3; c++){
                        if(board[r][c] == '.') continue;
                        auto result = hash.insert(board[r][c]);
                        if(result.second == false){
                            cout << "INVALID";
                            hash.clear();
                            return false;
        
                        }
                    }
                }
                boxChecked[boxIndex] = true;
                hash.clear();

            }
        }
        return true;
    }
};

void solve() {
    // Your code here
    vector<vector<char>> input = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};
    Solution s;
    bool res = s.isValidSudoku(input);
    cout << res;
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


