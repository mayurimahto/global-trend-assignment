//Write a function to find the maximum difference between any two elements in an array.The function should return the maximum difference between any two elements in the array.

#include <bits/stdc++.h>
using namespace std;

int maxAbsDiff(int arr[], int n)
{

	int minEle = arr[0];
	int maxEle = arr[0];
	for (int i = 1; i < n; i++) {
		minEle = min(minEle, arr[i]);
		maxEle = max(maxEle, arr[i]);
	}

	return (maxEle - minEle);
}

int main()
{
	int arr[] = { 2, 1, 5, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxAbsDiff(arr, n);

	return 0;
}
