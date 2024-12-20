#include <iostream>
#include <limits.h>
using namespace std;

int divide(int dividend, int divisor)
{
    // Handle edge cases for overflow
    if (divisor == 0)
        return INT_MAX; // Division by zero
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX; // Overflow case

    // Determine the sign of the result
    bool isNegative = (dividend < 0) ^ (divisor < 0);

    // Use long to handle overflow and take absolute values
    long long absDividend = abs((long long)dividend);
    long long absDivisor = abs((long long)divisor);

    long long quotient = 0;

    // Perform division using subtraction and bit manipulation
    while (absDividend >= absDivisor)
    {
        long long tempDivisor = absDivisor, multiple = 1;

        // Optimize by doubling the divisor using bit shifts
        while (absDividend >= (tempDivisor << 1))
        {
            tempDivisor <<= 1;
            multiple <<= 1;
        }

        absDividend -= tempDivisor;
        quotient += multiple;
    }

    // Apply the sign to the result
    quotient = isNegative ? -quotient : quotient;

    // Clamp the result to the range of a 32-bit integer
    return (quotient > INT_MAX) ? INT_MAX : (quotient < INT_MIN) ? INT_MIN
                                                                 : quotient;
}

int main()
{
    int dividend = 10, divisor = 3;

    int result = divide(dividend, divisor);

    cout << "Quotient: " << result << endl;

    return 0;
}
