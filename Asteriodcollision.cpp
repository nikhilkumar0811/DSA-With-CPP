#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
    stack<int> s; // Stack to simulate asteroid collisions

    for (int asteroid : asteroids)
    {
        bool exploded = false;

        // Process collisions
        while (!s.empty() && asteroid < 0 && s.top() > 0)
        {
            if (abs(asteroid) > s.top())
            {
                s.pop(); // Top asteroid explodes
            }
            else if (abs(asteroid) == s.top())
            {
                s.pop(); // Both asteroids explode
                exploded = true;
                break;
            }
            else
            {
                exploded = true;
                break;
            }
        }

        // Push asteroid if it has not exploded
        if (!exploded)
        {
            s.push(asteroid);
        }
    }

    // Collect remaining asteroids from stack
    vector<int> result(s.size());
    for (int i = s.size() - 1; i >= 0; i--)
    {
        result[i] = s.top();
        s.pop();
    }

    return result;
}

int main()
{
    // Test case 1
    vector<int> asteroids1 = {5, 10, -5};
    vector<int> result1 = asteroidCollision(asteroids1);
    cout << "Remaining asteroids: ";
    for (int asteroid : result1)
    {
        cout << asteroid << " ";
    }
    cout << endl;

    // Test case 2
    vector<int> asteroids2 = {8, -8};
    vector<int> result2 = asteroidCollision(asteroids2);
    cout << "Remaining asteroids: ";
    for (int asteroid : result2)
    {
        cout << asteroid << " ";
    }
    cout << endl;

    // Test case 3
    vector<int> asteroids3 = {10, 2, -5};
    vector<int> result3 = asteroidCollision(asteroids3);
    cout << "Remaining asteroids: ";
    for (int asteroid : result3)
    {
        cout << asteroid << " ";
    }
    cout << endl;

    return 0;
}
