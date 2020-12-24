// https://codeforces.com/contest/1285/problem/A
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n <= 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n==1) {
            cout<<1<<'\n';
            continue;
        }
        // bool kidsSeats[(4*n) + 1] = {0};
        set<int> seated;
        for (int j=(4*n);j>=1;j--) {
            if (isPrime(j)) continue;
            if (seated.size()==n) break;
            bool ok = true;
            for (auto x: seated) {
                if (__gcd(x, j) == 1) ok = false;
            }
            if (ok) seated.insert(j);
        }
        for (auto x: seated) cout<<x<<' ';
        cout<<'\n';
    }

    return 0;
}