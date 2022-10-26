#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int seq_search(int x[],int n,int k)
{
int i;
x[n]=k;
for(i=0;i<=n;i++)
	{
	if(x[i]==k)
	break;
	}
if(i<n)
return i;
else
return -1;
}

int main()
{
int n,i,k[10],f,a;
clrscr();
cout<<"enter the elements:";
cin>>n;
for(i=0;i<n;i++)
	{
	cout<<"K["<<i<<"]";
	cin>>k[i];
	}
cout<<"enter a";
cin>>a;
if((f = seq_search(k,n,a)) == -1)
{
cout<<"element not found";
}
else
{
cout<<"element found at index "<<f;
}
getch();
return 0;
}
