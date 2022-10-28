#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node(int x)
   {
      data = x;
      next = NULL;
   }
};

void Reverse(Node *&head)
{
   Node *current = head;
   Node *prev = NULL, *next = NULL;

   while (current != NULL)
   {
      prev = current;
      current = next;
      next = current->next;
      current->next = prev;
   }
   head = prev;
}
void Print(Node *&head)
{
   Node *p = head;
   while (p != NULL)
   {
      cout << p->data << " ";
      p = p->next;
   }
   cout << endl;
}

int main()
{

   Node *a = new Node(3);
   Node *b = new Node(6);
   Node *c = new Node(9);
   a->next = b;
   b->next = c;

   Node *head = a;
   Print(head);
   Reverse(head);
   Print(head);
}
