#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void traverse();

struct node{
int info;
struct node *link;
}*top=NULL;

int main()
{
    int choice,item;

    while(1){
    printf("\nMENU\n");
    printf("\t1.PUSH\n");
    printf("\t2.POP\n");
    printf("\t3.TRAVERSE\n");
    printf("\t4.EXIT\n");
    printf("enter choice\n");
    scanf("%d",&choice);

   switch(choice){
case 1:

     push();
     break;
case 2:

  pop();
break;
case 3:
    traverse();

    break;
case 4:
    exit(0);
    }
    }
}
    void push()
    {struct node *New;
    int item;
    New =(struct node*)malloc(sizeof(struct node)) ;
        if(New==NULL)
        {
            printf("stack is full\n");
            exit(0);
        }
        printf("enter item value");
        scanf("%d",&item);
        New->info = item;
        New->link = top;
        top=New;
        printf("inserted item is = %d ",item);
    }
void pop()
{
    int item;
struct node *temp;
if(top == NULL)
{printf("underflow");
exit(0);
}

item = top->info;
temp =  top;
top = top->link;
printf("deleted item is =%d",temp->info);
free(temp);

}
void traverse()
{
    struct node *ptr;

    if(top==NULL)
    {
        printf("\nstack is empty\n");
        return ;

    }
    ptr = top;
    while(ptr!=NULL)
    {
        printf("%d , ",ptr->info);
        ptr = ptr->link;
    }
}
