//Insert node at a specific position

// Linked List Insertion at a specific position in C++
#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
// current size of Linked List
int size = 0;

void insert (Node ** head, int data)
{
  Node *new_node = new Node ();

  new_node->data = data;
  new_node->next = *head;
  *head = new_node;
  size++;
}

// method to insert at a given position
void insertPosition (int pos, int data, Node ** head)
{

  Node *new_node = new Node ();
  new_node->data = data;
  new_node->next = NULL;

  // Invalid positions
  if (pos < 1 || pos > size + 1)
    printf ("Invalid\n");

  // inserting first node
  else if (pos == 1)
    {
      new_node->next = *head;
      *head = new_node;
      size++;
    }

  else
    {
      Node *temp = *head;

      // traverse till the current (pos-1)th node
      while (--pos > 1)
	{
	  temp = temp->next;
	}
      new_node->next = temp->next;
      temp->next = new_node;
      size++;
    }
}

void display (Node * node)
{

  printf ("Linked List : ");

  // as linked list will end when Node is Null
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}

int main ()
{
  Node *head = NULL;

  insert (&head, 140);
  insert (&head, 120);
  insert (&head, 80);
  insert (&head, 60);
  insert (&head, 20);

  display (head);

  // Inserts data: 40 at 2nd position
  insertPosition (2, 40, &head);

  // Inserts data: 100 at 5th position
  insertPosition (5, 100, &head);

  // Inserts data: 160 at 8th position
  insertPosition (8, 160, &head);

  display (head);

  return 0;
}
