/*
Rotate Image

Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

Input Format
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13

Explanation
Rotate the array 90 degrees anticlockwise.

*/

#include<iostream>
#include<algorithm>
using namespace std;

void display(int a[][1000], int n){
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void rotate(int a[][1000], int n) {
	//Reverse the rows
	for(int row=0; row<n; row++) {
		reverse(a[row],a[row] + n);
	}

	//Transpose
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(i < j) {
				swap(a[i][j],a[j][i]);
			}
		}
	}

}

int main() {

	int n, a[1000][1000];
	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
			cin>>a[i][j];
		}
	}

	rotate(a, n);
	display(a, n);

	return 0;
}