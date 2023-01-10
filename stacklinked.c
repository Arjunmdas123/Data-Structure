#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node*next;
};
struct node*newnode,*head=NULL,*top,*prev;



void push()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data part");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==0)
{
head=newnode;
newnode=top;
}
else
{
top=head;
while(top->next!=0)
{
top=top->next;
}
top->next=newnode;
newnode=top;
}
}





void pop()
{
if(head==NULL)
{printf("\nThe stack is empty");}

else{
top=head;
while(top->next!=0)
{
prev=top;
top=top->next;
}
prev->next=NULL;
free(top);}
}



void display()
{
top=head;
while(top!=0){
printf("%d-",top->data);
top=top->next;
}
}



int main()
{
int ch;
while(ch!=4)
{
printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit");
printf("\nenter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:break;
default:
{printf("wrong choice");}
}
}
}
