#include <iostream>
using namespace std;


// Visit the following link for the documentation:-
// https://github.com/rsd511/DataStructures-CPP/tree/master/bst%20(Binary%20Search%20Tree)

// FUNCTIONS AVAILABLE:-
// 1. Insert(int)
// 2. Search(int)
// 3. Delete(int)
// 4. LowerBound(int)
// 5. UpperBound(int)
// 6. Max()
// 7. Min()
// 8. Inorder()
// 9. Preorder()
// 10. Postorder()
// 11. BSTsize()


class BST
{	
public:
	struct node {
		int data;
		node *left, *right;
	};
	int sizeBST;
	node *root;
	BST() {
		sizeBST = 0;
		root = nullptr;
	}
	struct node * newNode(int value) {
		node *fresh = new node;
		fresh->data = value;
		fresh->left = nullptr;
		fresh->right = nullptr;
		return fresh;
	}
	void Insert(int value) {
		if(root == nullptr) {
			sizeBST = 1;
			root = newNode(value);
			return;
		}
		node *temp = root;
		node *prev = temp;
		while(temp != nullptr) {
			if(temp->data == value)
				return;
			else if(temp->data > value) {
				prev = temp;
				temp = temp->left;
			}
			else {
				prev = temp;
				temp = temp->right;
			}
		}
		sizeBST++;
		node *fresh = newNode(value);
		if(prev->data > value)
			prev->left = fresh;
		else
			prev->right = fresh;
	}
	bool Search(int value) {
		if(root == nullptr) return false;
		node *temp = root;
		while(temp != nullptr) {
			if(temp->data == value)
				return true;
			else if(temp->data > value)
				temp = temp->left;
			else
				temp = temp->right;
		}
		return false;
	}
	void Delete(int value) {
		if(root == nullptr) {
			cout << "Error : Value not found" << endl;
			return;
		}
		node *temp = root;
		node *prev = temp;
		while(temp != nullptr && temp->data != value) {
			if(temp->data > value) {
				prev = temp;
				temp = temp->left;
			}
			else {
				prev = temp;
				temp = temp->right;
			}
		}
		if(temp == nullptr) {
			cout << "Error : Value not found" << endl;
			return;
		}
		sizeBST--;
		if(temp->right == nullptr) {
			if(prev == temp) {
				root = temp->left;
				delete temp;
				return;
			}
			if(prev->data > value) 
				prev->left = temp->left;
			else
				prev->right = temp->left;
			delete temp;
			return;
		}
		int successorValue;
		node *s_temp = temp->right;
		node *s_prev = temp;
		while(s_temp->left != nullptr) {
			s_prev = s_temp;
			s_temp = s_temp->left;
		}
		successorValue = s_temp->data;
		node *s_right = s_temp->right;
		delete s_temp;
		if(s_prev == temp)
			temp->right = s_right;
		else
			s_prev->left = s_right;
		temp->data = successorValue;
	}
	int LowerBound(int value) {
		if(root == nullptr) {
			cout << "Error : Not found" << endl;
			return -1;
		}
		node *temp = root;
		bool found = false;
		int res;
		while(temp != nullptr) {
			if(temp->data < value)
				temp = temp->right;
			else {
				found = true;
				res = temp->data;
				temp = temp->left;
			}
		}
		if(!found) {
			cout << "Error : Not found" << endl;
			return -1;
		}
		return res;
	}
	int UpperBound(int value) {
		if(root == nullptr) {
			cout << "Error : Not found" << endl;
			return -1;
		}
		node *temp = root;
		bool found = false;
		int res;
		while(temp != nullptr) {
			if(temp->data <= value)
				temp = temp->right;
			else {
				found = true;
				res = temp->data;
				temp = temp->left;
			}
		}
		if(!found) {
			cout << "Error : Not found" << endl;
			return -1;
		}
		return res;
	}
	int max() {
		if(root == nullptr) {
			cout << "Error : BST is Empty" << endl;
			return -1;
		}
		node *temp = root;
		while(temp->right != nullptr)
			temp = temp->right;
		return temp->data;
	}
	int min() {
		if(root == nullptr) {
			cout << "Error : BST is Empty" << endl;
			return -1;
		}
		node *temp = root;
		while(temp->left != nullptr)
			temp = temp->left;
		return temp->data;
	}
	void Inorder() { inorder(root); }
	void inorder(node *temp) {
		if(temp == nullptr) return;
		inorder(temp->left);
		cout << temp->data << " ";
		inorder(temp->right);
		if(temp == root) 
			cout << endl;
	}
	void Preorder() { preorder(root); }
	void preorder(node *temp) {
		if(temp == nullptr) return;
		cout << temp->data << " ";
		preorder(temp->left);
		preorder(temp->right);
		if(temp == root) 
			cout << endl;
	}
	void Postorder() { postorder(root); }
	void postorder(node *temp) {
		if(temp == nullptr) return;
		postorder(temp->left);
		postorder(temp->right);
		cout << temp->data << " ";
		if(temp == root) 
			cout << endl;
	}
	int BSTsize() { return sizeBST; }
};


int main()
{
	
	return 0;
}