#include<stdio.h>
#include<stdlib>
# define n 5
int stack[n],top = -1;
void push(int);
void pop();
void display();
int main()
{
    push(30);
    push(40);
    push(-1);
    pop();
    push(25);
    pop();
    display();
}
void push(int item)
{
    if(top==n-1)
    printf("Stack is full \n");
    else
    {
        top = top + 1;
        Stack [top] = item;
    }
}
void display()
{
    item = stack[top];
    top = top-1;
}
void display()
{
  int i;
  for (i=top; i>=0; i--)
  {
      printf("Stack content is %d n",Stack[i]);

  }
}
