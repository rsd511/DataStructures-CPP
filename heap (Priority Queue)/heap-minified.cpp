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
	int n, comparator;
	vector <int> a;
	vector <int> a_sorted;
	int left_child(int i) { return 2 * i + 1; }
	int right_child(int i) { return 2 * i + 2; }
	int parent(int i) { return (i - 1) / 2; }
	bool compare(int a, int b) {
		if(comparator) return a > b;
		else return a < b;
	}
	void Build_Max_Heap(vector <int> v) {
		n = static_cast<int>(v.size());
		a = v; comparator = 1;
		for(int i = n-1; i >= 0; i--)
			Heapify(i);
	}
	void Build_Min_Heap(vector <int> v) {
		n = static_cast<int>(v.size());
		a = v; comparator = 0;
		for(int i = n-1; i >= 0; i--)
			Heapify(i);
	}
	void Heapify(int i) {
		if(i < 0 || i >= n) {
			cout << "Error : Index out of range" << endl;
			return;
		}
		int l = left_child(i);
		int r = right_child(i);
		int best = i;
		if(l <= n-1 && compare(a[l], a[best]))
			best = l;
		if(r <= n-1 && compare(a[r], a[best]))
			best = r;
		if(best != i) {
			int temp = a[i];
			a[i] = a[best];
			a[best] = temp;
			Heapify(best);
		}
	}
	void Lift_Node(int id, int value) {
		if(id < 0 || id >= n) {
			cout << "Error : Index out of range" << endl;
			return;
		}
		if(compare(a[id], value)) {
			cout << "Error : Lifted node should float higher in the heap" << endl;
			return;
		}
		a[id] = value;
		while(id > 0 && compare(a[id], a[parent(id)])) {
			int temp = a[id];
			a[id] = a[parent(id)];
			a[parent(id)] = temp;
			id = parent(id);
		}
	}
	void Push(int value) {
		n++;
		if(comparator) a.push_back(INT32_MIN);
		else a.push_back(INT32_MAX);
		Lift_Node(n-1, value);
	}
	int Pop() {
		if(n == 0) {
			cout << "Error : Heap Size Underflow" << endl;
			return -1;
		}
		int ret = a[0];
		a[0] = a[n-1];
		n--;
		a.pop_back();
		if(n != 0)
			Heapify(0);
		return ret;
	}
	int Top() {
		if(n == 0) {
			cout << "Error : Heap Size Underflow" << endl;
			return -1;
		}
		return a[0];
	}
	void Heapsort() {
		vector <int> a_true = a;
		int org_n = n;
		for(int i = org_n-1; i >= 1; i--) {
			int temp = a[i];
			a[i] = a[0];
			a[0] = temp;
			n--;
			Heapify(0);
		}
		n = org_n;
		a_sorted = a;
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