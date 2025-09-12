#include <iostream>
#include <vector>
import Algorithm;
using namespace std;

export module SortingAlgorithm;

export class SortingAlgorithm : public Algorithm {
public:
	virtual ~SortingAlgorithm() = default;

	virtual void sort(vector<int>&) = 0;

	void example() override {
		vector<int> arr{ 5, 2, 4, 6, 1, 3 };
		
		cout << "Before sorting: ";
		for (int num : arr) {
			cout << num << " ";
		}
		cout << endl;

		sort(arr);

		cout << "After sorting: ";
		for (int num : arr) {
			cout << num << " ";
		}
		cout << endl;
	}
};