#include <iostream>
using namespace std;


// Visit the following link for the documentation:-
// https://github.com/rsd511/DataStructures-CPP/tree/master/stack

// FUNCTIONS AVAILABLE:-
// 1. Push(int);
// 2. Pop();
// 3. Top();
// 4. IsEmpty();
// 5. StackSize();
// 6. View();
// 7. ToArray();


class Stack
{	

private:

	// S T R U C T U R E   &   V A R I A B L E S


	// Structure of stack nodes
	struct node {
		// Data stored in each node
		int data;

		// Points to the node below this node
		node *below;
	};


	// Size of the stack
	int sizeStack;

	// Pointer to top node of the stack
	node *top;




public:

	// M E T H O D S


	// Constructor
	Stack() {
		// Sets initial size of stack to 0
		sizeStack = 0;

		// Sets the top pointer initially to null
		top = NULL;
	}


	// Creates a new node
	struct node * newNode(int value) {
		// Memory Allocation
		node *fresh = new node;

		// Initial data set to the value passed
		fresh->data = value;

		// Bottom node w.r.t. this node set initially to null
		fresh->below = NULL;

		return fresh;
	}


	// Pushes into the stack
	void Push(int value) {
		// New node created
		node *fresh = newNode(value);

		// New node points to previous top node
		fresh->below = top;

		// New top node
		top = fresh;

		// Increment size of the stack
		sizeStack++;
	}


	// Pops & returns the top element of the stack
	int Pop() {
		// Handling underflow
		if(top == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}

		// Store the node to be deleted in temp
		node *temp = top;

		// Store value to be returned;
		int ret = temp->data;

		// Shift the top node to the node below it
		top = top->below;

		// Delete the upper node
		delete temp;

		// Decrement size of the stack
		sizeStack--;

		return ret;
	}


	// Returns the data present in the top node
	int Top() {
		// Handling Empty Stack
		if(top == NULL) {
			cout<<"\nError: Stack is Empty\n";
			return -1;
		}

		return top->data;
	}


	// Returns 1 if stack is empty, else returns 0
	int IsEmpty() {
		if(top == NULL) return 1;
		else return 0;
	}


	// Returns the current size of the stack
	int StackSize() {
		return sizeStack;
	}


	// View the stack
	void View() {
		// Create a temporary node pointing at the top of the stack
		node *temp = top;

		// While it hasn't reached the stack end
		while(temp != NULL) {
			// Print the stack
			cout<<temp->data<<"\n";

			// Traverse
			temp = temp->below;
		}
	}


	// Convert the stack to Array and return
	int * ToArray() {
		// Handle Empty Stack
		if(top == NULL) {
			return NULL;
		}

		// Create array
		static int * arr = new int[sizeStack];

		// Create a temporary node pointing at the top of the stack
		node *temp = top;

		// Counter
		int i = 0;

		// While it hasn't reached stack end
		while(temp != NULL) {
			// Store in the array
			arr[i] = temp->data;

			// Traverse
			temp = temp->below;

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