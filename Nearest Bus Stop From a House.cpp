// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

// int BFS(vector<vector<int>>& matrix, vector<vector<bool>>& visitedCells, vector<vector<int>>& dp, int x, int y) {
//     list<pair<pair<int, int>, int>> queue;
//     visitedCells[x][y] = true;

//     if (x-1 >= 0) {
//         queue.push_back({{x-1, y}, 1});
//         visitedCells[x-1][y] = true;
//     }
//     if (y+1 < matrix[0].size()) {
//         queue.push_back({{x, y+1}, 1});
//         visitedCells[x][y+1] = true;
//     }
//     if (x+1 < matrix.size()) {
//         queue.push_back({{x+1, y}, 1});
//         visitedCells[x+1][y] = true;
//     }
//     if (y-1 >= 0) {
//         queue.push_back({{x, y-1}, 1});
//         visitedCells[x][y-1] = true;
//     }

//     vector<pair<pair<int, int>, int>>::iterator itr;
//     int minDistance = INT_MAX;
//     while (!queue.empty()) {
//         pair<pair<int, int>, int> curr = queue.front();
//         if (matrix[curr.first.first][curr.first.second] == 3) {
//             if (curr.second < minDistance) minDistance = curr.second;
//             queue.pop_front();
//         }
//         else if (matrix[curr.first.first][curr.first.second] == 1 || matrix[curr.first.first][curr.first.second] == 2) {
//             queue.pop_front();
//         }
//         else {
//             queue.pop_front();
//             if (curr.first.first-1 >= 0) {
//                 if (!visitedCells[curr.first.first-1][curr.first.second]) {
//                     queue.push_back({{curr.first.first-1, curr.first.second}, curr.second + 1});
//                     visitedCells[curr.first.first-1][curr.first.second] = true;
//                 }
//             }
//             if (curr.first.second+1 < matrix[0].size()) {
//                 if (!visitedCells[curr.first.first][curr.first.second+1]) {
//                     queue.push_back({{curr.first.first, curr.first.second+1}, curr.second + 1});
//                     visitedCells[curr.first.first][curr.first.second+1] = true;
//                 }
//             }
//             if (curr.first.first+1 < matrix.size()) {
//                 if (!visitedCells[curr.first.first+1][curr.first.second]) {
//                     queue.push_back({{curr.first.first+1, curr.first.second}, curr.second + 1});
//                     visitedCells[curr.first.first+1][curr.first.second] = true;
//                 }
//             }
//             if (curr.first.second-1 >= 0) {
//                 if (!visitedCells[curr.first.first][curr.first.second-1]) {
//                     queue.push_back({{curr.first.first, curr.first.second-1}, curr.second + 1});
//                     visitedCells[curr.first.first][curr.first.second-1] = true;
//                 }
//             }
//         }
//     }
//     if (minDistance == INT_MAX) return -1;
//     else {
//         dp[x][y] = minDistance;
//         return minDistance;
//     }
// }

// // int backtrack(vector<vector<int>>& matrix, int x, int y, int distance, string source, set<pair<int, int>> visitedCells) {
// //     cout<<x<<' '<<y<<' '<<distance<<'\n';
// //     if (x < 0 || x >= matrix.size()) return -1;
// //     if (y < 0 || y >= matrix[0].size()) return -1;
// //     if (matrix[x][y] == 3) return distance;
// //     if (matrix[x][y] == 1 || matrix[x][y] == 2) return -1;
// //     if (visitedCells.count({x, y})) return -1;
// //     else visitedCells.insert({x, y});
// //     int upDist = INT_MAX, leftDist = INT_MAX, rightDist = INT_MAX, downDist = INT_MAX;
// //     if (source != "UP") upDist = backtrack(matrix, x-1, y, distance+1, "DOWN", visitedCells);
// //     if (source != "LEFT") leftDist = backtrack(matrix, x, y-1, distance+1, "RIGHT", visitedCells);
// //     if (source != "RIGHT") rightDist = backtrack(matrix, x, y+1, distance+1, "LEFT", visitedCells);
// //     if (source != "DOWN") downDist = backtrack(matrix, x+1, y, distance+1, "UP", visitedCells);
// //     if (upDist == -1) upDist = INT_MAX;
// //     if (leftDist == -1) leftDist = INT_MAX;
// //     if (rightDist == -1) rightDist = INT_MAX;
// //     if (downDist == -1) downDist = INT_MAX;
// //     return min(upDist, min(leftDist, min(rightDist, downDist)));
// // }

