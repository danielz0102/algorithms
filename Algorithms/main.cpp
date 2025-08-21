#include <iostream>
#include <vector>
#include "insertion-sort.h"
using namespace std;

void main()
{
	cout << "INSERTION SORT" << endl << endl;
	vector<int> myArr = { 5, 2, 4, 6, 1, 3 };

	cout << "Before sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;

	insertionSort(myArr);

	cout << "After sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;
}
