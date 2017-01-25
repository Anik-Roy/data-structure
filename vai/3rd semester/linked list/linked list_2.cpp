#include <stdio.h>
#include <stdlib.h>
#include <new>

struct NODE
{
    int data;
    NODE *next;
};

struct LinkedList
{
    NODE *head;
    LinkedList()
    {
        head = NULL;
    }
    void Insert_At_Begin(int item);
    void Insert_At_End(int item);
    void DISPLAY();
    void COUNT();
    void Delete_From_Begin();
    void Delete_From_End();
    void Delete_AT_LOC(int address);
    void SEARCH(int item);
    void Insert_AT_LOC(int item, int address);
    void Update_AT_LOC(int item, int address);
};

void LinkedList:: Insert_At_Begin(int item)
{
    NODE *p = new NODE;
    p-> data = item;
    p -> next = head;
    head = p;
    return;
}

void LinkedList:: Delete_From_Begin()
{
    head = head->next;
    return;
}

void LinkedList:: Delete_From_End()
{
    NODE *temp;
    temp = head;
    while((temp->next)->next!=NULL)
    {
        temp = temp-> next;
    }
    temp->next = NULL;
    return;
}

void LinkedList::Insert_At_End(int item)
{
    NODE *temp, *val;
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp-> next;
    }
    val = new NODE;
    val->data = item;
    temp->next = val;
    val ->next = NULL;
    return;
}

void LinkedList :: Insert_AT_LOC(int item, int address)
{
    int counter = 0;
    NODE *temp = head, *val = new NODE;
    while(temp!=NULL)
    {
        counter++;
        if(counter == address)
        {
            val ->next = temp->next;
            temp -> next = val;
            val -> data = item;
            return;
        }
        temp = temp->next;
    }
}

void LinkedList:: Update_AT_LOC(int item, int address)
{
    int counter = 0;
    NODE *temp = head;
    while(temp!=NULL)
    {
        counter++;
        if(counter == address)
        {
            temp -> data = item;
            return;
        }
        temp = temp->next;
    }
}

void LinkedList:: COUNT()
{
    NODE *temp = head;
    int counter = 0;
    while(temp!=NULL)
    {
        counter++;
        temp = temp->next;
    }
    printf("Total Data Is: %d\n", counter);
    return;
}

void LinkedList :: Delete_AT_LOC(int address)
{
    NODE *temp;
    int counter = 1;
    temp = head;
    while((temp->next)!=NULL)
    {
        //counter++; printf("OK\n");
        if(counter==address-1)
        {
            temp->next = (temp->next)->next;
        }
        temp = temp-> next;
        counter++;
    }
    return;
}

void LinkedList:: SEARCH(int item)
{
    NODE *temp = head;
    int found = 0, counter = 0;
    while(temp!=NULL)
    {
        counter++;
        if(temp->data == item)
        {
            printf("The Item = %d Is Found On LOC: %d\n", item, counter);
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if(found==0)
        printf("The Item = %d Is Not Found\n", item);
}

void LinkedList:: DISPLAY()
{
    NODE *temp;
    temp = head;
    if(temp==NULL)
    {
        printf("EMPTY\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp-> next;
    }
    printf("\n");
}


int main()
{
    LinkedList A;
    A.Insert_At_Begin(5);
    A.Insert_At_Begin(4);
    A.Insert_At_End(56);
    A.Insert_At_Begin(8);
    A.Delete_From_Begin();
    A.Delete_From_End();
    A.DISPLAY();
    A.COUNT();
    A.SEARCH(5);
    A.SEARCH(4);
    A.SEARCH(55);
    A.Insert_At_Begin(456);
    A.Insert_AT_LOC(500, 3);
    A.Update_AT_LOC(99, 4);
    A.Delete_AT_LOC(2);
    A.DISPLAY();
    A.COUNT();
    return 0;
}
