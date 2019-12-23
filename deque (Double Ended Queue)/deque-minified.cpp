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
	struct node {
		int data;
		node *next;
		node *prev;
	};
	int sizeDeque;
	node *front;
	node *back;
public:
	Deque() {
		sizeDeque = 0;
		front = NULL;
		back = NULL;
	}
	struct node * newNode(int value) {
		node *fresh = new node;
		fresh->data = value;
		fresh->next = NULL;
		fresh->prev = NULL;
		return fresh;
	}
	void Push_Front(int value) {
		node *fresh = newNode(value);
		if(front == NULL) {
			front = fresh;
			back = fresh;
		}
		else {
			front->prev = fresh;
			fresh->next = front;
			front = front->prev;
		}
		sizeDeque++;
	}
	void Push_Back(int value) {
		node *fresh = newNode(value);
		if(front == NULL) {
			front = fresh;
			back = fresh;
		}
		else {
			back->next = fresh;
			fresh->prev = back;
			back = back->next;
		}
		sizeDeque++;
	}
	int Pop_Front() {
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
		else {
			front->prev = NULL;
		}
		delete temp;
		sizeDeque--;
		return ret;
	}
	int Pop_Back() {
		if(front == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}
		node *temp = back;
		int ret = temp->data;
		back = back->prev;
		if(back == NULL) {
			front = NULL;
		}
		else {
			back->next = NULL;
		}
		delete temp;
		sizeDeque--;
		return ret;
	}
	int Front() {
		if(front == NULL) {
			cout<<"\nError: Deque is Empty\n";
			return -1;
		}
		return front->data;
	}
	int Back() {
		if(back == NULL) {
			cout<<"\nError: Deque is Empty\n";
			return -1;
		}
		return back->data;
	}
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}
	int DequeSize() {
		return sizeDeque;
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
		static int * arr = new int[sizeDeque];
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