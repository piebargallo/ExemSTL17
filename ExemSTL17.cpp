// CPP program to illustrate
// Implementation of clear() function
#include <deque>
#include <iostream>
using namespace std;

// Driver code
int main() {
	
	// Def deque
	deque<int> mydeque{ 1, 2, 3, 4, 5 };
	
	// Deque becomes empty
	mydeque.clear();

	// Printing the deque
	for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
		cout << ' ' << *it;
	
	return 0;

}
