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
	struct node {
		int data;
		node *next;
	};
	int sizeCqueue;
	node *front;
	node *back;
public:
	Cqueue() {
		sizeCqueue = 0;
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
			fresh->next = fresh;
			front = fresh;
			back = fresh;
		}
		else {
			back->next = fresh;
			back = back->next;
			back->next = front;
		}
		sizeCqueue++;
	}
	int Pop() {
		if(front == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}
		node *temp = front;
		int ret = temp->data;
		if(sizeCqueue == 1) {
			front = NULL;
			back = NULL;
		}
		else {
			front = front->next;
			back->next = front;
		}
		delete temp;
		sizeCqueue--;
		return ret;
	}
	int Front() {
		if(front == NULL) {
			cout<<"\nError: Cqueue is Empty\n";
			return -1;
		}
		return front->data;
	}
	int Back() {
		if(back == NULL) {
			cout<<"\nError: Cqueue is Empty\n";
			return -1;
		}
		return back->data;
	}
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}
	int CqueueSize() {
		return sizeCqueue;
	}
	void View() {
		if(IsEmpty()) {
			cout << "\n";
			return;
		}
		node *temp = front;
		for (int i = 1; i <= sizeCqueue; ++i) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout<<"\n";
	}
	int * ToArray() {
		if(front == NULL) {
			return NULL;
		}
		static int * arr = new int[sizeCqueue];
		node *temp = front;
		for (int i = 0; i < sizeCqueue; ++i) {
			arr[i] = temp->data;
			temp = temp->next;
		}
		return arr;
	}
};


int main()
{
	
	return 0;
}