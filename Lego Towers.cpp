// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& heights, int k) {
    if (k == 1) return 0;
    
    sort(heights.begin(), heights.end());
    
    int maxHeight = *(max_element(heights.begin(), heights.begin()+k));
    
    int minBrickCount = 0;
    for (int i=0;i<k;i++) minBrickCount += (maxHeight - heights[i]);
    
    int currBrickCount = minBrickCount;
    for (int i=1;i<=heights.size()-k;i++) {
        currBrickCount -= (maxHeight - heights[i-1]);
        if (heights[i+k-1] > maxHeight) {
            currBrickCount += ((heights[i+k-1] - maxHeight)*(k-1));
            maxHeight = heights[i+k-1];
            // currBrickCount = 0;
            // for (int j=i;j<i+k;j++) currBrickCount += (maxHeight - heights[j]);
            if (currBrickCount < minBrickCount) minBrickCount = currBrickCount;
        }
        else {
            currBrickCount += (heights[i+k-1] - maxHeight);
            if (currBrickCount < minBrickCount) minBrickCount = currBrickCount;
        }
    }
    return max(minBrickCount, 0);
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    cout<<solve(v1, 2)<<'\n';
    return 0;
}