// https://codeforces.com/problemset/problem/1374/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n;
		cin>>n;
		int twoCount = 0, threeCount = 0;
		while (!(n%2)) {
			n /= 2;
			++twoCount;
		}
		while (!(n%3)) {
			n /= 3;
			++threeCount;
		}
		if ((n==1) && (twoCount <= threeCount)) {
			cout<<(2 * threeCount) - twoCount<<'\n';
		} else {
			cout<<-1<<'\n';
		}
    }

    return 0;
}