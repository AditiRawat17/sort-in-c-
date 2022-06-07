#include<iostream.h>
#include<conio.h>
void quick_sort(int[],int,int);

int partition(int[],int,int);

void main()
{
clrscr();
int a[30],n;
cout<<"enter the data element o be sorted:";
cin>>n;
cout<<"enter array element: \n";
for(int i=0; i<n; i++)
cin>>a[i];
cout<<"\narray before sorting: ";
for(int j=0; j<n; j++)
cout<<a[j]<<" ";
quick_sort(a,0,n-1);
cout<<"\narray after sorting: ";
for(int k=0; k<n; k++)
cout<<a[k]<<" ";
getch();
}
void quick_sort (int a[], int start, int end)
{
int p;
if(start<end)
{
p=partition(a,start,end);
quick_sort(a,start,p-1);
quick_sort(a,p+1,end);
}
}
int partition(int a[], int start, int end)
{
int p,l,r,temp,temp1;
p=start;
l=start+1;
r=end;
while(l<r)
{
while(a[l]<=a[p] && l<end)
l++;
while(a[r]>a[p] && r>start)
r--;
if(l<r)
{
temp=a[r];
a[r]=a[l];
a[l]=temp;
}
if(r!=p)
{
temp1+a[r];
a[r]=a[p];
a[p]=temp1;
}
}
return r;
}


