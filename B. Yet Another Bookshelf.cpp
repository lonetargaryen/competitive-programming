// https://codeforces.com/contest/1433/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        int lastOneIndex = 0;
        for (int i=0;i<n;i++) if (v[i]) lastOneIndex = i;
        bool firstOne = false, lastOne = false;
        int zeroCount = 0;
        for (int i=0;i<n;i++) {
            if (v[i]) {
                if (!firstOne) firstOne = true;
                if (i==lastOneIndex) break;
            }
            else if (!(v[i]) && firstOne) zeroCount++;
        }
        cout<<zeroCount<<'\n';
    }

    return 0;
}