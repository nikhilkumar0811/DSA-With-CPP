#include <unordered_map>
#include <set>

class NumberContainers
{
private:
    std::unordered_map<int, int> indexToNumber;             // Maps index to the number stored at that index
    std::unordered_map<int, std::set<int>> numberToIndices; // Maps number to a sorted set of indices containing that number

public:
    NumberContainers() {}

    void change(int index, int number)
    {
        // If the index already has a number, we need to remove that index from the old number’s set
        if (indexToNumber.count(index))
        {
            int oldNumber = indexToNumber[index];
            numberToIndices[oldNumber].erase(index);
            // Clean up if no indices are left for that number
            if (numberToIndices[oldNumber].empty())
            {
                numberToIndices.erase(oldNumber);
            }
        }

        // Update the mappings
        indexToNumber[index] = number;
        numberToIndices[number].insert(index);
    }

    int find(int number)
    {
        // If the number exists and has indices, return the smallest one
        if (numberToIndices.count(number) && !numberToIndices[number].empty())
        {
            return *numberToIndices[number].begin();
        }
        return -1; // If the number is not found, return -1
    }
};
