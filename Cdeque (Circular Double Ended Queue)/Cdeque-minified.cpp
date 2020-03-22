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
	struct node {
		int data;
		node *next;
		node *prev;
	};
	int sizeCdeque;
	node *front;
	node *back;
public:
	Cdeque() {
		sizeCdeque = 0;
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
			fresh->next = fresh;
			fresh->prev = fresh;
			front = fresh;
			back = fresh;
		}
		else {
			front->prev = fresh;
			fresh->next = front;
			back->next = fresh;
			fresh->prev = back;
			front = front->prev;
		}
		sizeCdeque++;
	}
	void Push_Back(int value) {
		node *fresh = newNode(value);
		if(front == NULL) {
			fresh->next = fresh;
			fresh->prev = fresh;
			front = fresh;
			back = fresh;
		}
		else {
			back->next = fresh;
			fresh->prev = back;
			front->prev = fresh;
			fresh->next = front;
			back = back->next;
		}
		sizeCdeque++;
	}
	int Pop_Front() {
		if(front == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}
		node *temp = front;
		int ret = temp->data;
		if(front == back) {
			front = NULL;
			back = NULL;
		}
		else {
			front = front->next;
			front->prev = back;
			back->next = front;
		}
		delete temp;
		sizeCdeque--;
		return ret;
	}
	int Pop_Back() {
		if(front == NULL) {
			cout<<"\nError: Underflow\n";
			return -1;
		}
		node *temp = back;
		int ret = temp->data;
		if(front == back) {
			front = NULL;
			back = NULL;
		}
		else {
			back = back->prev;
			back->next = front;
			front->prev = back;
		}
		delete temp;
		sizeCdeque--;
		return ret;
	}
	int Front() {
		if(front == NULL) {
			cout<<"\nError: Cdeque is Empty\n";
			return -1;
		}
		return front->data;
	}
	int Back() {
		if(back == NULL) {
			cout<<"\nError: Cdeque is Empty\n";
			return -1;
		}
		return back->data;
	}
	int IsEmpty() {
		if(front == NULL) return 1;
		else return 0;
	}
	int CdequeSize() {
		return sizeCdeque;
	}
	void View() {
		node *temp = front;
		for (int i = 1; i <= sizeCdeque; ++i) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<"\n";
	}
	int * ToArray() {
		if(front == NULL) {
			return NULL;
		}
		static int * arr = new int[sizeCdeque];
		node *temp = front;
		for (int i = 0; i < sizeCdeque; ++i) {
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