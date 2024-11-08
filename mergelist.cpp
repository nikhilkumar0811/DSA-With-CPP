#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {} // Constructor for ListNode
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == nullptr)
    {
        return list2;
    }
    if (list2 == nullptr)
    {
        return list1;
    }

    ListNode *result = nullptr;
    if (list1->val < list2->val)
    {
        result = list1;
        result->next = mergeTwoLists(list1->next, list2);
    }
    else
    {
        result = list2;
        result->next = mergeTwoLists(list1, list2->next);
    }
    return result;
}

// Helper function to print the linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Create two sorted linked lists for testing
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);
    list1->next->next->next = new ListNode(7);

    ListNode *list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);
    list2->next->next->next = new ListNode(8);

    // Merge the two lists
    ListNode *mergedList = mergeTwoLists(list1, list2);

    // Print the merged list
    cout << "Merged List: ";
    printList(mergedList);

    // Free memory to avoid leaks
    while (mergedList)
    {
        ListNode *temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }

    return 0;
}
