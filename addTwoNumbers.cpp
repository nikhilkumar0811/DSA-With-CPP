#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(0);
        ListNode *tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode *newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode *result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};

// Function to print linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Function to create linked list from array
ListNode *createList(int arr[], int size)
{
    if (size == 0)
        return nullptr;
    ListNode *head = new ListNode(arr[0]);
    ListNode *current = head;
    for (int i = 1; i < size; i++)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Main function
int main()
{
    Solution sol;

    // Test case: l1 = [2,4,3], l2 = [5,6,4] (342 + 465 = 807)
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};

    ListNode *l1 = createList(arr1, 3);
    ListNode *l2 = createList(arr2, 3);

    cout << "Input List 1: ";
    printList(l1);

    cout << "Input List 2: ";
    printList(l2);

    ListNode *result = sol.addTwoNumbers(l1, l2);

    cout << "Sum Result: ";
    printList(result);

    return 0;
}
