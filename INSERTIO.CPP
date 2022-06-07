#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,j,a[10],temp;
cout<<"insertion sort\n";
cout<<"enter the number of element you want in your list";
cin>>n;
for(i=0; i<=n; i++)
{
cin>>a[i];
}
for(i=1; i<n; i++)
{
temp=a[i];
for(j=i-1; j>=0 && temp<a[j]; j--)
{
a[j+1]=a[j];
}
a[j+1]=temp;
}
cout<<"shorted list is\n";
for(i=0; i<n; i++)
{
cout<<a[i]<<endl;
}
getch();
}

