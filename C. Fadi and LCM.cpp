// https://codeforces.com/contest/1285/problem/C
#include<bits/stdc++.h>

using namespace std;

unsigned long long int lcm(unsigned long long int a, unsigned long long int b){
    return a / __gcd(a, b) * b;
}

int main() {
    unsigned long long int x;
    cin>>x;
    unsigned long long int biggest = 1;
    for (unsigned long long int i=1;i*i<=x;i++) {
        if (!(x%i) && lcm(i, x/i)==x) {
            biggest = i;
        }
    }
    cout<<biggest<<' '<<x/biggest;

    return 0;
}