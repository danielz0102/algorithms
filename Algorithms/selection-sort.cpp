#include <vector>
#include "selection-sort.h"

void selectionSort(std::vector<int>& a) {
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