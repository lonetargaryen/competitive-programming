// https://binarysearch.com/problems/Number-of-Palindromic-Substrings
#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
    int n = s.length(), count=0;
    int dp[n][n];
    memset(dp, false, sizeof(dp));
    
    for(int gap=0; gap<n; gap++) {
        for(int i=0,j=gap; j<n; i++,j++) {
            if(gap==0)
                dp[i][j]=true;
            else if(gap==1)
                dp[i][j]= (s[i]==s[j]);
            else {
                if(s[i]==s[j] && dp[i+1][j-1]==true) {
                    dp[i][j]= true;
                }
            }
            
            if(dp[i][j]==true)
                count++;
        }
    }
    return count;
}

int main() {
    cout<<solve("aacca")<<'\n';

    return 0;
}