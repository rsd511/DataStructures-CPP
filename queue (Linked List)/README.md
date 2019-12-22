# Queue

## Declaration :-

Example :-

    Queue yourQueue;


## Function Descriptions :-

 ### **1. Push :-**
 
 **Syntax :**
 
    yourQueue.Push(value);
    
**Argument :**
Value to be pushed into the Queue 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(1)*

---

 ### **2. Pop :-**
 
 **Syntax :**
 
    int poppedValue = yourQueue.Pop();
    
**Argument :**
*none*
 
 **Returns :**
 Popped value
 *Datatype:- int*

If Queue under flows, it prints the message 

> Error: Underflow

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **3. Front :-**
 
 **Syntax :**
 
    int frontValue = yourQueue.Front();
    
**Argument :**
 *none*
 
 **Returns :**
 Front value of the Queue
 *Datatype:- int*

If Queue is empty, it prints the message 

> Error: Queue is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **4. Back :-**
 
 **Syntax :**
 
    int backValue = yourQueue.Back();
    
**Argument :**
 *none*
 
 **Returns :**
 Back value of the Queue
 *Datatype:- int*

If Queue is empty, it prints the message 

> Error: Queue is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **5. IsEmpty :-**
 
 **Syntax :**
 
    int result = yourQueue.IsEmpty();
    
**Argument :**
*none*
 
 **Returns :**
 1 if the Queue is empty
 0 if the Queue is not empty
 
**Time Complexity :**
*O(1)*

---

 ### **6. QueueSize :-**
 
 **Syntax :**
 
    int yourQueueSize = yourQueue.QueueSize();
    
**Argument :**
*none*
 
 **Returns :**
 Current size of the Queue
 *Datatype:- int*
 
**Time Complexity :**
*O(1)*

---

 ### **7. View :-**
 
 **Syntax :**
 
    yourQueue.View();
    
**Argument :**
*none*
 
 **Returns :**
 *void*
 
 Prints the complete Queue from Front to Back, space separated values.
 Prints an empty line if the Queue is empty.
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Queue

---

 ### **8. ToArray :-**
 
 **Syntax :**
 
    int * yourArray = yourQueue.ToArray();
    
**Argument :**
*none*
 
 **Returns :**
 Queue in Array format, the front element being at the first address.
 *Datatype:- Array*
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Queue

---