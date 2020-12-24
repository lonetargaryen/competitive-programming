class Solution {
public:
    int dparray[1691];

    bool solve(int n) {
        while (n%2==0) {
            n /= 2;
        }
        while (n%3==0) {
            n /= 3;
        }
        while (n%5==0) {
            n /=5;
        }
        return (n==1);
    }

    int nthUglyNumber(int n) {
        int gtwomul = 0, twomul = 0, gthreemul = 0, threemul = 0, gfivemul = 0, fivemul = 0;
        int currNum = 1;
        while (currNum < n) {
            twomul++;
            
        }
    }
};