#include <iostream>
#include <vector>
#include "linear-search.h"
using namespace std;

void sortingExample(void (*sortFunction)(vector<int>&));
void searchingExample(int (*searchFunction)(vector<int>&, int));

int main()
{
	searchingExample(linearSearch);
}

void sortingExample(void (*sortFunction)(vector<int>&)) {
	vector<int> myArr = { 5, 2, 4, 6, 1, 3 };

	cout << "Before sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;

	sortFunction(myArr);

	cout << "After sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;
}

void searchingExample(int (*searchFunction)(vector<int>&, int)) {
	vector<int> myArr = { 5, 2, 4, 6, 1, 3 };
	int target = 4;

	cout << "Array: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;

	int result = searchFunction(myArr, target);

	if (result != NULL) {
		cout << "Found " << target << " at index " << result << endl;
	} else {
		cout << "Did not find " << target << endl;
	}
}
