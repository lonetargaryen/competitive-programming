// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(int x, int y) {
    string wd1 = "", wd2 = "";
    int ans = 0;
    while (x && y) {
        if (x%2 != y%2) ans++;
        x /= 2;
        y /= 2;
    }
    while (x) {
        if (x%2) ans++;
        x /= 2;
    }
    while (y) {
        if (y%2) ans++;
        y /= 2;
    }
    return ans;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}