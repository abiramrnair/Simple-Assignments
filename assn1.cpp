#include <iostream>
using namespace std;

// Define some functions

double calcAverage(char*values[], int sz) { // Function 'A'
	cout << "Average" << endl; // Prints out the name
	for (int i = 0; i < sz; i++) { // Prints out each term of the input
		cout << atof(values[i]) << " ";
	}
	cout << endl;
	double sum = 0;
	int *count, *arrayPtr;
	count = &sz;
	arrayPtr = new int[*count];

	for (int i = 0; i < *count; i++) { // Put in values into this dynamic array
		arrayPtr[i] = atof(values[i]);
	}

	for (int i = 0; i < sz; i++) { // Store the sum of the values in the dynamic array
		sum += arrayPtr[i];
	}

	sum = sum / sz;

	return sum;
	delete count; // Deletion of the dynamic variables
	delete[]arrayPtr;
}

double calcMedian(char*values[], double sz) { // Function 'M'
	cout << "Median" << endl;
	double median;
		
	for (int i = 0; i < sz; i++) { // Prints out each term of the input
		cout << atof(values[i]) << " ";
	}

	double *count, double *arrayPtr;
	count = &sz;
	double *arrayPtr = new double[sz];

	for (int i = 0; i < *count; i++) { // Put in values into this dynamic array
		arrayPtr[i] = atof(values[i]);
	}

	cout << endl;
	
	if (*count % 2 != 0) { // In case array spaces are odd numbered
		*count = (*count / 2) + 0.5;
		
		median = arrayPtr[*count];
	}
	
	else { // In case array spaces are even numbered
		median = (arrayPtr[*count / 2] + arrayPtr[(*count / 2) + 1])/2;
	}

		
	return median;
	delete count;
	delete[]arrayPtr;
}

double calcSum(char*values[]) { // Function 'F'
	double sum = 0;
	cout << "Sum" << endl; // Prints out the name of the function
	for (int i = 0; i < 3; i++) { // Prints out each term of the input array
		cout << atof(values[i]) << " ";
	}
	cout << endl;
	const int size = 3;
	double miniArray[size];
	for (int i = 0; i < 3; i++) {
		miniArray[i] = atof(values[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		sum += miniArray[i];
	}

	return sum;
}

int main(int argc, char *argv[]) {
	char c;

	switch (*argv[1]) { // Use a switch statement that analyzes the first array space in argv

	case 'A': cout << "The average is " << calcAverage(&argv[2], argc - 2) << endl;
		break;

	case 'M': cout << "The median is " << calcMedian(&argv[2], argc - 2) << endl;
		break;

	case 'F': cout << "The sum is " << calcSum(&argv[2]) << endl;
		break;
	}

	cin >> c;
}