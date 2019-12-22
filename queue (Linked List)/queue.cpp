#include <iostream>
using namespace std;


// Visit the following link for the documentation:-
// Will be added soon

// FUNCTIONS AVAILABLE:-
// 1. Push(int);
// 2. Pop();
// 3. Front();
// 4. Back();
// 5. IsEmpty();
// 6. QueueSize();
// 7. View();
// 8. ToArray();


class Queue
{	

private:

	// S T R U C T U R E   &   V A R I A B L E S


	// Structure of queue nodes
	struct node {
		// Data stored in each node
		int data;

		// Points to the next node in the queue
		node *next;
	};


	// Size of the queue
	int sizeQueue;

	// Pointer to the first node of the queue
	node *front;

	// Pointer to the last node of the queue
	node *back;



public:

	// M E T H O D S


	// Constructor
	Queue() {
		// Sets initial size of the queue to 0
		sizeQueue = 0;

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

		return fresh;
	}


	// Pushes into the queue
	void Push(int value) {
		// New node created
		node *fresh = newNode(value);

		// If queue is empty
		if(front == NULL) {
			// Set both ends to this new node
			front = fresh;
			back = fresh;
		}
		// If queue is not empty
		else {
			// Append the new node
			back->next = fresh;
			// Set the end pointer to this node
			back = back->next;
		}

		// Increment size of the queue
		sizeQueue++;
	}


	// Pops & returns the first element of the queue
	int Pop() {
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

		// If queue is now empty
		if(front == NULL) {
			// Set end pointer to NULL
			back = NULL;
		}

		// Delete the target node
		delete temp;

		// Decrement size of the queue
		sizeQueue--;

		return ret;
	}


	// Returns the data present in the front node
	int Front() {
		// Handling Empty Queue
		if(front == NULL) {
			cout<<"\nError: Queue is Empty\n";
			return -1;
		}

		return front->data;
	}


	// Returns the data present in the back node
	int Back() {
		// Handling Empty Queue
		if(back == NULL) {
			cout<<"\nError: Queue is Empty\n";
			return -1;
		}

		return back->data;
	}


	// Returns 1 if queue is empty, else returns 0
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}


	// Returns the current size of the queue
	int QueueSize() {
		return sizeQueue;
	}


	// View the queue
	void View() {
		// Create a temporary node pointing at the front of the queue
		node *temp = front;

		// While it hasn't reached the queue end
		while(temp != NULL) {
			// Print the queue
			cout<<temp->data<<" ";

			// Traverse
			temp = temp->next;
		}

		cout<<"\n";
	}


	// Convert the queue to Array and return
	int * ToArray() {
		// Handle Empty Queue
		if(front == NULL) {
			return NULL;
		}

		// Create array
		static int * arr = new int[sizeQueue];

		// Create a temporary node pointing at the front of the queue
		node *temp = front;

		// Counter
		int i = 0;

		// While it hasn't reached queue end
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