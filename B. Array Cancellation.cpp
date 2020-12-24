// https://codeforces.com/problemset/problem/1405/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        long long int inp, mostNegative = 0, currentSum = 0;
        while (n--) {
            cin>>inp;
            currentSum += inp;
            if (currentSum < mostNegative) mostNegative = currentSum;
        }
        cout<<abs(mostNegative)<<'\n';
    }

    return 0;
}