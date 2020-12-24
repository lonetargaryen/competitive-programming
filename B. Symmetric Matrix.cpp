#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n, m;
        cin>>n>>m;
        bool isSymmetric = false;
        while (n--) {
            int p, q, r, s;
            cin>>p>>q>>r>>s;
            if (q == r) {
                isSymmetric = true;
            }
        }
        if (isSymmetric && !(m%2)) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}