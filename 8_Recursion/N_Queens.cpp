#include<bits/stdc++.h>
using namespace std;

void solve(int col, vector<string>& board, int n, vector<int>& leftRow, vector<int>& upperDiagonal, vector<int>& lowerDiagonal,vector<vector<string>>& ans){

        if (col == n){
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++){
            if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 &&
                upperDiagonal[n - 1 + col - row] == 0){

                board[row][col] = 'Q';

                leftRow[row] = 1;
                lowerDiagonal[row + col] = 1;
                upperDiagonal[n - 1 + col - row] = 1;

                solve(col + 1, board, n, leftRow, upperDiagonal, lowerDiagonal, ans);

                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row + col] = 0;
                upperDiagonal[n - 1 + col - row] = 0;
            }
        }
    }


int main() {

    int n = 4;

    vector<vector<string>> ans;

    vector<string> board(n, string(n, '.'));

    vector<int> leftRow(n, 0);
    vector<int> upperDiagonal(2 * n - 1, 0);
    vector<int> lowerDiagonal(2 * n - 1, 0);

    solve(0, board, n, leftRow, upperDiagonal, lowerDiagonal, ans);

    cout << "Total Solutions = " << ans.size() << "\n\n";

    for (int k = 0; k < ans.size(); k++) {
        cout << "Solution " << k + 1 << ":\n";

        for (string row : ans[k]) {
            cout << row << '\n';
        }

        cout << '\n';
    }

    return 0;
}