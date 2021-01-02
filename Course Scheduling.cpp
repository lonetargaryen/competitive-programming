// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

set<int> completedCourses;

void DFS(int index, vector<vector<int>>& courses) {
    completedCourses.insert(index);
    for (int i=0;i<courses[index].size();i++) {
        if (!completedCourses.count(courses[index][i])) {
            DFS(courses[index][i], courses);
        }
    }
}

bool solve(vector<vector<int>>& courses) {
    for (int i=0;i<courses.size();i++) {
        if (!completedCourses.count(i)) {
            DFS(i, courses);
        }
    }
    return (completedCourses.size() == courses.size());
}

int main() {
    vector<vector<int>> courses = {{},{2,0,1},{}};
    // vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    cout<<solve(courses)<<'\n';
    return 0;
}