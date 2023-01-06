#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
#include "tree.h"
//t *p,*q;

//void create(int data,t **p)
//void inorder(t *p)
//void preorder(t *p)
//void postorder(t *p)
//void display(t *p)
//void bst(int x, t *p,int l)

void main()
{
int ch,n;
t *root=NULL;
do{
clrscr();
printf("Press 1 for creation of Binary Search Tree.\nPress 2 for display binary search tree.\nEnter your Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter Element for Tree.");
scanf("%d",&n);
create(n,&root);
break;
case 2:
display(root);
break;
default:
printf("Thank You!");
break;
}
printf("Press 1 for continue!");
scanf("%d",&n);
}while(n==1);



}