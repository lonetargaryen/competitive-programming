// https://binarysearch.com/problems/3-and-7
#include<bits/stdc++.h>

using namespace std;

bool solve(int n) {
    if (!(n%3) || !(n%7) || !(n%10)) return true;
    if (n > 11) return true;
    return false;
}

int main() {
    cout<<solve(11)<<'\n';
    return 0;
}