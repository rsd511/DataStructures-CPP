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
				temp = temp->right;
		}

		// not found
		return false;

	}


	// Delete an element from the BST
	void Delete(int value) {

		// If the BST is empty
		if(root == nullptr) {
			cout << "Error : Value not found" << endl;
			return;
		}

		// Node for traversal
		node *temp = root;
		// Node as the parent of the target node
		node *prev = temp;

		// While target node is not found
		while(temp != nullptr && temp->data != value) {
			// Traverse left
			if(temp->data > value) {
				prev = temp;
				temp = temp->left;
			}
			// Traverse right
			else {
				prev = temp;
				temp = temp->right;
			}
		}

		// If not found
		if(temp == nullptr) {
			cout << "Error : Value not found" << endl;
			return;
		}

		// Else the node is found
		sizeBST--;

		// If right successor doesn't exist
		if(temp->right == nullptr) {
			// Skip the target node

			// No parent
			if(prev == temp) {
				// Re-root
				root = temp->left;
				// Delete target node
				delete temp;
				return;
			}

			// Connect parent to next node
			if(prev->data > value) 
				prev->left = temp->left;
			else
				prev->right = temp->left;
			// Delete target node
			delete temp;
			return;
		}

		// Else if it exists

		// To store the value of the node to be replaced
		int successorValue;

		// Traverser for successor node
		node *s_temp = temp->right;
		// Parent of successor node
		node *s_prev = temp;

		// While the successor is not reached
		while(s_temp->left != nullptr) {
			s_prev = s_temp;
			s_temp = s_temp->left;
		}

		// Storing the new value
		successorValue = s_temp->data;

		// Storing the next node
		node *s_right = s_temp->right;

		// Deleting the successor
		delete s_temp;

		// Fixing the link
		if(s_prev == temp)
			temp->right = s_right;
		else
			s_prev->left = s_right;

		// Assigning the target node with the successor's value
		temp->data = successorValue;

	}


	// Lower bound of a value in the BST
	int LowerBound(int value) {

		// BST empty
		if(root == nullptr) {
			cout << "Error : Not found" << endl;
			return -1;
		}

		// Node for traversal
		node *temp = root;

		// Keeps track if lower_bound exists
		bool found = false;

		// Result
		int res;

		while(temp != nullptr) {
			// Traverse right
			if(temp->data < value)
				temp = temp->right;

			// Pick lower
			else {
				found = true;
				res = temp->data;
				temp = temp->left;
			}
		}

		// Not found
		if(!found) {
			cout << "Error : Not found" << endl;
			return -1;
		}

		// Found
		return res;
	}


	// Upper bound of a value in the BST
	int UpperBound(int value) {

		// BST empty
		if(root == nullptr) {
			cout << "Error : Not found" << endl;
			return -1;
		}

		// Node for traversal
		node *temp = root;

		// Keeps track if upper_bound exists
		bool found = false;

		// Result
		int res;

		while(temp != nullptr) {
			// Traverse right
			if(temp->data <= value)
				temp = temp->right;

			// Pick lower
			else {
				found = true;
				res = temp->data;
				temp = temp->left;
			}
		}

		// Not found
		if(!found) {
			cout << "Error : Not found" << endl;
			return -1;
		}

		// Found
		return res;
	}


	// Max Value
	int Max() {

		// BST Empty
		if(root == nullptr) {
			cout << "Error : BST is Empty" << endl;
			return -1;
		}

		// Node for traversal
		node *temp = root;

		// Find the rightmost node
		while(temp->right != nullptr)
			temp = temp->right;

		// Return max value
		return temp->data;
	}


	// Min Value
	int Min() {

		// BST Empty
		if(root == nullptr) {
			cout << "Error : BST is Empty" << endl;
			return -1;
		}

		// Node for traversal
		node *temp = root;

		// Find the leftmost node
		while(temp->left != nullptr)
			temp = temp->left;

		// Return min value
		return temp->data;
	}


	// Prints the inorder traversal of the BST
	void Inorder() { inorder(root); }
	void inorder(node *temp) {
		// Leaf end
		if(temp == nullptr) return;

		// Inorder
		inorder(temp->left);
		cout << temp->data << " ";
		inorder(temp->right);

		// End of recursion
		if(temp == root) 
			cout << endl;
	}


	// Prints the preorder traversal of the BST
	void Preorder() { preorder(root); }
	void preorder(node *temp) {
		// Leaf end
		if(temp == nullptr) return;

		// Preorder
		cout << temp->data << " ";
		preorder(temp->left);
		preorder(temp->right);

		// End of recursion
		if(temp == root) 
			cout << endl;
	}


	// Prints the postorder traversal of the BST
	void Postorder() { postorder(root); }
	void postorder(node *temp) {
		// Leaf end
		if(temp == nullptr) return;

		// Postorder
		postorder(temp->left);
		postorder(temp->right);
		cout << temp->data << " ";

		// End of recursion
		if(temp == root) 
			cout << endl;
	}


	// Returns the size of the BST
	int BSTsize() { return sizeBST; }

};


int main()
{
	
	return 0;
}