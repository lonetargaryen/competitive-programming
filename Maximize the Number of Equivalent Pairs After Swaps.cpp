// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& A, vector<int>& B, vector<vector<int>>& C) {
    unordered_map<int, pair<int, int>> m;
    unordered_set<int> solvedIndexes;
    int ans = 0;
    for (int i=0;i<A.size();i++) {
        m[i] = {A[i], B[i]};
        if (A[i] == B[i]) {
            ans += 1;
            solvedIndexes.insert(i);
        }
    }
    for (int i=0;i<C.size();i++) {
        // if (m[C[i][0]].first == m[C[i][0]].second && m[C[i][1]].first == m[C[i][1]].second) {
        //     // ans += 2;
        //     continue;
        // }
        // else if ((m[C[i][0]].first == m[C[i][0]].second) || (m[C[i][1]].first == m[C[i][1]].second)) {
        //     // ans += 1;
        //     continue;
        // }
        if ((m[C[i][0]].first == m[C[i][1]].second) && (!solvedIndexes.count(C[i][1]))) {
            ans += 1;
            // solvedIndexes.insert(C[i][0]);
            solvedIndexes.insert(C[i][1]);
        }
        if ((m[C[i][1]].first == m[C[i][0]].second) && (!solvedIndexes.count(C[i][0]))) {
            ans += 1;
            solvedIndexes.insert(C[i][0]);
            // solvedIndexes.insert(C[i][1]);
        }
        // else {
        //     if ((m[C[i][0]].first == m[C[i][1]].second) && (!solvedIndexes.count(C[i][1]))) {
        //         ans += 1;
        //         // solvedIndexes.insert(C[i][0]);
        //         solvedIndexes.insert(C[i][1]);
        //     }
        //     if ((m[C[i][1]].first == m[C[i][0]].second) && (!solvedIndexes.count(C[i][0]))) {
        //         ans += 1;
        //         solvedIndexes.insert(C[i][0]);
        //         // solvedIndexes.insert(C[i][1]);
        //     }
        // }
    }
    return ans;
}

int solve(vector<int>& A, vector<int>& B, vector<vector<int>>& C) {
    int ans = 0;
    for (int i=0;i<A.size();i++) if (A[i] == B[i]) ans++;
    sort(C.begin(), C.end());
    for (int i=0;i<C.size();i++) {
        int a0 = A[C[i][0]], b0 = B[C[i][0]], a1 = A[C[i][1]], b1 = B[C[i][1]];
        if ((a0 == b0) && (a1 == b1)) continue;
        else if ((a0 == b0) || (a1 == b1)) continue;
        else {
            if ((a0 == b1) && (a1 == b0)) {
                int temp = A[C[i][0]];
                A[C[i][0]] = A[C[i][1]];
                A[C[i][1]] = temp;
                ans += 2;
            }
            else if ((a0 == b1) || (a1 == b0)) {
                int temp = A[C[i][0]];
                A[C[i][0]] = A[C[i][1]];
                A[C[i][1]] = temp;
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> A = {2, 1, 1};
    vector<int> B = {1, 0, 2};
    vector<vector<int>> C = {{0,1}, {1, 2}};
    // solve(v);
    cout<<solve(A, B, C)<<'\n';
    return 0;
}