#include<iostream.h>
#include<conio.h>
int str_len(char a[])
{
int i=0;
while(a[i]!='\0')
{
i++;
}
return i;
}

int main()
{
char s[100],l;
clrscr();
cout<<"enter string";
cin>>s;
cout<<"lenth of string id "<<str_len(s);
return 0;
}
