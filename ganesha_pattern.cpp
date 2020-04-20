/*
Ganesha's Pattern (Swastik)

Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

Input Format
Enter value of N ( >=5 )

Constraints
5 <= N <= 99

Output Format
Print the required pattern.

Sample Input
7

Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

*/

#include<iostream>
using namespace std;

int main() {

	int N;
	cin>>N;

	//First component
	cout<<"*";
	for(int i=0;i<(N-3)/2;i++) {
		cout<<" ";
	}
	for(int i=0;i<(N+1)/2;i++) {
		cout<<"*";
	}
	cout<<endl;

	//Second component
	for(int i=0;i<(N-3)/2;i++) {
		cout<<"*";
		for(int i=0;i<(N-3)/2;i++){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}

	//Third component
	for(int i=0;i<N;i++) {
		cout<<"*";
	}
	cout<<endl;

	//Fourth component
	for(int i=0;i<(N-3)/2;i++) {
		for(int i=0;i<(N-3)/2+1;i++) {
			cout<<" ";
		}
		cout<<"*";
		for(int i=0;i<(N-3)/2;i++) {
			cout<<" ";
		}
		cout<<"*"<<endl;
	}

	//Fifth component
	for(int i=0;i<(N+1)/2;i++) {
		cout<<"*";
	}
	for(int i=0;i<(N-3)/2;i++) {
		cout<<" ";
	}
	cout<<"*"<<endl;

	return 0;
}