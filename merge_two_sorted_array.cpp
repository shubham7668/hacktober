#include <iostream>
using namespace std;
void mer(int arr[], int n, int brr[], int m) {
	int k = n + m;
	int crr[k];
	int i = 0, j = 0, p = 0;
	while (p < k) {
		if (arr[i] <= brr[j] &&  i < n) {
			crr[p] = arr[i];
			i++;
			p++;
		} else if (brr[j] < arr[i] &&  j < m) {
			crr[p] = brr[j];
			j++;
			p++;
		} else if (i < n) {
			crr[p] = arr[i];
			i++;
			p++;
		} else if (j < m) {
			crr[p] = brr[j];
			p++; j++;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << crr[i] << ' ';
	}
}


int main() {
	int n;
	cout << "Enter the size of num1:";
	cin >> n;
	int num1[n];
	cout << "Enter " << n << " elements of num1" << endl;
	for (int i = 0; i < n; ++i)
	{
		cin >> num1[i];
	}
	int m;
	cout << "Enter the size of num2:";
	cin >> m;
	cout << "Enter " << m << " elements of num2" << endl;
	int num2[n];
	for (int i = 0; i < m; ++i)
	{
		cin >> num2[i];
	}

	mer(num1, n, num2, m);
}