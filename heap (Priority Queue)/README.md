# Heap

## Declaration :-

Example :-

    Heap yourHeap;


## Function Descriptions :-

 ### **1. Build_Min_Heap :-**

 Builds a Minimum Heap.
 
 **Syntax :**
 
    yourHeap.Build_Min_Heap(yourVector);
    
**Argument :**
Vector of elements to build the min-heap on
 *Datatype:- vector \<int\>*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(n)*

---

 ### **2. Build_Max_Heap :-**
 
Builds a Maximum Heap.

 **Syntax :**
 
    yourHeap.Build_Max_Heap(yourVector);
    
**Argument :**
Vector of elements to build the max-heap on
 *Datatype:- vector \<int\>*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(n)*

---

 ### **3. Heapify :-**
 
Fixes the sub-heap present at the passed node, assuming its child sub-heaps are valid.

 **Syntax :**
 
    yourHeap.Heapify(nodeIndex);
    
**Argument :**
Index of the node to fix the sub-heap at
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(log(n))*

**Errors :**
Shows the following message if the index is out of range

> Error : Index out of range

---

 ### **4. Lift_Node :-**
 
Increases (for Max Heap) / decreases (for Min Heap) the value at a particular node to a passed value in order to lift it above in the heap.

 **Syntax :**
 
    yourHeap.Lift_Node(nodeIndex, value);
    
**Arguments :**
1\. Index of the target node
 *Datatype:- int*
2\. New Value
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(log(n))*

**Errors :**
Shows the following message if the index is out of range

> Error : Index out of range

Shows the following message if the passed value is invalid

> Error : Lifted node should float higher in the heap

---

 ### **5. Push :-**
 
Inserts the passed value into the heap.

 **Syntax :**
 
    yourHeap.Push(value);
    
**Argument :**
Value to be pushed
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(log(n))*

---

 ### **6. Pop :-**
 
Removes the top value from the heap and returns it.

 **Syntax :**
 
    yourHeap.Pop();
    
**Argument :**
*none*
 
 **Returns :**
 The top value in the heap which was removed
 *Datatype :- int*
 
**Time Complexity :**
*O(log(n))*

**Error :**
Displays the following message for an underflow

> Error : Heap Size Underflow

---

 ### **7. Top :-**
 
Returns the top element of the heap.

 **Syntax :**
 
    yourHeap.Top();
    
**Argument :**
*none*
 
 **Returns :**
 The top value in the heap
 *Datatype :- int*
 
**Time Complexity :**
*O(1)*

**Error :**
Displays the following message for an underflow

> Error : Heap Size Underflow

---

 ### **8. Heapsort :-**
 
Sorts the heap ( in non-decreasing order for Max Heap & non-increasing order for Min Heap ) and stores it in a different vector **a_sorted** within the class, thus maintaining the original heap.

 **Syntax :**
 
    yourHeap.Heapsort();
    
**Argument :**
*none*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(n \* log(n))*

---

 ### **9. Print_Heap :-**
 
Prints the heap vector in a single line

 **Syntax :**
 
    yourHeap.Print_Heap();
    
**Argument :**
*none*
 
 **Returns :**
*void*
 
**Time Complexity :**
*O(n)*

---

 ### **10. Print_Sorted :-**
 
Prints the sorted vector of the heap.
***Note:** Make sure to call Heapsort() before this function*

 **Syntax :**
 
    yourHeap.Print_Sorted();
    
**Argument :**
*none*
 
 **Returns :**
*void*
 
**Time Complexity :**
*O(n)*

**Warning :**
Displays the following message when the vector **a_sorted** is empty

> Warning : Make sure you have called Heapsort() before this call

---
