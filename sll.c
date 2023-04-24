#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}NODE;


NODE *create_sll()
{
  NODE *first=NULL,*last=NULL,*p;

  int n,i;
  printf("Enter how many nodes");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    p = (NODE *)malloc(sizeof(NODE));
    int data;
    printf("Enter the data");
    scanf("%d",&data);
    p->data = data;
    p->next = NULL;

    if(first==NULL)
    {
      first=p;
    }
    else
    {
      last->next=p;
    }

    last=p;
  }

  return first;
}


void display(NODE *h)
{
  NODE *p = h;
  while(p!=NULL)
  {
    printf("%d\t->",p->data);
    p=p->next;
  }

  printf("NULL");

}


int main()
{
  NODE *h = create_sll();

  display(h);

  return 0;
}
