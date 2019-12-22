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
	struct node {
		int data;
		node *next;
	};
	int sizeQueue;
	node *front;
	node *back;
public:
	Queue() {
		sizeQueue = 0;
		front = NULL;
		back = NULL;
	}
	struct node * newNode(int value) {
		node *fresh = new node;
		fresh->data = value;
		fresh->next = NULL;
		return fresh;
	}
	void Push(int value) {
		node *fresh = newNode(value);
		if(front == NULL) {
			front = fresh;
			back = fresh;
		}
		else {
			back->next = fresh;
			back = back->next;
		}
		sizeQueue++;
	}
	int Pop() {
		if(front == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}
		node *temp = front;
		int ret = temp->data;
		front = front->next;
		if(front == NULL) {
			back = NULL;
		}
		delete temp;
		sizeQueue--;
		return ret;
	}
	int Front() {
		if(front == NULL) {
			cout<<"\nError: Queue is Empty\n";
			return -1;
		}
		return front->data;
	}
	int Back() {
		if(back == NULL) {
			cout<<"\nError: Queue is Empty\n";
			return -1;
		}
		return back->data;
	}
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}
	int QueueSize() {
		return sizeQueue;
	}
	void View() {
		node *temp = front;
		while(temp != NULL) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<"\n";
	}
	int * ToArray() {
		if(front == NULL) {
			return NULL;
		}
		static int * arr = new int[sizeQueue];
		node *temp = front;
		int i = 0;
		while(temp != NULL) {
			arr[i] = temp->data;
			temp = temp->next;
			i++;
		}
		return arr;
	}
};


int main()
{
	
	return 0;
}