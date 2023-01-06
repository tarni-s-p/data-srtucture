#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include "tree.h"
 
void main()
{
int c=0,i,se;
t *root=NULL;
clrscr();
while(c<4)
{
printf("Enter your Choice:\n1.Create Tree\n2.Searching the Node.\n3.Display");
printf("\nEnter Your Choice:");
scanf("%d",&c);
if (c==1)
{
printf("Enter No");
scanf("%d",&i);
create(i,&root);

}
else if(c==2)
{
printf("\nEnter Element to be Searched");
scanf("%d", &se);
bst(se,root,0);
}
else if(c==3)
{
display(root);
}
}
getch();
}
