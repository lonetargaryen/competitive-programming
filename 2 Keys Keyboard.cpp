#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dparray[1001];

    Solution() {
        dparray[1] = 0;
        for (int i=2;i<1001;i++) {
            int temp = getHCF(i);
            if (temp==i) {
                dparray[i] = i;
                continue;
            }
            dparray[i] = dparray[temp] + (i/temp);
        }
    }

    int getHCF(int n) {
        int sqroot = sqrt(n);
        for (int x=2;x<=sqroot;x++) {
            if (!(n%x)) return (n/x);
        }
        return n;
    }

    int minSteps(int n) {
        return dparray[n];
    }
};

int main() {
    
    return 0;
}