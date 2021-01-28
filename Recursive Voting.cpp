// https://binarysearch.com/problems/The-Maze-Runner
#include<bits/stdc++.h>

using namespace std;

vector<char> v;
vector<bool> visited;

void recursive(vector<int>& votes, int x) {
    if (visited[x]) return;
    visited[x] = true;
    if (votes[x] < 0) v[x] = 'a';
    if (votes[x] < votes.size()) {
        recursive(votes, votes[x]);
        v[x] = v[votes[x]];
    }
}

int solve(vector<int>& votes) {
    v.clear();
    visited.clear();
    v.resize(votes.size(), 'b');
    visited.resize(votes.size(), false);
    for (int i=0;i<votes.size();i++) {
        if (!visited[i]) recursive(votes, i);
    }
    int ans = 0;
    for (int i=0;i<v.size();i++) {
        if (v[i] == 'a') ans++;
    }
    return ans;
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}