# upper_bound

**Description**: upper_bound is a built-in function in C++ STL which returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to next of last element (which can be identified using set end() function) in the set container.

**Example**:
```cpp
#include <iostream>
#include <set>

int main()
{
    // initialize container
    std::set<int>s;

    // insert elements in random order
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(4);

    // when 1 is present
    auto it = s.upper_bound(1);
    std::cout << "The lower bound of key 1 is ";
    std::cout << (*it) << std::endl;

    // when 3 is not present
    // points to next greater after 3
    it = s.upper_bound(3);
    std::cout << "The lower bound of key 3 is ";
    std::cout << (*it) << std::endl;

    // when 6 exceeds
    it = s.upper_bound(6);
    std::cout << "The lower bound of key 6 is ";
    std::cout << (*it) << std::endl;
    return 0;
}
```
**[Run Code](https://rextester.com/MLAD68271)**
