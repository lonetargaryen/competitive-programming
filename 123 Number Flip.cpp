// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(int n) {
    int ans = 0, i = 0, remember, digit;
    bool ok = true;
    while (n) {
        int temp = (n%10);
        if (temp == 3) {
            ans += (temp * pow(10, i));
        }
        else {
            ok = false;
            remember = i;
            digit = (n%10);
            ans += (digit * pow(10, i));
        }
        i++;
        n /= 10;
    }
    if (ok) return n;
    else {
        ans += ((3 * pow(10, remember)) - (digit * pow(10, remember)));
        return ans;
    }
}

int main() {
    // vector<int> nums = {1,3,2,7,6};
    // vector<vector<int>> ans = solve(nums);
    return 0;
}