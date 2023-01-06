#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct tree{
int d;
struct tree *r;
struct tree *l;
};

typedef struct tree t;
t *p,*q;

void create(int data,t **p)
{
int i;
if(*p==NULL)
{
//create new node.
t *newn;
newn=(t *)malloc(sizeof(t));
newn->d=data;
newn->r=NULL;
newn->l=NULL;

*p=newn;
//p=newn;
}
else
{
q=*p;
if(data>q->d)
create(data,&q->r);
else
create(data,&q->l);
}
}

void inorder(t *p)
{
if(p!=NULL)
{
inorder((p->l));
printf("%d\n",p->d);
inorder((p->r));
}
}

void preorder(t *p)
{
if(p!=NULL)
{
printf("%d\n",p->d);
preorder((p->l));
preorder((p->r));
}
}

void postorder(t *p)
{
if(p!=NULL)
{
postorder((p->l));
postorder((p->r));
printf("%d\n",p->d);
}
}
void display(t *p)
{
if(p!=NULL)
{
printf("%d<--%d-->%d\n",p->l->d,p->d,p->r->d);
display((p->l));
display((p->r));
}

}


void main()
{
int c=0,i;
t *root=NULL;
clrscr();
while(c<=5)
{
printf("Enter your Choice:\n1.Create Tree\n2.Inorder Traversing\n3.Preorder Traversing\n4.Postorder Traversing\n5. Display");
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
inorder(root);
}
else if(c==3)
{
preorder(root);
}
else if(c==4)
{
postorder(root);
}
else
display(root);
}
getch();
}
