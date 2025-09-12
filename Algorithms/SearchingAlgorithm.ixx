#include <iostream>
#include <vector>
using namespace std;
import Algorithm;

export module SearchingAlgorithm;

export class SearchingAlgorithm : public Algorithm {
public:
	virtual ~SearchingAlgorithm() = default;

	virtual int search(vector<int>&, int) = 0;

	void example() {
		vector<int> myArr = { 5, 2, 4, 6, 1, 3 };
		int target = 4;

		cout << "Array: ";
		for (int num : myArr) {
			cout << num << " ";
		}
		cout << endl;

		int result = search(myArr, target);

		if (result != NULL) {
			cout << "Found " << target << " at index " << result << endl;
		}
		else {
			cout << "Did not find " << target << endl;
		}
	}
};