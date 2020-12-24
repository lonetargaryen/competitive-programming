// https://codeforces.com/contest/1452/problem/0
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        int minSteps = 0;
        if (abs(x-y)<=1) {
            minSteps = x+y;
        }
        else {
            if (x < y) {
                int temp = x;
                x = y;
                y = temp;
            }
            int getHeight = 2*y;
            int reachPoint = 2*(x-y);
            minSteps = getHeight + reachPoint - 1;
        }
        cout<<minSteps<<'\n';
    }

    return 0;
}