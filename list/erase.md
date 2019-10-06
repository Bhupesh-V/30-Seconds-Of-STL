# erase

**Description :** The list::erase() is a built-in function in C++ STL which is used to delete elements from a list container. This function can be used to remove a single element or a range of elements from the specified list container.
 
**Example** :
```cpp
    // Creating a list 
    std::list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
    demoList.push_back(50); 
  
    // Printing elements of list before deleting 
    // first element 
    std::cout << "List before deleting first element: "; 
    for (auto value : demoList) {
        std::cout << ' ' << value;  
    }
  
    // Creating iterator to point to first 
    // element in the list 
    std::list<int>::iterator itr = demoList.begin(); 
  
    // deleting the first element 
    demoList.erase(itr); 
  
    // Printing elements of list after deleting 
    // first element 
    std::cout << "\nList after deleting first element:"; 
    for (auto value : demoList) {
        std::cout << ' ' << value;  
    }

```
**[Run Code](https://rextester.com/AGPH55074)**
