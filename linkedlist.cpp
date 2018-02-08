#include <iostream>
using namespace std;

struct akil     // node is created
{
	int data;
	akil *next;
	akil()
	{
		data = 0;
		next = NULL;
	}
};

class varun     // class declaration
{
private:
	akil *head, *tail;
public:
	varun()          // constructor
	{
		head = NULL;
		tail = NULL;
		head = tail;
	}
	
	void insert(int n)     // function to insert a node at the end of the list
	{
		akil*temp = new akil;
		temp->data = n;
		temp->next = NULL;
		if (head == NULL) 
		{
			head = temp;
		}
		else 
		{
			tail->next = temp;
			tail = temp;
		}
	}
	
	void insertAt(int pos, int value)  // function to insert a node anywhere in the list
	{
		akil *previous,*current;
		akil *temp = new akil;
		current = head;
		int a=countItems();
		if(pos>a+1)
		cout<<"Exceeds number of nodes";
		else
		{
		for (int i = 1; i < pos; i++) 
		{
			previous = current;
			current = current->next;
		}
		previous->next = temp;
		temp->data = value;
		temp->next = current;
	    }
	}
	
	void display()    // function to display nodes
	{
		akil *temp = new akil;
		temp = head;
		while (temp != NULL) 
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
		
	}
	
	void deleteNode()  // function to delete node at the end
	{
		akil *previous, *current;
		previous=NULL;
		current = head;
		while(current->next != NULL) 
		{
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
	}
	
	void deleteAt(int pos) // function to delete node at a specified position
	{
		akil *previous, *current;
		current = head;
		for (int i = 1; i < pos; i++) 
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
	}
	
	int countItems()     //function to count items
	{
		akil *current;
		current = head;
		int a=0;
		while(current->next!=NULL)
		{
			++a;
			current = current->next;	
		}
		cout<<a;
		return a;		
	}
};

int main()
{
	varun a;
	a.insert(4);
	a.insert(6);
	a.insert(7);
	a.insert(12);
	a.insertAt(2,3);
	a.display();
	a.deleteNode();
	a.display();
	a.insert(3);
	a.display();
	a.deleteNode();
	a.display();
	a.deleteAt(2);
	a.display();
	a.countItems();
	return 0;
}
