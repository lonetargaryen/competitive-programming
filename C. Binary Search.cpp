// https://codeforces.com/contest/1436/problem/C
#include<bits/stdc++.h>

using namespace std;

long long int m = 1000000007;

int fact(int n) {
     if(n == 0)
          return 1;
    int i = n, fact = 1;
    while (n / i != n) {
        fact = (((fact%m) * (i%m))%m);
        i--;
    }
    return fact%m;
}

int main() {
    int n,x,pos;
    cin>>n>>x>>pos;
    int left = 0, right = n, middle, xpossible = 0, nineminuspossible = 0;
    while (left<right) {
        middle = (left+right)/2;
        if (pos<=(middle-1)) {
            right = middle;
            nineminuspossible++;
        }
        else {
            left = middle + 1;
            if (middle==pos) continue;
            xpossible++;
        }
    }
    long long int result = 1;
    for (int i=x-1;i>x-1-xpossible;i--) {
        result = (result * i)%m;
    }
    for (int i=n-x;i>n-x-nineminuspossible;i--) {
        result = (result * i)%m;
    }
    n -= (xpossible + nineminuspossible);
    for (int i=1;i<=n-1;i++) {
        result = (result * i)%m;
    }
    // result = (result + fact(n-1)%m)%m;
    // if (xpossible)
    //     result = result + ((fact(x) / (fact(xpossible) * fact(x - xpossible))) * fact(xpossible));
    // // result += pow(x,xpossible);
    // if (nineminuspossible)
    //     result = result + ((fact(n-x) / (fact(nineminuspossible) * fact(n-x - nineminuspossible))) * fact(nineminuspossible));
    // result += pow(n-x,nineminuspossible);
    cout<<result<<'\n';

    return 0;
}