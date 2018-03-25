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
		cout<<temp->data;
	    display(temp->right);
	    
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
}






