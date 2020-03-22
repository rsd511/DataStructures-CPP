
# Cdeque

## Declaration :-

Example :-

    Cdeque yourCdeque;


 **Note**: Here, the **back node** can trace the **front node** with the next pointer, being a circular queue, also the **front node** can trace the **back node** with the prev pointer Re-declare the Structure & Variables section to **public** to access them.

## Function Descriptions :-

 ### **1. Push_Front :-**
 
 **Syntax :**
 
    yourCdeque.Push_Front(value);
    
**Argument :**
Value to be pushed into the Front of Cdeque 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(1)*

---

 ### **2. Push_Back :-**
 
 **Syntax :**
 
    yourCdeque.Push_Back(value);
    
**Argument :**
Value to be pushed into the Back of Cdeque 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(1)*

---

 ### **3. Pop_Front :-**
 
 **Syntax :**
 
    int poppedValue = yourCdeque.Pop_Front();
    
**Argument :**
*none*
 
 **Returns :**
 Popped value from the Front
 *Datatype:- int*

If Cdeque under flows, it prints the message 

> Error: Underflow

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **4. Pop_Back :-**
 
 **Syntax :**
 
    int poppedValue = yourCdeque.Pop_Back();
    
**Argument :**
*none*
 
 **Returns :**
 Popped value from the Back
 *Datatype:- int*

If Cdeque under flows, it prints the message 

> Error: Underflow

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **5. Front :-**
 
 **Syntax :**
 
    int frontValue = yourCdeque.Front();
    
**Argument :**
 *none*
 
 **Returns :**
 Front value of the Cdeque
 *Datatype:- int*

If Cdeque is empty, it prints the message 

> Error: Cdeque is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **6. Back :-**
 
 **Syntax :**
 
    int backValue = yourCdeque.Back();
    
**Argument :**
 *none*
 
 **Returns :**
 Back value of the Cdeque
 *Datatype:- int*

If Cdeque is empty, it prints the message 

> Error: Cdeque is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **7. IsEmpty :-**
 
 **Syntax :**
 
    int result = yourCdeque.IsEmpty();
    
**Argument :**
*none*
 
 **Returns :**
 1 if the Cdeque is empty
 0 if the Cdeque is not empty
 
**Time Complexity :**
*O(1)*

---

 ### **8. CdequeSize :-**
 
 **Syntax :**
 
    int yourCdequeSize = yourCdeque.CdequeSize();
    
**Argument :**
*none*
 
 **Returns :**
 Current size of the Cdeque
 *Datatype:- int*
 
**Time Complexity :**
*O(1)*

---

 ### **9. View :-**
 
 **Syntax :**
 
    yourCdeque.View();
    
**Argument :**
*none*
 
 **Returns :**
 *void*
 
 Prints the complete Cdeque from Front to Back, space separated values.
 Prints an empty line if the Cdeque is empty.
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Cdeque

---

 ### **10. ToArray :-**
 
 **Syntax :**
 
    int * yourArray = yourCdeque.ToArray();
    
**Argument :**
*none*
 
 **Returns :**
 Cdeque in Array format, the front element being at the first address.
 *Datatype:- Array*
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Cdeque

---