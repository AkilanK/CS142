#include<iostream>
using namespace std;
int arr[100];

void heapify(int a[],int index)
{
void swap(int x,int y)
{int temp=a[x];
a[x]=a[y];
a[y]=temp;}

int l=2*index+1;
int r=2*index+2;
if(a[index]>a[l] && a[index]>a[r])
break;
if(a[index]<a[l] || a[index]<a[r])
{
if(a[l]>a[r])
swap(index,l);
else swap(index,right);
}
}
int main(){
int n;
cout<<"Enter the number of elements in the array";
cin>>n;
cout<<"Enter all elements of the array";
for(int i=0;i<n;i++)
cin>>arr[i];
for(int j=n-1;j>-1;j--)
heapify(arr,j);
for(int k=0;k<n;k++)
cout<<arr[k];
}
