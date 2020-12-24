#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int sum=0,temp;
        while (n--) {
            cin>>temp;
            sum += temp;
        }
        m == sum ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}