// https://binarysearch.com/problems/The-Maze-Runner
#include<bits/stdc++.h>

using namespace std;

int solve(int hour, int minutes) {
    if (hour >= 12) hour -= 12;
    double normalHourDegrees = (hour * 30);
    double extraHourDegrees = (double(minutes)/2.0);
    // if (minutes%2) extraHourDegrees = floor(extraHourDegrees);
    // else extraHourDegrees = ceil(extraHourDegrees);
    double totalHourDegrees = (normalHourDegrees + extraHourDegrees);
    double totalMinuteDegrees = (minutes * 6);
    double diff = abs(totalHourDegrees - totalMinuteDegrees);
    return min(diff, 360 - diff);
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}