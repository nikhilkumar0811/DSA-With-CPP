#include <iostream>
#include <string>

std::string removeDuplicates(const std::string &str)
{
    std::string result;

    for (int i = 0; i < str.length(); i++)
    {
        bool isDuplicate = false;
        // Check if the character is already in the result
        for (int j = 0; j < result.length(); j++)
        {
            if (str[i] == result[j])
            {
                isDuplicate = true;
                break;
            }
        }
        // If not a duplicate, add it to the result
        if (!isDuplicate)
        {
            result += str[i];
        }
    }

    return result;
}

int main()
{
    std::string input = "programming";
    std::cout << "Original: " << input << "\n";
    std::cout << "Without duplicates: " << removeDuplicates(input) << "\n";
    return 0;
}
