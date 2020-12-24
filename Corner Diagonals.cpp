// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(int n) {
    if (n%2) {
        return ((n*n) - ((n*2) - 1));
    }
    else {
        return ((n*n) - (n*2));
    }
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}