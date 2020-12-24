#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n, inp;
    cin>>n;
    vector<long long int> v(n), sortv(n), sumv(n+1), sumsortv(n+1);
    for (long long int i = 0; i < n; i++) {
        cin>>inp;
        v[i] = inp;
    }
    sortv = v;
    sort(sortv.begin(), sortv.end());
    // for (int i = 0; i < sortv.size(); i++)
    //     cout << sortv[i] << " ";
    // cout<<'\n';
    sumv[0] = 0;
    sumsortv[0] = 0;
    for (long long int i = 1; i <= n; i++) {
        sumv[i] = sumv[i-1] + v[i-1];
        sumsortv[i] = sumsortv[i-1] + sortv[i-1];
    }
    // for (int i = 0; i < sumsortv.size(); i++)
    //     cout << sumsortv[i] << " ";
    // cout<<'\n';
    long long int m;
    cin>>m;
    while (m--) {
        long long int type, l, r;
        cin>>type>>l>>r;
        if (type == 1) {
            cout<<sumv[r] - sumv[l-1]<<'\n';
        }
        else {
            cout<<sumsortv[r] - sumsortv[l-1]<<'\n';
        }
    }
    return 0;
}