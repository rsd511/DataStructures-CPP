
# BST

## Declaration :-

Example :-

    BST yourBST;


## Function Descriptions :-

 ### **1. Insert :-**

Inserts the passed value in the BST 

 **Syntax :**
 
    yourBST.Insert(value);
    
**Argument :**
Value to be inserted in the BST
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*θ(log(n))*

---

 ### **2. Search :-**

Search if the passed value exists in the BST

 **Syntax :**
 
    yourBST.Search(value);
    
**Argument :**
Value to be searched in the BST 
 *Datatype:- int*
 
 **Returns :**
 *bool*
 **True** - If it exists
 else **False**
 
**Time Complexity :**
*θ(log(n))*

---

 ### **3. Delete :-**

Delete the passed value from the BST 

 **Syntax :**
 
    yourBST.Delete(value);
    
**Argument :**
Value to be deleted from the BST 
 *Datatype:- int*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*θ(log(n))*

**Errors :**
Prints the following if the value is not found

> Error : Value not found

---

 ### **4. LowerBound :-**

Finds the smallest value **greater than or equal to** the passed value

 **Syntax :**
 
    yourBST.LowerBound(value);
    
**Argument :** 
 *Datatype:- int*
 
 **Returns :**
 *int*
  **-1** : In case of Error
 
**Time Complexity :**
*θ(log(n))*

**Errors :**
Prints the following if no such value exists

> Error : Not found

---

 ### **5. UpperBound :-**

Finds the smallest value **strictly greater than** the passed value

 **Syntax :**
 
    yourBST.UpperBound(value);
    
**Argument :**
 *Datatype:- int*
 
 **Returns :**
 *int*
  **-1** : In case of Error
 
**Time Complexity :**
*θ(log(n))*

**Errors :**
Prints the following if no such value exists

> Error : Not found

---

 ### **6. Max :-**

Finds the greatest value in the BST

 **Syntax :**
 
    yourBST.Max();
    
**Argument :**
*void*
 
 **Returns :**
 *int*
 **-1** : In case of Error
 
**Time Complexity :**
*θ(log(n))*

**Errors :**
Prints the following if the BST is empty

> Error : BST is Empty

---

 ### **7. Min :-**

Finds the smallest value in the BST

 **Syntax :**
 
    yourBST.Min();
    
**Argument :**
*void*
 
 **Returns :**
 *int*
 **-1** : In case of Error
 
**Time Complexity :**
*θ(log(n))*

**Errors :**
Prints the following if the BST is empty

> Error : BST is Empty

---

 ### **8. Inorder :-**

Prints the Inorder traversal of the BST

 **Syntax :**
 
    yourBST.Inorder();
    
**Argument :**
*void*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(n)*

---

 ### **9. Preorder :-**

Prints the Preorder traversal of the BST

 **Syntax :**
 
    yourBST.Preorder();
    
**Argument :**
*void*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(n)*

---

 ### **10. Postorder :-**

Prints the Postorder traversal of the BST

 **Syntax :**
 
    yourBST.Postorder();
    
**Argument :**
*void*
 
 **Returns :**
 *void*
 
**Time Complexity :**
*O(n)*

---

 ### **11. BSTsize :-**

Returns the size of the BST

 **Syntax :**
 
    yourBST.BSTsize();
    
**Argument :**
*void*
 
 **Returns :**
 *int*
 
**Time Complexity :**
*O(1)*

---