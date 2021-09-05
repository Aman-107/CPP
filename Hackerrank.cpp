// #include<bits/stdc++.h>
// using namespace std;

// struct node
// {
// int data;
// struct node *next;
// };

// struct node *insertbeg(int n);
// void display(struct node *head);

// int main()
// {
//     int n;
//     cin>>n;
//     struct node *HEAD;
//     HEAD = insertbeg(n);
//     display(HEAD);
//     return 0;
// }

// struct node *insertbeg(int n)
// {
// struct node *head = NULL;
// struct node *temp = NULL;
// struct node *ptr = NULL;

// for(int i=0;i<n;i++)
// {
//     struct node *temp = (struct node*)malloc(sizeof(struct node));
//     cin>>temp->data;
//     temp->next=NULL;
//     if(head==NULL)
//     {
//         head = temp;
//     }
//     else
//     {
//         ptr = head;
//         while(ptr->next != NULL)
//         ptr=ptr->next;
//         ptr->next=temp;
//     }
// }
// return head;
// };

// void display(struct node * head)
// {
//     struct node *ptr = head;
//     while(ptr != NULL)
//     {
//         cout<<ptr->data;
//         ptr = ptr->next;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

struct node
{
int data ;
struct node *next;
};

int insert(int n);
void display();

int main()
{
    int n,x;
    cin>>n;
    struct node *head = NULL;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        display();
    }
    return 0;
}

int insert(int x)
{
    struct node *head = NULL;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    while(temp != NULL)
    temp->next=head;
    head = temp; 
}

void display()
{
    struct node *head = NULL;
    struct node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
    temp=temp->next;
}
}

