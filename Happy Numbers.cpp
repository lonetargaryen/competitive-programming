// https://binarysearch.com/problems/Happy-Numbers
#include<bits/stdc++.h>

using namespace std;

int getSumOfSquaredDigits(int n) {
    int ans = 0, pwr = 0;
    while (n) {
        int digit = ((n%10)*pow(10, pwr));
        ans += (digit * digit);
        n /= 10;
    }
    return ans;
}

bool solve(int n) {
    int param = n;
    set<int> usedNums;
    while (param != 1) {
        param = getSumOfSquaredDigits(param);
        // cout<<"param = "<<param<<'\n';
        if (usedNums.count(param)) return false;
        usedNums.insert(param);
    }
    return true;
}

int main() {
    // cout<<getSumOfSquaredDigits(7)<<'\n';
    cout<<solve(11)<<'\n';
    return 0;
}