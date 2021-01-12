// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class SlidingWindowAverage {
    vector<int> v;
    int window_size, sum;
    public:
    SlidingWindowAverage(int window_size) {
        this->window_size = window_size;
        sum = 0;
    }

    double average(int val) {
        v.push_back(val);
        sum += val;
        if (window_size > v.size()) return ((double)sum/(double)v.size());
        else if (window_size == v.size()) {
            return ((double)sum/(double)window_size);
        }
        else {
            sum -= v[v.size() - window_size - 1];
            return ((double)sum/(double)window_size);
        }
    }
};

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {0,0,0};
    // solve(v);
    // cout<<solve(v1, 0)<<'\n';
    return 0;
}