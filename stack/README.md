# Stack

## Declaration :-

Example :-

    Stack yourStack;


## Function Descriptions :-

 ### **1. Push :-**
 
 **Syntax :**
 
    yourStack.Push(value);
    
**Argument :**
Value to be pushed into the stack 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(1)*

---

 ### **2. Pop :-**
 
 **Syntax :**
 
    int poppedValue = yourStack.Pop();
    
**Argument :**
*none*
 
 **Returns :**
 Popped value
 *Datatype:- int*

If Stack under flows, it prints the message 

> Error: Underflow

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **3. Top :-**
 
 **Syntax :**
 
    int topValue = yourStack.Top();
    
**Argument :**
 *none*
 
 **Returns :**
 Top value of the stack
 *Datatype:- int*

If Stack is empty, it prints the message 

> Error: Stack is Empty

and returns -1
 
**Time Complexity :**
*O(1)*

---

 ### **4. IsEmpty :-**
 
 **Syntax :**
 
    int result = yourStack.IsEmpty();
    
**Argument :**
*none*
 
 **Returns :**
 1 if the Stack is empty
 0 if the Stack is not empty
 
**Time Complexity :**
*O(1)*

---

 ### **5. StackSize :-**
 
 **Syntax :**
 
    int yourStackSize = yourStack.StackSize();
    
**Argument :**
*none*
 
 **Returns :**
 Current size of the Stack
 *Datatype:- int*
 
**Time Complexity :**
*O(1)*

---

 ### **6. View :-**
 
 **Syntax :**
 
    yourStack.View();
    
**Argument :**
*none*
 
 **Returns :**
 *void*
 
 Prints the complete Stack from Top to Bottom, 1 value on each line.
 Doesn't Print anything if the Stack is empty.
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Stack

---

 ### **7. ToArray :-**
 
 **Syntax :**
 
    int * yourArray = yourStack.ToArray();
    
**Argument :**
*none*
 
 **Returns :**
 Stack in Array format, the top element being at the first address.
 *Datatype:- Array*
 
**Time Complexity :**
*O(n)*
Where n -> Size of the Stack

---