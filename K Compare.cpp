// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& a, vector<int>& b, int k) {
    if (!a.size()) return 0;
    if (!b.size() || !k) return a.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int limit = b[k-1];
    // if (k == b.size()) limit = b[k-1];
    // else limit = b[k];
    int ans = 0;
    for (int i=0;i<a.size();i++) {
        if (a[i] < limit) ans++;
        else break;
    }
    return ans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {-9, 9};
    // solve(v);
    cout<<solve(v, v1, 1)<<'\n';
    return 0;
}