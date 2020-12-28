// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


bool solve(vector<vector<int>>& courses) {
    int count = courses.size(), i = 0;
    set<int> completedCourses;
    while (i != count) {
        for (int i=0;i<count;i++) {
            if (courses[i].size()) {

            }
            else i++;
        }
    }
    return true;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(35)<<'\n';
    return 0;
}