#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
struct stack
{
int s[size];
int top;
}st;
int stfull()
{
if
(st.top >= size - 1)
return 1;
else
return 0;
}
void push(int item)
{
st.top++;
st.s[st.top] = item;
}
int stempty()
{
if (st.top == -1)
return 1;
else
return 0;
}
int pop()
{
int item;
item = st.s[st.top];
st.top--;
return (item);
}
int peek()
{
printf("\n TOP MOST ELEMENT IS%d",st.s[st.top]);
return 0;

}
int main()
{
int item,choice;
char ans;
clrscr();
st.top = -1;
printf("\n \t IMPLEMENTATION OF STACK");
do
{
printf("\n MAIN MENU");
printf("\n 1.PUSH  2.POP  3.EXIT  4.PEEK  “);
printf("\nENTER YOUR CHOICE\n");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("ENTER THE ITEM TO BE PUSHED  ");
scanf("%d",&item);
if(stfull())
printf("STACK IS FULL");
else
push(item);
break;
case 2:
if(stempty())
printf("EMPTY STACK!UNDERFLOW!!!");
else
{
item=pop();
printf("\n THE POPPED ELEMENT IS %d  ",item);
}
break;
case 3:
exit(0);
case 4:
peek();
break;
}
printf("\n DO YOU WANT TO CONTINUE  ");
ans=getche();
}
while(ans=='Y' || ans=='y');
return 0;
}