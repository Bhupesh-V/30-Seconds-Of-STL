/*
    Author : Guilherme de Morais Richter
    Date : Date format 24/10/2019
    Time : Time format 23:00
    Description : Rotates the order of the elements in the range.
    The element pointed by middle becomes the new first element.
*/

#include <iostream>     
#include <algorithm>    // library that contains the rotate function
#include <vector>       

int main () {
  std::vector<int> myvector; // initialize my vector

  // set some values:
  for (int i=0; i<10; ++i) myvector.push_back(i); // creates the vector: 0 1 2 3 4 5 6 7 8 9
  
  std::cout << "myvector is:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
    std::cout << ' ' << *it; // algorithm that prints the vector initialized
  }
  std::cout << '\n';

  std::rotate(myvector.begin(),myvector.begin()+5,myvector.end()); 
  // the rotate function turns the vector in 5 6 7 8 9 0 1 2 3 4, because the 5th element is the reference. 

  std::cout << "myvector rotated:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
    std::cout << ' ' << *it; // algorithm that prints the vector rotated
  }
  std::cout << '\n';

  return 0;
}