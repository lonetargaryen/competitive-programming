// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

string solve(string s, int n) {
    int len = s.length();
    string meridian = s.substr(len-2, 2);
    string minutes = s.substr(len-4, 2);
    string hours;
    len == 6 ? hours = "0" + s.substr(0, 1) : hours = s.substr(0, 2);
    int intMinutes = stoi(minutes);
    int intHours = stoi(hours);
    int minsToAdd = (n%60);
    int hoursToAdd = (n/60);
    intMinutes += minsToAdd;
    if (intMinutes>=60) {
        hoursToAdd += (intMinutes/60);
        intMinutes %= 60;
    }
    cout<<intMinutes<<' '<<hoursToAdd<<'\n';
    bool meridianCheck = false;
    while (hoursToAdd--) {
        intHours++;
        if (intHours == 12) meridianCheck = !meridianCheck;
        if (intHours > 12) intHours = 1;
    }
    if (meridianCheck) {
        if (meridian == "am") meridian = "pm";
        else meridian = "am";
    }
    minutes = to_string(intMinutes);
    if (minutes.length() != 2) minutes = "0" + minutes;
    string ans = to_string(intHours) + ":" + minutes + meridian;
    if (ans.length() != 7) ans = "0" + ans;
    return ans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {-9, 9};
    // solve(v);
    // cout<<solve(4)<<'\n';
    return 0;
}