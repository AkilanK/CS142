#include<iostream>
using namespace std;
int heap[100];

int heaplength=1;
void insert(int key)
{heap[heaplength]=key;
int a;
a=heaplength;
while(heap[a]>=heap[(a-1)/2] && a!=0)
{
int temp=heap[(a-1)/2];
heap[(a-1)/2]=heap[a];
heap[a]=temp;
a=(a-1)/2;
}
heaplength=heaplength+1;
}
int main()
{
int x;
cout<<"Enter the preferred number of elements in the max heap";
cin>>x;
cout<<"Enter an element";
cin>>heap[0];
cout<<"Enter all other elements";
int p;
for(int i=1;i<x;i++)
{cin>>p;
insert(p);
}
for(int j=0;j<x;j++)
{cout<<heap[j];
}
}




