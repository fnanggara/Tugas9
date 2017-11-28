#include <iostream>

using namespace std;

// Prototype
int *generateArray(int number);
// Declare Global Variable
int length = 5;

int main()
{
  int **array2d = new int*[length];
  for (int i = 1; i <= length; i++) {
    array2d[i - 1] = new int[length];
    /*
      Save 1d Arrays into 2d Array
      Formula = i + 1 ( Because Start from 2 )
    */
    array2d[i - 1] = generateArray(i + 1);
  }

  // Print 2d Array
  for (int i = 1; i <= length; i++) {
    for (int j = 0; j < length; j++) {
      cout << array2d[i - 1][j] << " ";
    }
    cout << endl;
  }
}

// Function to generate 1d Array
int *generateArray(int number)
{
  int *numbersList = new int[length];

  for (int i = 0; i < length; i++) {
    numbersList[i] = number + i;
  }

  return numbersList;
}
