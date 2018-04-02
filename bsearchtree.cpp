#include<iostream>
using namespace std;

class node{
public:
int data;
node*parent;
node*left;
node*right;

node(){
parent=NULL;
left=NULL;
right=NULL;
}
};
class Btree{
public:
node*root;

Btree(){
root=NULL;
}

void insert(int x){
node*temp=new node;
temp->data=x;
temp->parent=NULL;
temp->left=NULL;
temp->right=NULL;

if(root==NULL){
root=temp;
}
else{
node*current=new node;
current=root;
while(1){
 if(x<current->data)
{ if(current->left==NULL){
  temp->parent=current;
  current->left=temp;
break;}
else {current=current->left;
}
}
else if(x>current->data)
{
if(current->right==NULL)
{temp->parent=current;
current->right=temp;
break;}
else
{current=current->right;
}
}
}
}
}
void display(node*temp)
	{
		if(temp==NULL)
		return;                                                                                                                                                                              
		display(temp->left);
		cout<<temp->data<<endl;
	    display(temp->right);
	    
	}
int search(node*temp,int key)
{
if (temp!=NULL)
{
search(temp->left,key);
if(temp->data==key)
{return key-1;
}
search(temp->right,key);
}
}
void deletenode(node*current)
{
if(current->left==NULL && current->right==NULL)
{if(current->parent->left==current)
  {current->parent->left=NULL;}
else current->parent->right=NULL;
    }

else if(current->left==NULL)
{if(current->parent->left=current)
   {current->parent->left=current->right;}
else current->parent->right=current->right;
}
else if(current->right==NULL)
{if(current->parent->left=current)
   {current->parent->left=current->left;}
else current->parent->right=current->left;
}

else{
node*p;
p=current->left;
while(p->right!=NULL)
{p=p->right;}
if(p->left==NULL){
p->parent=current->parent;
p->left=current->left;
p->right=current->right;
{if(current->parent->left=current)
   {current->parent->left=p;}
else current->parent->right=p;
}
}
else
{p->left->parent=p->parent;
p->parent->right=p->left;
}
}



}
};
int main(){
Btree a;
a.insert(5);
a.insert(6);
a.insert(2);
a.insert(9);
a.insert(4);
a.insert(8);
a.insert(3);
a.display(a.root);
cout<<"Enter the element to search";
int s;
cin>>s;
if(s==a.search(a.root,s)+1)
{cout<<"the element is found"<<endl;}
else
{cout<<"the element is not found"<<endl;}
a.deletenode(a.root);
a.display(a.root);
}






