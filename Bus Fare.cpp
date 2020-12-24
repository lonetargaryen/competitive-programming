// https://binarysearch.com/problems/Bus-Fare
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& days) {
    vector<int> dp(days.size());
    dp[0] = 2;
    for (int i=1;i<dp.size();i++) {
        int oneDayPass = dp[i-1] + 2;
        int sevenDayPointer = i-1;
        while ((sevenDayPointer >= 0) && (days[i]-days[sevenDayPointer] < 7)) sevenDayPointer--;
        int sevenDayPass;
        sevenDayPointer < 0 ? sevenDayPass = 7 : sevenDayPass = dp[sevenDayPointer] + 7;
        int thirtyDayPointer = i-1;
        while ((thirtyDayPointer >= 0) && (days[i]-days[thirtyDayPointer] < 30)) thirtyDayPointer--;
        int thirtyDayPass;
        thirtyDayPointer < 0 ? thirtyDayPass = 25 : thirtyDayPass = dp[thirtyDayPointer] + 25;
        dp[i] = min(oneDayPass, min(sevenDayPass, thirtyDayPass));
    }
    return dp[days.size()-1];
}

int main() {
    vector<int> v = {1,3,4,5,29};
    cout<<solve(v)<<'\n';
}