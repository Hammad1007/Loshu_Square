#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// make a function for taking input
void Input_Array(int arr[3][3]) {
	cout << "\t\tEnter the input in array.\n";
	for (int i = 0; i < 3; i++) {
		cout << "At row i = " << i << "\n";
		for (int j = 0; j < 3; j++) {
			cout << "Enter the data at index " << j << ": ";
			cin >> arr[i][j];
		}
	}
}

// make a function to display the array
void Print_Array(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

// function checks if the matrix is loshu or not
bool Loshu_Or_Not(int arr[3][3]) {
	int flag = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[0][0] + arr[0][1] + arr[0][2] ==  15 && arr[1][0] + arr[1][1] + arr[1][2] == 15 && arr[2][0] + arr[2][1] + arr[2][2] == 15 && arr[0][0] + arr[1][0] + arr[2][0] == 15 && arr[0][1] + arr[1][1] + arr[2][1] == 15 && arr[0][2] + arr[1][2] + arr[2][2] == 15 && arr[0][0] + arr[1][1] + arr[2][2] == 15 && arr[0][2] + arr[1][1] + arr[2][0] == 15) {
				flag = true;
			}
			else {
				flag = false;
			}
		}
	}
	return flag;
}

// Main driver function
int main() {
	system("Color B0");
	
	// declaring an array of size 3 x 3, means it has 3 rows and 3 columns
	int arr[3][3];
	
	cout << "\t\t\tTaking input in the array\n";
	Input_Array(arr);
	
	cout << "\t\t\tDisplaying the array\n";
	Print_Array(arr);
	
	// now checking for loshu or not
	cout << "\t\t\tChecking if Loshu or not\n";
	bool temp = Loshu_Or_Not(arr);
	
	if (temp == true) {
		cout << "IS LOSHU MAGIC SQUARE\n";
	}
	else {
		cout << "NOT LOSHU MAGIC SQUARE\n";
	}
	
	system("Pause");
	return 0;
}
