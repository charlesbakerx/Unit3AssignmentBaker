/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary: Take 4 numbers from the user and use the various arithmetic operators to do some calculations. Makes use of conditions to not allow an input of 0 for numbers 2 and 4.
*/

#include <iostream>

using namespace std;

int main() {
  // Variable Declarations
  double number1, number2, addition, subtraction, multiplication, division;
  int number3, number4, modulus;

  // Input
  cout << "Please enter Number 1: ";
  cin >> number1;
  while (true) {
    cout << "Please enter Number 2: ";
    cin >> number2;
    if (number2 != 0) {
      break;
    } else {
      cout << "Can not divide by 0" << endl;
    }
  }
  cout << "Please enter Number 3: ";
  cin >> number3;
  while (true) {
    cout << "Please enter Number 4: ";
    cin >> number4;
    if (number4 != 0) {
      break;
    } else {
      cout << "Can not divide by 0" << endl;
    }
  }

  // Processing
  addition = number1 + number2;
  subtraction = number1 - number2;
  multiplication = number1 * number2;
  division = number1 / number2;
  modulus = number3 % number4;

  // Output
  cout << number1 << " + " << number2 << " = " << addition << endl;
  cout << number1 << " - " << number2 << " = " << subtraction << endl;
  cout << number1 << " * " << number2 << " = " << multiplication << endl;
  cout << number1 << " / " << number2 << " = " << division << endl;
  cout << number3 << " % " << number4 << " = " << modulus << endl;

  return 0;
}