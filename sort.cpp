#include<iostream>
using namespace std;
int mini(int a[],int index){
int min;
min=a[index];
for(int i=0;i<10;i++)
{if(min>=a[i])
min=a[i];
  for(int i=0;i<10;i++)
{
  if(min==a[i])
    {int temp;
     temp=a[index];
     a[index]=min;
     a[i]=temp;
              }
}
}
return min;
}


int main()
{
int arr[10];
cout<<"enter the elements of the array";
for(int i=0;i<10;i++)
{cin>>arr[i];}
for(int i=0;i<10;i++)
{
arr[i]=mini(arr,i);
}
for(int i=0;i<10;i++)
{cout<<arr[i]<<endl;
}
}
