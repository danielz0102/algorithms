#include <vector>
import SearchingAlgorithm;

export module LinearSearch;

export class LinearSearch : public SearchingAlgorithm {
public:
	int search(std::vector<int>& arr, int target) override {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == target) {
				return i;
			}
		}

		return NULL;
	}
};