// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& tasks, int k) {
    map<int, int> m;
    int ans = 0, waiting = 0;
    for (int i=0;i<tasks.size();i++) {
        if (m.count(tasks[i])) {
            if ((i - m[tasks[i]] + waiting) > k) {
                m[tasks[i]] = i;
                ans++;
            }
            else {
                ans += (k - (i - m[tasks[i]]));
                waiting += (k - (i - m[tasks[i]]));
                m[tasks[i]] = i;
                ans++;
            }
        }
        else {
            m[tasks[i]] = i;
            ans++;
        }
    }
    return ans;
}

int main() {
    vector<int> v = {0,0,0};
    // solve(v);
    cout<<solve(v, 4)<<'\n';
    return 0;
}