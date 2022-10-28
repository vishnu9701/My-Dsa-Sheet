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

int Middle(Node* &head)
{

   Node* slow=head;
   Node* fast=head;
   while(fast!=NULL && fast->next!=NULL)
   {
      slow=slow->next;
      fast=fast->next->next;
   }
   return slow->data;
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
   cout<<Middle(head);
}
