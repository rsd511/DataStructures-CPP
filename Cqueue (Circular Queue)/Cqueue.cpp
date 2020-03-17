#include <iostream>
using namespace std;


// Visit the following link for the documentation:-
// https://github.com/rsd511/DataStructures-CPP/tree/master/Cqueue%20(Circular%20Queue)

// FUNCTIONS AVAILABLE:-
// 1. Push(int);
// 2. Pop();
// 3. Front();
// 4. Back();
// 5. IsEmpty();
// 6. CqueueSize();
// 7. View();
// 8. ToArray();


class Cqueue
{	

private:

	// S T R U C T U R E   &   V A R I A B L E S


	// Structure of Cqueue nodes
	struct node {
		// Data stored in each node
		int data;

		// Points to the next node in the Cqueue
		node *next;
	};


	// Size of the Cqueue
	int sizeCqueue;

	// Pointer to the first node of the Cqueue
	node *front;

	// Pointer to the last node of the Cqueue
	node *back;



public:

	// M E T H O D S


	// Constructor
	Cqueue() {
		// Sets initial size of the Cqueue to 0
		sizeCqueue = 0;

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


	// Pushes into the Cqueue
	void Push(int value) {
		// New node created
		node *fresh = newNode(value);

		// If Cqueue is empty
		if(front == NULL) {
			// First element circularly goes back to itself
			fresh->next = fresh;
			// Set both ends to this new node
			front = fresh;
			back = fresh;
		}
		// If Cqueue is not empty
		else {
			// Append the new node
			back->next = fresh;
			// Set the end pointer to this node
			back = back->next;
			// Set the next path of last node to first node
			back->next = front;
		}

		// Increment size of the Cqueue
		sizeCqueue++;
	}


	// Pops & returns the first element of the Cqueue
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

		// If the Cqueue size was 1
		if(sizeCqueue == 1) {
			front = NULL;
			back = NULL;
		}

		// If Cqueue size was greater than 1
		else {
			// Shift front pointer
			front = front->next;
			// Fix Circulation
			back->next = front;
		}

		// Delete the target node
		delete temp;

		// Decrement size of the Cqueue
		sizeCqueue--;

		return ret;
	}


	// Returns the data present in the front node
	int Front() {
		// Handling Empty Cqueue
		if(front == NULL) {
			cout<<"\nError: Cqueue is Empty\n";
			return -1;
		}

		return front->data;
	}


	// Returns the data present in the back node
	int Back() {
		// Handling Empty Cqueue
		if(back == NULL) {
			cout<<"\nError: Cqueue is Empty\n";
			return -1;
		}

		return back->data;
	}


	// Returns 1 if Cqueue is empty, else returns 0
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}


	// Returns the current size of the Cqueue
	int CqueueSize() {
		return sizeCqueue;
	}


	// View the Cqueue
	void View() {
		// Handling Empty Cqueue
		if(IsEmpty()) {
			cout << "\n";
			return;
		}

		// Create a temporary node pointing at the front of the Cqueue
		node *temp = front;

		// For the amount of present elements
		for (int i = 1; i <= sizeCqueue; ++i) {
			// Print the Cqueue
			cout << temp->data << " ";

			// Traverse
			temp = temp->next;
		}

		cout<<"\n";
	}


	// Convert the Cqueue to Array and return
	int * ToArray() {
		// Handling Empty Cqueue
		if(front == NULL) {
			return NULL;
		}

		// Create array
		static int * arr = new int[sizeCqueue];

		// Create a temporary node pointing at the front of the Cqueue
		node *temp = front;

		// For the amount of present elements
		for (int i = 0; i < sizeCqueue; ++i) {
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