// https://codeforces.com/contest/1454/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, inp;
        cin>>n;
        map<int, int> m;
        vector<int> v(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
            m[v[i]]++;
        }
        map<int, int>::iterator itr;
        int lowest = 0;
        for (itr = m.begin();itr!=m.end();++itr) {
            if (itr->second == 1) {
                lowest = itr->first;
                break;
            }
        }
        if (lowest) {
            for (int i=0;i<n;i++) {
                if (v[i]==lowest) {
                    cout<<i+1<<'\n';
                    break;
                }
            }
        }
        else cout<<-1<<'\n';
    }

    return 0;
}