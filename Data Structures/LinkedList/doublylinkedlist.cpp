#include <stdio.h>
using namespace std;

struct Node
{
    Node * previous;
    int data;
    Node * next;
};

class DoublyLinkedList
{
    private:
        Node * head, * tail;
    public:
        DoublyLinkedList()
        {
            head = NULL;
            tail = NULL;
        }

        void add(int n)
        {
            Node * temp = new Node;
            temp->data = n;
            temp->next = NULL;

            if (head == NULL)
            {
                temp->previous == NULL;
                head = temp;
                tail = temp;
                head->previous = NULL;
            }
            else
            {
                temp->previous = tail;
                tail->next = temp;
                tail = tail->next;
            }
        }

        void printAll()
        {
            Node * x = head;
            while (x != NULL)
            {
                printf("%d ", x->data);
                x = x->next;
            }
        }
};

int main()
{
    DoublyLinkedList list;
    list.add(5);
    list.add(4);
    list.add(12);
    list.add(7);
    list.add(1928);
    list.add(282);
    list.printAll();
    return 0;
}