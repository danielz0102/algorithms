#include <iostream>
#include <vector>
#include "selection-sort.h"
#include "insertion-sort.h"
using namespace std;

struct Algorithm {
	const char* name;
	void (*function)(vector<int>&);
};

Algorithm algorithms[] = {
	{ "INSERTION SORT", insertionSort },
	{ "SELECTION SORT", selectionSort }
};

void example(Algorithm algorithm) {
	cout << algorithm.name << endl << endl;
	vector<int> myArr = { 5, 2, 4, 6, 1, 3 };

	cout << "Before sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;

	algorithm.function(myArr);

	cout << "After sorting: ";
	for (int num : myArr) {
		cout << num << " ";
	}
	cout << endl;
}

int main()
{
    char* algorithmEnv = nullptr;
    size_t envLen = 0;
    errno_t err = _dupenv_s(&algorithmEnv, &envLen, "ALGORITHM");

    if (err != 0 || algorithmEnv == nullptr) {
        cerr << "Error: Environment variable 'ALGORITHM' not set." << endl;
        return 1;
    }

    if (algorithmEnv != nullptr && envLen > 0) {
        _strupr_s(algorithmEnv, envLen);
    }

	Algorithm* selectedAlgorithm = nullptr;

	for (Algorithm& algorithm : algorithms) {
		if (strcmp(algorithm.name, algorithmEnv) == 0) {
			selectedAlgorithm = &algorithm;
			break;
		}
	}

	if (selectedAlgorithm == nullptr) {
		cerr << "Error: Unknown algorithm '" << algorithmEnv << "'" << endl;
		cerr << "Available algorithms:" << endl;
		for (Algorithm& algorithm : algorithms) {
			cerr << " - " << algorithm.name << endl;
		}
		return 1;
	}

	example(*selectedAlgorithm);
}
