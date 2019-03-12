#include<stdio.h>
#include<stdlib.h>
#define max 5
void push(int *,int);
void pop(int *);
void traverse(int *);
int top=-1;
struct node{
int info;
int node link;
};

int main()
{
    int choice,item;
    int stack[max];
    while(1){
    printf("\nMENU\n");
    printf("\n1.PUSH\n");
    printf("\n2.POP\n");
    printf("\n3.TRAVERSE\n");
    printf("\n4.EXIT\n");
    printf("\nenter choice\n");
    scanf("%d",&choice);

   switch(choice){
case 1:
     printf("\nenter item\n");
     scanf("%d",&item);
     push(stack,item);
     break;
case 2:

  pop(stack);
break;
case 3:
    traverse(stack);
    printf("%d\t",info->item);
    break;
case 4:
    exit(0);
    }
    }
}
    void push(int stack[],int item)
    {
        if(top==max)
        {
            printf("stack is full\n");
            return ;

        }
        top = top+1;
        stack[top] = item;
        printf("inserted item is = %d",item);
    }
void pop(int stack[])
{
    int item;

        if(top==-1)
    {
        printf("\nstack is empty\n");
        return ;

    }
    item=stack[top];
    top=top-1;
    printf("deleted item is =%d",item);

}
void traverse(int stack[])
{
    int i;
    if(top==-1)
    {
        printf("\nstack is empty\n");
        return ;

    }
    i=top;
    while(i>=0)
    {
        printf("%d",stack[i]);
        i--;
    }
}
