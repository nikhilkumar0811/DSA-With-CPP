#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sqr = n * n;
    int digitSum = sumOfDigits(sqr);

    if (digitSum == n)
    {
        cout << "MAGIC: The square of " << n << " is " << sqr << ", and the sum of its digits is " << digitSum << " which equals " << n << "." << endl;
    }
    else
    {
        cout << "No Magic: The square of " << n << " is " << sqr << ", and the sum of its digits is " << digitSum << " which does not equal " << n << "." << endl;
    }

    return 0;
}
