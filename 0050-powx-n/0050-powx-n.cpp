class Solution {
public:
    double myPow(double x, int n) {
        long long a = n;
        long double b=x;
        if (a < 0) {
            b = 1.0L /b;
            a = -a;
        }

        double ans = 1.0L;

        while (a > 0) {
            if (a % 2 == 1) {
                ans *= b;
            }

            b=b*b;
            a=a/2;
        }

        return (double)ans;
    }
};