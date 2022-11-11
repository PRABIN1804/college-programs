// C++ program to find minimum sum of roots of a
// given polynomial
#include <bits/stdc++.h>
using namespace std;

void getMinimumSum(int arr[], int n)
{
	// resultant vector
	vector<int> res;

	// a vector that store indices of the positive
	// elements
	vector<int> pos;

	// a vector that store indices of the negative
	// elements
	vector<int> neg;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0)
			pos.push_back(i);	
		else if (arr[i] < 0)
			neg.push_back(i);	
	}

	// Case - 1:
	if (pos.size() >= 2 && neg.size() >= 2) {
		int posMax = INT_MIN, posMaxIdx = -1;
		int posMin = INT_MAX, posMinIdx = -1;

		int negMax = INT_MIN, negMaxIdx = -1;
		int negMin = INT_MAX, negMinIdx = -1;

		for (int i = 0; i < pos.size(); i++) {
			if (arr[pos[i]] > posMax) {
				posMaxIdx = pos[i];
				posMax = arr[posMaxIdx];
			}
		}

		for (int i = 0; i < pos.size(); i++) {
			if (arr[pos[i]] < posMin &&
				pos[i] != posMaxIdx) {
				posMinIdx = pos[i];
				posMin = arr[posMinIdx];
			}
		}

		for (int i = 0; i < neg.size(); i++) {
			if (abs(arr[neg[i]]) > negMax) {
				negMaxIdx = neg[i];
				negMax = abs(arr[negMaxIdx]);
			}
		}

		for (int i = 0; i < neg.size(); i++) {
			if (abs(arr[neg[i]]) < negMin &&
				neg[i] != negMaxIdx) {
				negMinIdx = neg[i];
				negMin = abs(arr[negMinIdx]);
			}
		}

		double posVal = -1.0 * (double)posMax / (double)posMin;
		double negVal = -1.0 * (double)negMax / (double)negMin;

		if (posVal < negVal) {
			res.push_back(arr[posMinIdx]);
			res.push_back(arr[posMaxIdx]);

			for (int i = 0; i < n; i++) {
				if (i != posMinIdx && i != posMaxIdx) {
					res.push_back(arr[i]);
				}
			}
		}
		else {
			res.push_back(arr[negMinIdx]);
			res.push_back(arr[negMaxIdx]);

			for (int i = 0; i < n; i++) {
				if (i != negMinIdx && i != negMaxIdx) {
					res.push_back(arr[i]);
				}
			}
		}
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << " ";
		}
		cout << "\n";
	}

	// Case - 2:
	else if (pos.size() >= 2) {
		int posMax = INT_MIN, posMaxIdx = -1;
		int posMin = INT_MAX, posMinIdx = -1;

		for (int i = 0; i < pos.size(); i++) {
			if (arr[pos[i]] > posMax) {
				posMaxIdx = pos[i];
				posMax = arr[posMaxIdx];
			}
		}

		for (int i = 0; i < pos.size(); i++) {
			if (arr[pos[i]] < posMin &&
				pos[i] != posMaxIdx) {
				posMinIdx = pos[i];
				posMin = arr[posMinIdx];
			}
		}

		res.push_back(arr[posMinIdx]);
		res.push_back(arr[posMaxIdx]);

		for (int i = 0; i < n; i++) {
			if (i != posMinIdx && i != posMaxIdx) {
				res.push_back(arr[i]);
			}
		}
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << " ";
		}
		cout << "\n";
	}

	// Case - 3:
	else if (neg.size() >= 2) {
		int negMax = INT_MIN, negMaxIdx = -1;
		int negMin = INT_MAX, negMinIdx = -1;

		for (int i = 0; i < neg.size(); i++) {
			if (abs(arr[neg[i]]) > negMax) {
				negMaxIdx = neg[i];
				negMax = abs(arr[negMaxIdx]);
			}
		}

		for (int i = 0; i < neg.size(); i++) {
			if (abs(arr[neg[i]]) < negMin &&
				neg[i] != negMaxIdx) {
				negMinIdx = neg[i];
				negMin = abs(arr[negMinIdx]);
			}
		}

		res.push_back(arr[negMinIdx]);
		res.push_back(arr[negMaxIdx]);

		for (int i = 0; i < n; i++)
			if (i != negMinIdx && i != negMaxIdx)
				res.push_back(arr[i]);

		for (int i = 0; i < res.size(); i++)
			cout << res[i] << " ";
		
		cout << "\n";
	}

	// Case - 4:
	else {
		cout << "No swap required\n";
	}
}

int main()
{
	int arr[] = { -4, 1, 6, -3, -2, -1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	getMinimumSum(arr, n);
	return 0;
}