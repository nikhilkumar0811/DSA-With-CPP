#include <bits/stdc++.h>
using namespace std;
int main()
{
    // max-heap
    priority_queue<int> maxi;
    // min-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
}