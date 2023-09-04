/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary: Take 4 numbers from the user and use the various arithmetic operators to do some calculations. Makes use of conditions to not allow an input of 0 for numbers 2 and 4.
*/

#include <iostream>
#include "Input_Validation.h"

using namespace std;

// Function to handle data validation

int getInteger(int x) {
  int input = 0;
  while (true) {
    cout << "Please enter Number " << x << ": ";
    
    try {
      input = getValidatedInput<int>();
      if (x == 2 || x ==4) {
        if (input == 0) {
          cout << "Can not divide by zero!" << endl;
          continue;
        }
      }
    } catch(exception e) {
      cout << "Please only enter integers!" << endl;
      continue;
    }

    break;
  }

  return input;
}

int main() {
  // Variable Declarations
  double number1, number2, addition, subtraction, multiplication, division;
  int number3, number4, modulus;

  // Input
  number1 = getInteger(1);
  number2 = getInteger(2);
  number3 = getInteger(3);
  number4 = getInteger(4);

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