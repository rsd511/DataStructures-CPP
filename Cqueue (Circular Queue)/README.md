
# Cqueue

## Declaration :-

Example :-

    Cqueue yourCqueue;


 **Note**: Here, the **back node** can trace the **front node** with the next pointer, being a circular queue. Re-declare the Structure & Variables section to **public** to access them.

## Function Descriptions :-

 ### **1. Push :-**
 
 **Syntax :**
 
    yourCqueue.Push(value);
    
**Argument :**
Value to be pushed into the Cqueue 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(1)*

---

 ### **2. Pop :-**
 
 **Syntax :**
 
    int poppedValue = yourCqueue.Pop();
    
**Argument :**
*none*
 
 **Returns :**
 Popped value
 *Datatype:- int*

If Cqueue under flows, it prints the message 

> Error: Underflow

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **3. Front :-**
 
 **Syntax :**
 
    int frontValue = yourCqueue.Front();
    
**Argument :**
 *none*
 
 **Returns :**
 Front value of the Cqueue
 *Datatype:- int*

If Cqueue is empty, it prints the message 

> Error: Cqueue is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **4. Back :-**
 
 **Syntax :**
 
    int backValue = yourCqueue.Back();
    
**Argument :**
 *none*
 
 **Returns :**
 Back value of the Cqueue
 *Datatype:- int*

If Cqueue is empty, it prints the message 

> Error: Cqueue is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **5. IsEmpty :-**
 
 **Syntax :**
 
    int result = yourCqueue.IsEmpty();
    
**Argument :**
*none*
 
 **Returns :**
 1 if the Cqueue is empty
 0 if the Cqueue is not empty
 
**Time Complexity :**
*O(1)*

---

 ### **6. CqueueSize :-**
 
 **Syntax :**
 
    int yourCqueueSize = yourCqueue.CqueueSize();
    
**Argument :**
*none*
 
 **Returns :**
 Current size of the Cqueue
 *Datatype:- int*
 
**Time Complexity :**
*O(1)*

---

 ### **7. View :-**
 
 **Syntax :**
 
    yourCqueue.View();
    
**Argument :**
*none*
 
 **Returns :**
 *void*
 
 Prints the complete Cqueue from Front to Back, space separated values.
 Prints an empty line if the Cqueue is empty.
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Cqueue

---

 ### **8. ToArray :-**
 
 **Syntax :**
 
    int * yourArray = yourCqueue.ToArray();
    
**Argument :**
*none*
 
 **Returns :**
 Cqueue in Array format, the front element being at the first address.
 *Datatype:- Array*
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Cqueue

---