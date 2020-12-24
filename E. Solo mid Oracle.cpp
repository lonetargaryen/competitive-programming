// https://codeforces.com/contest/1435/problem/E
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a,b,c,d,maxHealth;
        cin>>a>>b>>c>>d;

        if (a > (b*c)) {
            maxHealth = -1;
        }
        else if (d>=c) {
            maxHealth = a;
        }
        else {
            long long int damageTillCooldown = (b*d);
            long long int minSpells = a/damageTillCooldown;
            long long int minSpellsDamage = a*(minSpells+1);
            long long int stackedHealing = ((minSpells*(minSpells+1))/2) * damageTillCooldown;
            maxHealth = minSpellsDamage - stackedHealing;
        }

        cout<<maxHealth<<'\n';
    }
    return 0;
}