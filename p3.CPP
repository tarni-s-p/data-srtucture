#include<iostream.h>
#include<conio.h>
char *str_lwr(char a[])
{
int i=0;
while(a[i]!='\0')
{
a[i]=a[i]+32;
i++;
}
return a;
}

int main()
{
char s[100];
clrscr();
cout<<"enter string :";
cin>>s;
cout<<"string is uper case is :"<<str_lwr(s);
getch();
return 0;
}
