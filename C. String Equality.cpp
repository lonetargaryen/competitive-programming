// https://codeforces.com/contest/1451/problem/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        string b;
        cin>>b;
        if (k==1) {
            cout<<"Yes\n";
            continue;
        }
        map<char, int> amap, bmap;
        for (int i=0;i<n;i++) {
            bmap[b[i]]++;
            amap[a[i]]++;
        }
        map<char, int>::iterator itr; 
        bool allEqual = true;
        for (itr = bmap.begin();itr!=bmap.end();++itr) {
            if (itr->second != amap[itr->first]) {
                allEqual = false;
                break;
            }
        }
        if (allEqual) {
            cout<<"Yes\n";
            continue;
        }
        bool ok = true;
        for (itr = amap.begin();itr!=amap.end();++itr) {
            if (bmap.find(itr->first) != bmap.end()) {
                if (itr->second == bmap[itr->first]) {
                    // amap.erase(itr->first);
                    // bmap.erase(itr->first);
                    continue;
                }

            }
            else {
                if (itr->first > bmap.begin()->first) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}