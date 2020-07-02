#include <iostream>
using namespace std;


// Visit the following link for the documentation:-
// https://github.com/rsd511/DataStructures-CPP/tree/master/bst%20(Binary%20Search%20Tree)

// FUNCTIONS AVAILABLE:-
// 1. Insert(int)
// 2. Search(int)
3. Delete(int)
4. LowerBound(int)
5. UpperBound(int)
6. Max()
7. Min()
8. Inorder()
9. Preorder()
10. Postorder()
11. BSTsize()


class BST
{	

public:

	// S T R U C T U R E  &  V A R I A B L E S

	// Structure of tree nodes
	struct node {
		// Value of the node
		int data;
		// Children
		node *left, *right;
	};

	// Size of the tree
	int sizeBST;
	// Root of the tree
	node *root;



	// M E T H O D S

	// Constructor
	BST() {
		// Initialization
		sizeBST = 0;
		root = nullptr;
	}


	// Creates a new node
	struct node * newNode(int value) {
		// Memory Allocation
		node *fresh = new node;

		// Initial data set to the value passed
		fresh->data = value;

		// Left node w.r.t. this node set initially to null
		fresh->left = nullptr;

		// Right node w.r.t. this node set initially to null
		fresh->right = nullptr;

		return fresh;
	}


	// Inserts a new node in the tree
	void Insert(int value) {

		// If tree is empty
		if(root == nullptr) {
			// Update size
			sizeBST = 1;
			// Create the root
			root = newNode(value);

			return;
		}

		// We will traverse the tree using the temp node
		node *temp = root;
		// Previous node (Parent) in the traversal
		node *prev = temp;

		// While we haven't reached the target position
		while(temp != nullptr) {
			// If value is already present in the tree
			if(temp->data == value)
				return;

			// Traverse the left subtree
			else if(temp->data > value) {
				prev = temp;
				temp = temp->left;
			}

			// Traverse the right subtree
			else {
				prev = temp;
				temp = temp->right;
			}
		}

		// Target postion found
		sizeBST++;

		// Create the new node
		node *fresh = newNode(value);

		// Insert
		if(prev->data > value)
			prev->left = fresh;
		else
			prev->right = fresh;

	}


	// Searches for an element in the BST
	bool Search(int value) {

		// If tree is empty
		if(root == nullptr) return false;

		// We will traverse the tree using the temp node
		node *temp = root;

		// While the end leaf node is not reached
		while(temp != nullptr) {
			// found
			if(temp->data == value)
				return true;

			// left subtree
			else if(temp->data > value)
				temp = temp->left;

			// right subtree
			else
				temp = temp->right
		}

		// not found
		return false;

	}

	void Delete(int value) {

	}

};


int main()
{
	
	return 0;
}