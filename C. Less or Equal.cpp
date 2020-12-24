#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n, k, inp;
    cin>>n>>k;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++) {
        cin>>inp;
        v[i] = inp;
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout<<'\n';
    if (k == 0) {
        if (v[0] == 1)
            cout<<-1;
        else
            cout<<(v[0]-1);
    }
    else if (k == n) {
        cout<<v[k-1];
    }
    else if (v[k] == v[k-1]) {
        cout<<-1;
    }
    else {
        cout<<(v[k] - 1);
    }
    return 0;
}