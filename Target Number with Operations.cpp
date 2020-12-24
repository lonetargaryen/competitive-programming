// https://binarysearch.com/problems/Target-Number-with-Operations
#include<bits/stdc++.h>

using namespace std;

int solve(int start, int end) {
    int ans = 0;
    while (end!=start) {
        if (end%2) {
            end--;
            ans++;
        }
        while (end%2 == 0 && end/2 >= start) {
            end /= 2;
            ans++;
        }
    }
    
    return ans;
}

int main() {
    cout<<solve(2, 10)<<'\n';
    return 0;
}