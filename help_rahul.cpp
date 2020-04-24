/*
Help Rahul

Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array.
Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

Hint - Think Binary Search!

Input Format
The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.

Output Format
Output the index of number in the array to be searched. Output -1 if the number is not found.

Sample Input
5
4
5
1
2
3
2

Sample Output
3

Explanation
The given rotated array is [4, 5, 1, 2, 3]. The element to be searched is 2 whose index is 3.

*/

#include<iostream>
using namespace std;

int find_key(int n, int a[], int key) {
	int s = 0;
	int e = n - 1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			return mid;
		}
		else if (a[s] <= a[mid]) {
			if (key >= a[s] and key <= a[mid]) {
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}
		}
		else {
			if (key >= a[mid] and key <= a[e]) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
	}
}

int main() {

	int n;
	cin >> n;
	int a[1000000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int key;
	cin >> key;

	cout << find_key(n, a, key);
	return 0;
}