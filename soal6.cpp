#include <iostream>

using namespace std;

// Prototype
int *mirror(int number, int length);
int *generateArray(int number, int length);

int main()
{
  // Declare variable
  int *numbers, value = 0;

  // Save user input into variable
  cout << "Masukkan Nilai N = ";
  cin >> value;

  int length = (2 * value) - 1, **array2d = new int*[length];

  numbers = mirror(value, length);

  for (int i = 0; i < length; i++) {
    array2d[i] = new int[length];
    // Save 1d Arrays into 2d Array
    array2d[i] = generateArray(numbers[i], length);
  }

  // Print 2d Array
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << array2d[i][j] << " ";
    }
    cout << endl;
  }
}

// Function to generate mirror number ex : 12321
int *mirror(int number, int length)
{
  int *numbersList = new int[length];
  int temp = number;

  for (int i = 0; i < length; i++) {
    numbersList[i] = (i < number - 1) ? temp-- : temp++;
  }

  return numbersList;
}

// Function to generate 1d Array
int *generateArray(int number, int length)
{
  int *numbersList = new int[length];

  for (int i = 0; i < length; i++) {
    numbersList[i] = number;
  }

  return numbersList;
}
