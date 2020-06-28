#include <iostream>
#include <vector>
using namespace std;


// Visit the following link for the documentation:-
// https://github.com/rsd511/DataStructures-CPP/tree/master/heap%20(Priority%20Queue)

// FUNCTIONS AVAILABLE:-
// 1. Build_Min_Heap(vector <int>)
// 2. Build_Max_Heap(vector <int>)
// 3. Heapify(int)
// 4. Lift_Node(int, int)
// 5. Push(int)
// 6. Pop()
// 7. Top()
// 8. Heapsort()
// 9. Print_Heap()
// 10. Print_Sorted()


class Heap
{

public:

	// S T R U C T U R E   &   V A R I A B L E S

	// Current size of the heap, Variable to distinguish Min-Heap & Max-Heap
	// 0 -> Min Heap
	// 1 -> Max Heap
	int n, comparator;
	// Heap
	vector <int> a;
	vector <int> a_sorted;


	// M E T H O D S

	// Functions to calculate indices of child & parent nodes
	int left_child(int i) { return 2 * i + 1; }
	int right_child(int i) { return 2 * i + 2; }
	int parent(int i) { return (i - 1) / 2; }

	// Heap Comparator
	bool compare(int a, int b) {
		// comparator == 1 -> Max Heap
		if(comparator) return a > b;
		// comparator == 0 -> Min Heap
		else return a < b;
	}

	// Builds a Max-Heap
	void Build_Max_Heap(vector <int> v) {
		// Initializing the structure
		n = static_cast<int>(v.size());
		a = v; comparator = 1;

		// Heapify each sub-heap
		for(int i = n-1; i >= 0; i--)
			Heapify(i);
	}

	// Builds a Min-Heap
	void Build_Min_Heap(vector <int> v) {
		// Initializing the structure
		n = static_cast<int>(v.size());
		a = v; comparator = 0;

		// Heapify each sub-heap
		for(int i = n-1; i >= 0; i--)
			Heapify(i);
	}

	// Fixes sub-heap rooted at i
	void Heapify(int i) {
		if(i < 0 || i >= n) {
			cout << "Error : Index out of range" << endl;
			return;
		}
		
		// Calculating child indices
		int l = left_child(i);
		int r = right_child(i);

		// Intended root of the sub-heap (initialized to i)
		int best = i;

		// Check if l can be the root
		if(l <= n-1 && compare(a[l], a[best]))
			best = l;

		// Check if r can be the root
		if(r <= n-1 && compare(a[r], a[best]))
			best = r;

		// If intended root is not optimum
		if(best != i) {
			// Swap root for optimum node
			int temp = a[i];
			a[i] = a[best];
			a[best] = temp;

			// Heapify the child sub-heap
			Heapify(best);
		}
	}

	// Updates the value at a node (Lifting)
	void Lift_Node(int id, int value) {
		// Out of range
		if(id < 0 || id >= n) {
			cout << "Error : Index out of range" << endl;
			return;
		}

		// Check for validity - Maintaining Heap Structure
		if(compare(a[id], value)) {
			cout << "Error : Lifted node should float higher in the heap" << endl;
			return;
		}

		// Assignment
		a[id] = value;

		// While the node can be lifted
		while(id > 0 && compare(a[id], a[parent(id)])) {
			// Swap
			int temp = a[id];
			a[id] = a[parent(id)];
			a[parent(id)] = temp;

			// Move up
			id = parent(id);
		}
	}

	// Pushes a value in the heap
	void Push(int value) {
		// Increment heap size
		n++;

		// Push dummy variable according to heap type
		if(comparator) a.push_back(INT32_MIN);
		else a.push_back(INT32_MAX);

		// Lift the dummy node to new value
		Lift_Node(n-1, value);
	}

	// Extracts the top node and returns its value
	int Pop() {
		// Underflow
		if(n == 0) {
			cout << "Error : Heap Size Underflow" << endl;
			return -1;
		}

		// Value to be returned
		int ret = a[0];

		// Saving last node
		a[0] = a[n-1];

		// Decrementing the heap, removing the last node
		n--;
		a.pop_back();

		// Fixing top node
		if(n != 0)
			Heapify(0);

		return ret;
	}

	// Returns top node value
	int Top() {
		// Underflow 
		if(n == 0) {
			cout << "Error : Heap Size Underflow" << endl;
			return -1;
		}

		return a[0];
	}

	// Sorting on Max Heap results in a non-decreasing array
	// Sorting on Min Heap results in a non-increasing array
	void Heapsort() {
		// Storing the true heap
		vector <int> a_true = a;
		// Storing true size of the heap
		int org_n = n;

		for(int i = org_n-1; i >= 1; i--) {
			// Swap to Sort
			int temp = a[i];
			a[i] = a[0];
			a[0] = temp;

			// Avoid the sorted element
			n--;

			// Find next best node
			Heapify(0);
		}

		// Restoring true size of the heap
		n = org_n;
		// Storing the sorted heap
		a_sorted = a;
		// Restoring the true heap
		a = a_true;
	}

	void Print_Heap() {
		for(int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}

	void Print_Sorted() {
		if(static_cast<int>(a_sorted.size()) == 0) {
			cout << "Warning : Make sure you have called Heapsort() before this call" << endl;
		}

		for(int i = 0; i < static_cast<int>(a_sorted.size()); i++) 
			cout << a_sorted[i] << " ";
		cout << endl;
	}

};


int main()
{
	
	return 0;
}