#include <vector>
export module linearSearch;

export int linearSearch(std::vector<int>& arr, int value) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == value) {
			return i;
		}
	}

	return NULL;
}