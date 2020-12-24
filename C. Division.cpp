// https://codeforces.com/contest/1445/problem/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        unsigned long long int p,q;
        cin>>p>>q;
        if ((p%q) || (q>p)) cout<<p<<'\n';
        else {
            unsigned long long int finalAns = 0, qcopy = q;
            for (int i=2;i*i<=q;i++) {
                if (!(q%i)) {
                    while(!(q%i)) q /= i;       // divide till it's no longer divisible
                    unsigned long long int pcopy = p;
                    while(pcopy%qcopy == 0) pcopy /= i;
                    finalAns = max(finalAns, pcopy);
			    }
            }
            if (q>1) {
                unsigned long long int pcopy = p;
                while(pcopy%qcopy == 0) pcopy /= q;
                finalAns = max(finalAns, pcopy);
		    }
            cout<<finalAns<<'\n';
        }
    }

    return 0;
}