#include <iostream>
using namespace std;


// Visit the following link for the documentation:-
// https://github.com/rsd511/DataStructures-CPP/tree/master/Cdeque%20(Circular%20Double%20Ended%20Queue)

// FUNCTIONS AVAILABLE:-
// 1. Push_Front(int);
// 2. Push_Back(int);
// 3. Pop_Front();
// 4. Pop_Back();
// 5. Front();
// 6. Back();
// 7. IsEmpty();
// 8. CdequeSize();
// 9. View();
// 10. ToArray();


class Cdeque
{	

private:

	// S T R U C T U R E   &   V A R I A B L E S


	// Structure of Cdeque nodes
	struct node {
		// Data stored in each node
		int data;

		// Points to the next node in the Cdeque
		node *next;

		// Points to the previous node in the Cdeque
		node *prev;
	};


	// Size of the Cdeque
	int sizeCdeque;

	// Pointer to the first node of the Cdeque
	node *front;

	// Pointer to the last node of the Cdeque
	node *back;



public:

	// M E T H O D S


	// Constructor
	Cdeque() {
		// Sets initial size of the Cdeque to 0
		sizeCdeque = 0;

		// Sets the front pointer initially to null
		front = NULL;

		// Sets the back pointer initially to null
		back = NULL;
	}


	// Creates a new node
	struct node * newNode(int value) {
		// Memory Allocation
		node *fresh = new node;

		// Initial data set to the value passed
		fresh->data = value;

		// Next node w.r.t. this node set initially to null
		fresh->next = NULL;

		// Previous node w.r.t. this node set initially to null
		fresh->prev = NULL;

		return fresh;
	}


	// Pushes to the front of Cdeque
	void Push_Front(int value) {
		// New node created
		node *fresh = newNode(value);

		// If Cdeque is empty
		if(front == NULL) {
			// Set both pointers going back to itself
			fresh->next = fresh;
			fresh->prev = fresh;
			// Set both ends to this new node
			front = fresh;
			back = fresh;
		}
		// If Cdeque is not empty
		else {
			// Prepend the new node
			front->prev = fresh;

			// Set current Front as the next of new node
			fresh->next = front;

			// Set the next of the back to the new node
			back->next = fresh;

			// Set the prev of the new node to back
			fresh->prev = back;

			// Set the front pointer to this new node
			front = front->prev;
		}

		// Increment size of the Cdeque
		sizeCdeque++;
	}


	// Pushes to the back of Cdeque
	void Push_Back(int value) {
		// New node created
		node *fresh = newNode(value);

		// If Cdeque is empty
		if(front == NULL) {
			// Set both pointers going back to itself
			fresh->next = fresh;
			fresh->prev = fresh;
			// Set both ends to this new node
			front = fresh;
			back = fresh;
		}
		// If Cdeque is not empty
		else {
			// Append the new node
			back->next = fresh;

			// Set current Back as the prev of new node
			fresh->prev = back;

			// Set the prev of the front node to the new node
			front->prev = fresh;

			// Set the next of the new node to the front node
			fresh->next = front;

			// Set the end pointer to this node
			back = back->next;
		}

		// Increment size of the Cdeque
		sizeCdeque++;
	}


	// Pops & returns the first element of the Cdeque
	int Pop_Front() {
		// Handling underflow
		if(front == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}

		// Store the node to be deleted in temp
		node *temp = front;

		// Store value to be returned;
		int ret = temp->data;

		// If the Cdeque consists of only 1 element
		if(front == back) {
			// Set both pointers to NULL
			front = NULL;
			back = NULL;
		}

		// If the Cdeque consists of more than 1 element
		else {
			// Shift the front node to the next node
			front = front->next;
	
			// Set the prev of new front to back
			front->prev = back;

			// Set the next of back to new front
			back->next = front;
		}

		// Delete the target node
		delete temp;

		// Decrement size of the Cdeque
		sizeCdeque--;

		return ret;
	}


	// Pops & returns the last element of the Cdeque
	int Pop_Back() {
		// Handling underflow
		if(front == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}

		// Store the node to be deleted in temp
		node *temp = back;

		// Store value to be returned;
		int ret = temp->data;

		// If the Cdeque consists of only 1 element
		if(front == back) {
			// Set both pointers to NULL
			front = NULL;
			back = NULL;
		}

		// If the Cdeque consists of more than 1 element
		else {
			// Shift the back node to the prev node
			back = back->prev;
	
			// Set the next of new back to front
			back->next = front;

			// Set the prev of front to new back
			front->prev = back;
		}

		// Delete the target node
		delete temp;

		// Decrement size of the Cdeque
		sizeCdeque--;

		return ret;
	}


	// Returns the data present in the front node
	int Front() {
		// Handling Empty Cdeque
		if(front == NULL) {
			cout<<"\nError: Cdeque is Empty\n";
			return -1;
		}

		return front->data;
	}


	// Returns the data present in the back node
	int Back() {
		// Handling Empty Cdeque
		if(back == NULL) {
			cout<<"\nError: Cdeque is Empty\n";
			return -1;
		}

		return back->data;
	}


	// Returns 1 if Cdeque is empty, else returns 0
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}


	// Returns the current size of the Cdeque
	int CdequeSize() {
		return sizeCdeque;
	}


	// View the Cdeque
	void View() {
		// Create a temporary node pointing at the front of the Cdeque
		node *temp = front;

		// Traverse through all elements
		for (int i = 1; i <= sizeCdeque; ++i) {
			// Print the Cdeque
			cout<<temp->data<<" ";

			// Traverse
			temp = temp->next;
		}

		cout<<"\n";
	}


	// Convert the Cdeque to Array and return
	int * ToArray() {
		// Handle Empty Cdeque
		if(front == NULL) {
			return NULL;
		}

		// Create array
		static int * arr = new int[sizeCdeque];

		// Create a temporary node pointing at the front of the Cdeque
		node *temp = front;

		// For the amount of present elements
		for (int i = 0; i < sizeCdeque; ++i) {
			// Store in the array
			arr[i] = temp->data;

			// Traverse
			temp = temp->next;
		}

		return arr;
	}


};


int main()
{
	
	return 0;
}