#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int x1,y1,x2,y2,th,tv;
        cin>>x1>>y1>>x2>>y2;
        th = abs(x1-x2);
        tv = abs(y1-y2);
        if ((th==0) || (tv==0)) {
            th==0 ? cout<<tv<<'\n' : cout<<th<<'\n';
        }
        else {
            cout<<th+tv+2<<'\n';
        }
    }
    return 0;
}