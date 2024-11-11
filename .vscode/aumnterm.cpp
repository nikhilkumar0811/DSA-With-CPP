#include <iostream>
using namespace std;

int sumOfNumbers(int n)
{
    return (n * (n + 1)) / 2; // Formula for the sum of the first n natural numbers
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The sum of numbers from 1 to " << num << " is " << sumOfNumbers(num) << endl;
    return 0;
}
