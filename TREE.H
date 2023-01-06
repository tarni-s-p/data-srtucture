#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
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
void bst(int x, t *p,int l)
{
if(p!=NULL)
{
if(p->d==x)
printf("\nSearched Elelemt is at level:%d",l);
else if(x>p->d)
bst(x,p->r,l+1);
else
bst(x,p->l,l+1);
}
else
printf("\nSearched Element is not Found!");
}

/*void delete(int n,t *p)
{

if(n>p->d)
	{
	delete(n,p->r);
	}
else if(n<p->d)
	delete(n,p->l);
else
	{
	if(p->l==NULL && p->r==NULL)     //for leaf node.
		free(p);
	}


}*/
