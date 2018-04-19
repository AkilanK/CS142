#include<iostream>
using namespace std;
int arr[100];
int n;
void swap(int array[],int x,int y)
{int temp=array[x];
array[x]=array[y];
array[y]=temp;}

void heapify(int a[],int index)
{

int l=2*index+1;
int r=2*index+2;
if(a[index]<a[l] || a[index]<a[r])
{
if(a[l]>a[r])
swap(a,index,l);
else swap(a,index,r);
}
}
void heapsort(int ar[])
{
int ind=n-1;
while(ind>-1)
{ swap(ar,ar[0],ar[ind]);
  for(int p=ind-1;p>-1;p--)
heapify(ar,p);
ind=ind-1;
}
}



int main(){

cout<<"Enter the number of elements in the array";
cin>>n;
cout<<"Enter all elements of the array";
for(int i=0;i<n;i++)
cin>>arr[i];
for(int j=n-1;j>-1;j--)
{heapify(arr,j);}
heapsort(arr);
for(int k=0;k<n;k++)
cout<<arr[k];
}
