// https://codeforces.com/problemset/problem/1362/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        unsigned long long int a,b;
        cin>>a>>b;
        unsigned long long int steps = 0;
        if (a==b) {
            cout<<steps<<'\n';
        }
        else {
            if (a>b) {
                a = a^b;
                b = a^b;
                a = a^b;
            }
            while ((a*8) <= b) {
                a *= 8;
                steps++;
                if (a==b) break;
            }
            while ((a*4) <= b) {
                a *= 4;
                steps++;
                if (a==b) break;
            }
            while ((a*2) <= b) {
                a *= 2;
                steps++;
                if (a==b) break;
            }
            if (a==b) cout<<steps<<'\n';
            else cout<<-1<<'\n';
        }
    }

    return 0;
}