#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

void Insert(int x)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    if (head != NULL)
        temp->next = head->next;
    head = temp;
}

void Print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ' << endl;
    }
}
int main()
{
    head = NULL; // The list is initially empty //
    cout << "How many numbers do you want to input \n";
    int num, x;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the number " << i << " ";
        cin >> x;
        Insert(x);
        cout << Print() << endl;
    }
}