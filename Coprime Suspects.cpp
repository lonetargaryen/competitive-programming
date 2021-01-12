// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    // if (max(a, b) % min(a, b) == 0) return 0;
    // if (a > b) {
    //     a = a ^ b;
    //     b = a ^ b;
    //     a = a ^ b;
    // }
    if (__gcd(a, b) > 1) return 0;
    if (__gcd(a+1, b) > 1) return 1;
    if (__gcd(a, b+1) > 1) return 1;
    if (__gcd(a-1, b) > 1) return 1;
    if (__gcd(a, b-1) > 1) return 1;
    return 2;
    // if (__gcd(a+1, b+1) > 1) return 2;
    // if (__gcd(a-1, b-1) > 1) return 2;
    // if (__gcd(a, b+1) > 1) return 1;
    // cout<<a<<' '<<b<<'\n';
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    cout<<solve(v1, 2)<<'\n';
    return 0;
}