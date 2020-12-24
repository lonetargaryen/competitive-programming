#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, inp, twopower = 1;
        cin>>n;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin>>inp;
            v[i] = inp;
            if (inp!=0) {
                int currentpower = pow(2, ceil(log2(inp)));
                twopower = max(twopower, currentpower);
            }
        }
        // cout<<"twopower = "<<twopower<<'\n';
        bool isPresent = true;
        for (i=1; i<=twopower; i++) {
            isPresent = true;
            int currentXOR;
            for (int j=0; j<v.size(); j++) {
                currentXOR = v[j] ^ i;
                if (!(find(v.begin(), v.end(), currentXOR) != v.end())) {
                    isPresent = false;
                    break;
                }
            }
            if (isPresent) {
                cout<<i<<'\n';
                break;
            }
        }
        if (!isPresent)
            cout<<-1<<'\n';
    }
    return 0;
}