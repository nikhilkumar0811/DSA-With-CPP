#include <iostream>

class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        while (n > 0)
        {
            int remainder = n % 3;
            if (remainder == 2)
                return false; // If remainder is 2, not possible
            n /= 3;           // Move to the next power of 3
        }
        return true;
    }
};

int main()
{
    Solution solution;
    int n = 91;
    std::cout << std::boolalpha << solution.checkPowersOfThree(n) << std::endl; // Output: true
    return 0;
}
