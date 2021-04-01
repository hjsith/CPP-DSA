#include <stdio.h>
using namespace std;

struct node
{
    int data;
    node * next;
};

class SinglyLinkedList
{
    private:
        node *head, *tail;
    public:
        SinglyLinkedList()
        {
            head = NULL;
            tail = NULL;
        }

        void add(int n)
        {
            node *temp = new node;
            temp->data = n;
            temp->next = NULL;

            if (head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
            }
        }

        void printAll()
        {
            node * x = head;
            while (x != NULL)
            {
                printf("%d ", x->data);
                x = x->next;
            }
        }
};

int main()
{
    SinglyLinkedList list;
    list.add(5);
    list.add(4);
    list.add(12);
    list.add(7);
    list.add(1928);
    list.add(282);
    list.printAll();
    return 0;
}