#include <vector>
import SortingAlgorithm;

export module SelectionSort;

export class SelectionSort : public SortingAlgorithm {
public:
	void sort(std::vector<int>& a) override {
		int n = a.size();

		for (int i = 0; i < n - 1; i++) {
			int min = i;

			for (int j = i + 1; j < n; j++) {
				if (a[j] < a[min]) {
					min = j;
				}
			}

			int temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
};