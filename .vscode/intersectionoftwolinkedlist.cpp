#include <iostream>
using namespace std;

// Definition for a singly-linked list node
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to find the intersection point of two linked lists
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (!headA || !headB)
        return nullptr;

    ListNode *ptr1 = headA; // Pointer for the first list
    ListNode *ptr2 = headB; // Pointer for the second list

    while (ptr1 != ptr2)
    {
        // Move each pointer forward, or switch to the other list's head at the end
        ptr1 = (ptr1 == nullptr) ? headB : ptr1->next;
        ptr2 = (ptr2 == nullptr) ? headA : ptr2->next;
    }

    return ptr1; // Either the intersection node or nullptr
}

int main()
{
    // Example setup for testing
    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    ListNode *intersection = new ListNode(8);
    intersection->next = new ListNode(4);
    intersection->next->next = new ListNode(5);
    headA->next->next = intersection;

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersection;

    ListNode *result = getIntersectionNode(headA, headB);

    if (result)
    {
        cout << "The intersection node value is: " << result->val << endl;
    }
    else
    {
        cout << "No intersection." << endl;
    }

    return 0;
}
