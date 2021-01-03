// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& tasks, int k) {
    unordered_map<int, int> m;
    int time = 0;
    for (int i=0;i<tasks.size();i++) {
        if (m.count(tasks[i])) {
            if ((time - m[tasks[i]]) > k) {
                m[tasks[i]] = time;
                time++;
            }
            else {
                time += (k - (time - m[tasks[i]]) + 1);
                m[tasks[i]] = time;
                time++;
            }
        }
        else {
            m[tasks[i]] = time;
            time++;
        }
    }
    return time;
}

int main() {
    vector<int> v = {0,0,1,0};
    // solve(v);
    cout<<solve(v, 2)<<'\n';
    return 0;
}