#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,loc,temp,min,a[10];
cout<<"enter the number of element:";
cin>>n;
cout<<"enter the element\n";
for(i=0; i<n; i++)
{
cin>>a[i];
}
for(i=0; i<n; i++)
{
min=a[i];
loc=i;
for(j=i+1; j<n; j++)
{
if(min>a[j])
{
min=a[j];
loc=j;
}
}
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
for(int pp=0;pp<n;pp++)
{
cout<<a[pp]<<" ";
}
cout<<endl;
}
cout<<"sorted list is as follow\n";
for(i=0; i<n; i++)
{
cout<<a[i]<<" ";
}
getch();
}
