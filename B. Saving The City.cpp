// https://codeforces.com/contest/1285/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int startPtr = 0;
        vector<pair<int, int>> v;
        while (startPtr < s.length()) {
            while (s[startPtr]=='0' && startPtr<s.length()) startPtr++;
            int secondPtr = startPtr;
            while (s[secondPtr]=='1' && startPtr<s.length()) secondPtr++;
            if (startPtr < s.length()) v.push_back(make_pair(startPtr, secondPtr));
            startPtr = secondPtr;
        }
        if (!(v.size())) cout<<0<<'\n';
        else {
            int finalCost = a;
            for (int i=1;i<v.size();i++) {
                finalCost += min((v[i].first - v[i-1].second)*b, a);
            }
            cout<<finalCost<<'\n';
        }
    }

    return 0;
}