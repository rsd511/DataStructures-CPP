# Deque

## Declaration :-

Example :-

    Deque yourDeque;


## Function Descriptions :-

 ### **1. Push_Front :-**
 
 **Syntax :**
 
    yourDeque.Push_Front(value);
    
**Argument :**
Value to be pushed into the Front of Deque 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(1)*

---

 ### **2. Push_Back :-**
 
 **Syntax :**
 
    yourDeque.Push_Back(value);
    
**Argument :**
Value to be pushed into the Back of Deque 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(1)*

---

 ### **3. Pop_Front :-**
 
 **Syntax :**
 
    int poppedValue = yourDeque.Pop_Front();
    
**Argument :**
*none*
 
 **Returns :**
 Popped value from the Front
 *Datatype:- int*

If Deque under flows, it prints the message 

> Error: Underflow

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **4. Pop_Back :-**
 
 **Syntax :**
 
    int poppedValue = yourDeque.Pop_Back();
    
**Argument :**
*none*
 
 **Returns :**
 Popped value from the Back
 *Datatype:- int*

If Deque under flows, it prints the message 

> Error: Underflow

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **5. Front :-**
 
 **Syntax :**
 
    int frontValue = yourDeque.Front();
    
**Argument :**
 *none*
 
 **Returns :**
 Front value of the Deque
 *Datatype:- int*

If Deque is empty, it prints the message 

> Error: Deque is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **6. Back :-**
 
 **Syntax :**
 
    int backValue = yourDeque.Back();
    
**Argument :**
 *none*
 
 **Returns :**
 Back value of the Deque
 *Datatype:- int*

If Deque is empty, it prints the message 

> Error: Deque is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **7. IsEmpty :-**
 
 **Syntax :**
 
    int result = yourDeque.IsEmpty();
    
**Argument :**
*none*
 
 **Returns :**
 1 if the Deque is empty
 0 if the Deque is not empty
 
**Time Complexity :**
*O(1)*

---

 ### **8. DequeSize :-**
 
 **Syntax :**
 
    int yourDequeSize = yourDeque.DequeSize();
    
**Argument :**
*none*
 
 **Returns :**
 Current size of the Deque
 *Datatype:- int*
 
**Time Complexity :**
*O(1)*

---

 ### **9. View :-**
 
 **Syntax :**
 
    yourDeque.View();
    
**Argument :**
*none*
 
 **Returns :**
 *void*
 
 Prints the complete Deque from Front to Back, space separated values.
 Prints an empty line if the Deque is empty.
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Deque

---

 ### **10. ToArray :-**
 
 **Syntax :**
 
    int * yourArray = yourDeque.ToArray();
    
**Argument :**
*none*
 
 **Returns :**
 Deque in Array format, the front element being at the first address.
 *Datatype:- Array*
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Deque

---