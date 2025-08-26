#include <iostream>
#include <vector>
#include "selection-sort.h"
using namespace std;

template <typename Algorithm>
void example(string title, Algorithm algorithm) {
	cout << title << endl << endl;
	vector<int> myArr = { 5, 2, 4, 6, 1, 3 };

	cout << "Before sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;

	algorithm(myArr);

	cout << "After sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;
}

void main()
{
	example("SELECTION SORT", selectionSort);
}