// int solve(vector<vector<int>>& matrix) {
//     int n = matrix.size(), m = matrix[0].size(), ans = INT_MAX;
//     vector<vector<int>> dp(n, vector<int>(m, -1));
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             if (matrix[i][j] == 2) {
//                 // set<pair<int, int>> visitedCells;
//                 vector<vector<bool>> visitedCells(n, vector<bool>(m));
//                 int currDist = BFS(matrix, visitedCells, dp, i, j);
//                 if (!(currDist == -1)) {
//                     if (ans == -1) ans = currDist;
//                     else ans = min(ans, currDist);
//                 }
//                 // if (currDist < ans) ans = currDist;
//                 // int upDist = backtrack(matrix, i-1, j, 1, "DOWN", visitedCells);
//                 // visitedCells.clear();
//                 // int leftDist = backtrack(matrix, i, j-1, 1, "RIGHT", visitedCells);
//                 // visitedCells.clear();
//                 // int rightDist = backtrack(matrix, i, j+1, 1, "LEFT", visitedCells);
//                 // visitedCells.clear();
//                 // int downDist = backtrack(matrix, i+1, j, 1, "UP", visitedCells);
//                 // if (upDist == -1) upDist = INT_MAX;
//                 // if (leftDist == -1) leftDist = INT_MAX;
//                 // if (rightDist == -1) rightDist = INT_MAX;
//                 // if (downDist == -1) downDist = INT_MAX;
//                 // int currDist = min(upDist, min(leftDist, min(rightDist, downDist)));
//                 // if (currDist != INT_MAX) {
//                 //     if (currDist < ans) ans = currDist;
//                 // }
//             }
//         }
//     }
//     if (ans == INT_MAX) return -1;
//     else return ans;
// }

// int backtrack(vector<vector<int>>& matrix, vector<vector<int>>& dp, int x, int y, int distance, string source, set<pair<int, int>>& visitedCells) {
//     if (x < 0 || x >= matrix.size()) return -1;
//     if (y < 0 || y >= matrix[0].size()) return -1;
//     if (matrix[x][y] == 3) return distance;
//     if (matrix[x][y] == 1 || matrix[x][y] == 2) return -1;
//     if (visitedCells.count({x, y})) return -1;
//     else visitedCells.insert({x, y});
//     if (dp[x][y] != -1) return dp[x][y];
//     int upDist = INT_MAX, leftDist = INT_MAX, rightDist = INT_MAX, downDist = INT_MAX;
//     if (source != "UP") upDist = backtrack(matrix, dp, x-1, y, distance+1, "DOWN", visitedCells);
//     if (source != "LEFT") leftDist = backtrack(matrix, dp, x, y-1, distance+1, "RIGHT", visitedCells);
//     if (source != "RIGHT") rightDist = backtrack(matrix, dp, x, y+1, distance+1, "LEFT", visitedCells);
//     if (source != "DOWN") downDist = backtrack(matrix, dp, x+1, y, distance+1, "UP", visitedCells);
//     visitedCells.erase({x, y});
//     if (upDist == -1) upDist = INT_MAX;
//     if (leftDist == -1) leftDist = INT_MAX;
//     if (rightDist == -1) rightDist = INT_MAX;
//     if (downDist == -1) downDist = INT_MAX;
//     dp[x][y] = min(upDist, min(leftDist, min(rightDist, downDist)));
//     return dp[x][y];
// }

// int solve(vector<vector<int>>& matrix) {
//     int n = matrix.size(), m = matrix[0].size(), ans = INT_MAX;
//     vector<vector<int>> dp(n, vector<int>(m, -1));
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             if (matrix[i][j] == 2) {
//                 set<pair<int, int>> visitedCells;
//                 int upDist = backtrack(matrix, dp, i-1, j, 1, "DOWN", visitedCells);
//                 visitedCells.clear();
//                 int leftDist = backtrack(matrix, dp, i, j-1, 1, "RIGHT", visitedCells);
//                 visitedCells.clear();
//                 int rightDist = backtrack(matrix, dp, i, j+1, 1, "LEFT", visitedCells);
//                 visitedCells.clear();
//                 int downDist = backtrack(matrix, dp, i+1, j, 1, "UP", visitedCells);
//                 if (upDist == -1) upDist = INT_MAX;
//                 if (leftDist == -1) leftDist = INT_MAX;
//                 if (rightDist == -1) rightDist = INT_MAX;
//                 if (downDist == -1) downDist = INT_MAX;
//                 int currDist = min(upDist, min(leftDist, min(rightDist, downDist)));
//                 if (currDist != INT_MAX) {
//                     if (currDist < ans) ans = currDist;
//                 }
//             }
//         }
//     }
//     if (ans == INT_MAX) return -1;
//     else return ans;
// }

int backtrack(vector<vector<int>>& matrix, vector<vector<int>>& dp, int x, int y, set<pair<int, int>>& visitedCells) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return -1;
    if (matrix[x][y] == 1 || matrix[x][y] == 2) return -1;
    if (matrix[x][y] == 3) return 1;
    if (dp[x][y] != -1) return dp[x][y];
    if (visitedCells.count({x, y})) return -1;
    else visitedCells.insert({x, y});
    int upDist = backtrack(matrix, dp, x-1, y, visitedCells);
    upDist == -1 ? upDist = INT_MAX : upDist = 1 + upDist;
    int rightDist = backtrack(matrix, dp, x, y+1, visitedCells);
    rightDist == -1 ? rightDist = INT_MAX : rightDist = 1 + rightDist;
    int downDist = backtrack(matrix, dp, x+1, y, visitedCells);
    downDist == -1 ? downDist = INT_MAX : downDist = 1 + downDist;
    int leftDist = backtrack(matrix, dp, x, y-1, visitedCells);
    leftDist == -1 ? leftDist = INT_MAX : leftDist = 1 + leftDist;
    visitedCells.erase({x, y});
    int minDistance = min(upDist, min(leftDist, min(rightDist, downDist)));
    if (minDistance != INT_MAX) dp[x][y] = minDistance;
    return dp[x][y];
}

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), ans = INT_MAX;
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (matrix[i][j] == 2) {
                set<pair<int, int>> visitedCells;
                int u = backtrack(matrix, dp, i-1, j, visitedCells);
                u == -1 ? u = INT_MAX : u = u;
                int r = backtrack(matrix, dp, i, j+1, visitedCells);
                r == -1 ? r = INT_MAX : r = r;
                int d = backtrack(matrix, dp, i+1, j, visitedCells);
                d == -1 ? d = INT_MAX : d = d;
                int l = backtrack(matrix, dp, i, j-1, visitedCells);
                l == -1 ? l = INT_MAX : l = l;
                int minD = min(u, min(l, min(r, d)));
                if (minD < ans) ans = minD;
            }
        }
    }
    if (ans == INT_MAX) ans = -1;
    return ans;
}

int main() {
    vector<vector<int>> v = {{0,0,0},{2,0,0},{3,0,2}};
    // vector<int> v
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}