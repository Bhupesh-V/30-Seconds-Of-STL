/*
    Author : Rok Krhlikar
    Date   : 07/10/2019
    Time   : 19:30
    Description : Returns a reverse iterator pointing to the last element in the vector (i.e., its reverse beginning).
*/

#include <iostream>
#include <vector>

int main() {
	// create a vector of 5 integers
	std::vector<int> myVector{1, 2, 3, 4, 5};

	// display the vector contents using reverse iterators
	for (auto it = myVector.rbegin(); it != myVector.rend(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}