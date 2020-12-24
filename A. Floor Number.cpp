#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n, x;
        cin>>n>>x;
        n > 2 ? cout<<ceil(float(n - 2) / float(x)) + 1<<'\n' : cout<<1<<'\n';
    }

    return 0;
}