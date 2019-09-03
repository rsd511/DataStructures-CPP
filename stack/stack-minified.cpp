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
	struct node {
		int data;
		node *below;
	};
	int sizeStack;
	node *top;
public:
	Stack() {
		sizeStack = 0;
		top = NULL;
	}
	struct node * newNode(int value) {
		node *fresh = new node;
		fresh->data = value;
		fresh->below = NULL;
		return fresh;
	}
	void Push(int value) {
		node *fresh = newNode(value);
		fresh->below = top;
		top = fresh;
		sizeStack++;
	}
	int Pop() {
		if(top == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}
		node *temp = top;
		int ret = temp->data;
		top = top->below;
		delete temp;
		sizeStack--;
		return ret;
	}
	int Top() {
		if(top == NULL) {
			cout<<"\nError: Stack is Empty\n";
			return -1;
		}
		return top->data;
	}
	int IsEmpty() {
		if(top == NULL) return 1;
		else return 0;
	}
	int StackSize() {
		return sizeStack;
	}
	void View() {
		node *temp = top;
		while(temp != NULL) {
			cout<<temp->data<<"\n";
			temp = temp->below;
		}
	}
	int * ToArray() {
		if(top == NULL) return NULL;
		static int * arr = new int[sizeStack];
		node *temp = top;
		int i = 0;
		while(temp != NULL) {
			arr[i] = temp->data;
			temp = temp->below;
			i++;
		}
		return arr;
	}
};


int main()
{

	return 0;
}