#include <iostream>

using namespace std;

// Prototype
int *generateArray();
// Declare Global Variable
int length = 15;

int main()
{
  // Declare variable
  int *array1d = new int[length];

  // Call function to save list of number into variable
  array1d = generateArray();

  // Print Array
  for (int i = 0; i < length; i++) {
    cout << array1d[i] << " ";
  }
}

// Function to generate 1d Array
int *generateArray()
{
  int *numbersList = new int[length];

  for (int i = 1; i <= length; i++) {
    numbersList[i - 1] = i * 2;
  }

  return numbersList;
}
