#include <stdio.h>
struct Node
{
          char name[40];
          int age;
          struct Node *next;
};
int main()
{
          struct Node *head,*p,*q;
          int i;
          head=new Node;
          head->next=0;
          q=head;
          scanf("%s",head->name);
          scanf("%d",&head->age);
          for (i=0;i<4;i++)
          {
                    p=new Node;
                    scanf("%s",p->name);
                    scanf("%d",&p->age);
                    q->next=p;
                    p->next=0;
                    q=p;
          }
          p=head;
          while (p)
          {
                    printf("%s    %d\n",p->name,p->age);
                    p=p->next;
          }
          return 0;
}
