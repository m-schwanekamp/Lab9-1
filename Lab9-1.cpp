//Lab9-1
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
	const int SIZE = 10;
	//Calculates the 10 random integers
	srand(time(0));
	int integers[SIZE], i;
	cout << "The random integers: ";
	for (i = 0; i < SIZE; i++) {
		integers[i] = rand() % 10000;
		cout << integers[i] << " ";
	}
	cout << endl;
	//Displays every element at an even index
	cout << "Even indices: ";
	cout << integers[0] << " ";
	cout << integers[2] << " ";
	cout << integers[4] << " ";
	cout << integers[6] << " ";
	cout << integers[8] << " ";
	cout << endl;

	//Displays every even element;
	cout << "Even values: ";
	for (i = 0; i < SIZE; i++) {
		if (integers[i] % 2 == 0) {
			cout << integers[i] << " ";
		}
	}
	cout << endl;

	//Displays elements in reverse order
	cout << "Reversed order: ";
	for (i = SIZE - 1; i >= 0; i--) {
		cout << integers[i] << " ";
	}
	cout << endl;

	//Displays first and last element
	cout << "First and last: ";
	cout << integers[0] << " ";
	cout << integers[SIZE - 1];
	cout << endl;
}