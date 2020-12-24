// https://binarysearch.com/problems/Line-of-People
#include<bits/stdc++.h>

using namespace std;

int solve(int n, int a, int b) {
    if (a+b<=n) return b+1;
    else if (a>=n || b>n) return 0;
    else return n-a;
}

int main() {
    cout<<solve(10, 3, 4)<<'\n';
    return 0;
}