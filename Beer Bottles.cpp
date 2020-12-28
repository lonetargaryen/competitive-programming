// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(int n) {
    int fullBottles = n, emptyBottles = 0, drankBottles = 0;
    while (fullBottles+emptyBottles/3) {
        drankBottles += (fullBottles);
        fullBottles += emptyBottles;
        emptyBottles = (fullBottles%3);
        fullBottles /= 3;
    }
    // if (fullBottles+emptyBottles >= 3) {
    //     drankBottles += (fullBottles+emptyBottles)%3;
    // }
    return (drankBottles+fullBottles);
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    cout<<solve(35)<<'\n';
    return 0;
}