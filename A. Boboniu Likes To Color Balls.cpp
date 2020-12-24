// https://codeforces.com/problemset/problem/1395/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int r,g,b,w;
        cin>>r;
        int oddCount = 0;
        if (r%2) oddCount++;
        cin>>g;
        if (g%2) oddCount++;
        cin>>b;
        if (b%2) oddCount++;
        cin>>w;
        if (w%2) oddCount++;

        if (oddCount<=1) cout<<"Yes\n";
        else if (oddCount==2) cout<<"No\n";
        else if ((oddCount==3) && r && b && g) cout<<"Yes\n";
        else if (oddCount==3) cout<<"No\n";
        else if (oddCount==4) cout<<"Yes\n";
    }

    return 0;
}