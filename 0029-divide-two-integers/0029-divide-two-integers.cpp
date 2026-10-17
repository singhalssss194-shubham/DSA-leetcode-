class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
            if (dividend == INT_MAX&& divisor == -1)
            return -2147483647;

        long long divd = llabs((long long)dividend);
        long long divs = llabs((long long)divisor);

        long long count = 0;

        while (divd >= divs) {
            divd -= divs;
            count++;
        }

        if ((dividend < 0) != (divisor < 0))
            count = -count;

        return (int)count;
    }
};
    