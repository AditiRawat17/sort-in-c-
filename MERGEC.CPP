#include<iostream.h>
#include<conio.h>

void merge(int a[], int low, int mid,int high)
{
int i,h,j,b[50];
i=low;
h=low;
j=mid+1;

while((h<=mid)&&(j<high))
{
if(a[h]<a[j])
{
b[i]=a[h];
h=h+1;
}
else
{
b[i]=a[j];
j=j+1;
}
i=i+1;
}
if(h>mid)
{
for(int k=j; k<=mid; k++)
{
b[i]=a[k];
i=i+1;
}
}
for(int k=low; k<=high; k++)
{
a[k]=b[k];
}
}
void mergesort(int a[], int low, int high)
{
int mid;
if(low<high)
{
mid=( low+high)/2;
mergesort(a,low,mid);
mergesort(a, mid+1,high);
merge(a, low, mid, high);
}
}

void main()
{
clrscr();
int a[50],n,i,l,m,h;

cout<<"\nenter the size of array:";
cin>>n;

cout<<"\nenter "<<n<<" array element :?n";
for(i=0; i<n; i++)
{
cin>>a[i];
}
mergesort(a,0,n-1);

cout<<"\Sorted array is: \n";
for(i=0; i<n; i++)
{
cout<<" "<<a[i];
}
cout<<"\n\n\t ..........";
getch();
}
