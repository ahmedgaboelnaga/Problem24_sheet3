#include <iostream>

using namespace std;

int main()
{
	//Write a program that reads a set of floating - point values.Ask the user to enter the values, then print
	//	• The average of the values.
	//	• The smallest of the values.
	//	• The largest of the values.
	//	• The range that is the difference between the smallest and largest.

	double input;
	double largest = 0;
	double smallest = 0;
	double sum = 0;
	int first;
	
	int size;
	cout << "Enter the size of a sequence: ";
	cin >> size;
	bool first_input = true;
	int i = 1;
	while (i <= size)
	{
		cout << "Enter the #" << i << " number: ";
		cin >> input;

		sum += input;

		if (first_input)
		{
			first_input = false;
			largest = input;
			smallest = input;
		}
		else if (input > largest)
		{
			largest = input;
		}
		else if (input < smallest)
		{
			smallest = input;
		}

		i++;
	}

	cout << endl << "The smallest number is: " << smallest << endl;

	double average = sum / size;
	cout << "The average is: " << average << endl;

	double range = largest - smallest;
	cout << "The range is:" << range << endl;


	return 0;
}