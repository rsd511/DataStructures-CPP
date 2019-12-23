#include <iostream>
using namespace std;


// Visit the following link for the documentation:-
// https://github.com/rsd511/DataStructures-CPP/tree/master/deque%20(Double%20Ended%20Queue)

// FUNCTIONS AVAILABLE:-
// 1. Push_Front(int);
// 2. Push_Back(int);
// 3. Pop_Front();
// 4. Pop_Back();
// 5. Front();
// 6. Back();
// 7. IsEmpty();
// 8. DequeSize();
// 9. View();
// 10. ToArray();


class Deque
{	

private:

	// S T R U C T U R E   &   V A R I A B L E S


	// Structure of deque nodes
	struct node {
		// Data stored in each node
		int data;

		// Points to the next node in the deque
		node *next;

		// Points to the previous node in the deque
		node *prev;
	};


	// Size of the deque
	int sizeDeque;

	// Pointer to the first node of the deque
	node *front;

	// Pointer to the last node of the deque
	node *back;



public:

	// M E T H O D S


	// Constructor
	Deque() {
		// Sets initial size of the deque to 0
		sizeDeque = 0;

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


	// Pushes to the front of deque
	void Push_Front(int value) {
		// New node created
		node *fresh = newNode(value);

		// If deque is empty
		if(front == NULL) {
			// Set both ends to this new node
			front = fresh;
			back = fresh;
		}
		// If deque is not empty
		else {
			// Prepend the new node
			front->prev = fresh;

			// Set current Front as the next of new node
			fresh->next = front;

			// Set the front pointer to this node
			front = front->prev;
		}

		// Increment size of the deque
		sizeDeque++;
	}


	// Pushes to the back of deque
	void Push_Back(int value) {
		// New node created
		node *fresh = newNode(value);

		// If deque is empty
		if(front == NULL) {
			// Set both ends to this new node
			front = fresh;
			back = fresh;
		}
		// If deque is not empty
		else {
			// Append the new node
			back->next = fresh;

			// Set current Back as the prev of new node
			fresh->prev = back;

			// Set the end pointer to this node
			back = back->next;
		}

		// Increment size of the deque
		sizeDeque++;
	}


	// Pops & returns the first element of the deque
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

		// Shift the front node to the next node
		front = front->next;

		// If deque is now empty
		if(front == NULL) {
			// Set end pointer to NULL
			back = NULL;
		}
		// If not empty
		else {
			// Set the prev of the new Front to NULL
			front->prev = NULL;
		}

		// Delete the target node
		delete temp;

		// Decrement size of the deque
		sizeDeque--;

		return ret;
	}


	// Pops & returns the last element of the deque
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

		// Shift the back node to the prev node
		back = back->prev;

		// If deque is now empty
		if(back == NULL) {
			// Set front pointer to NULL
			front = NULL;
		}
		// If not empty
		else {
			// Set the next of the new Back to NULL
			back->next = NULL;
		}

		// Delete the target node
		delete temp;

		// Decrement size of the deque
		sizeDeque--;

		return ret;
	}


	// Returns the data present in the front node
	int Front() {
		// Handling Empty Deque
		if(front == NULL) {
			cout<<"\nError: Deque is Empty\n";
			return -1;
		}

		return front->data;
	}


	// Returns the data present in the back node
	int Back() {
		// Handling Empty Deque
		if(back == NULL) {
			cout<<"\nError: Deque is Empty\n";
			return -1;
		}

		return back->data;
	}


	// Returns 1 if deque is empty, else returns 0
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}


	// Returns the current size of the deque
	int DequeSize() {
		return sizeDeque;
	}


	// View the deque
	void View() {
		// Create a temporary node pointing at the front of the deque
		node *temp = front;

		// While it hasn't reached the deque end
		while(temp != NULL) {
			// Print the deque
			cout<<temp->data<<" ";

			// Traverse
			temp = temp->next;
		}

		cout<<"\n";
	}


	// Convert the deque to Array and return
	int * ToArray() {
		// Handle Empty Deque
		if(front == NULL) {
			return NULL;
		}

		// Create array
		static int * arr = new int[sizeDeque];

		// Create a temporary node pointing at the front of the deque
		node *temp = front;

		// Counter
		int i = 0;

		// While it hasn't reached deque end
		while(temp != NULL) {
			// Store in the array
			arr[i] = temp->data;

			// Traverse
			temp = temp->next;

			// Increment Counter
			i++;
		}

		return arr;
	}


};


int main()
{
	
	return 0;
}