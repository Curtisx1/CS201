#include "examples.h"

// FUNCTION DEFINITIONS
// io of 3 numbers, find the largest
void exercise1() {
  // set a,b,c
  // int a = 76;
  // float b = 7.8;
  // double c = 8.94;
  // double large = a;
  int a, b, c, large;
  char again = 'Y';
  while (again == 'Y') {
    cout << "Please enter 3 integers: ";
    cin >> a >> b >> c;
    large = a;
    if (b > large)
      large = b;
    if (c > large) {
      large = c;
    }
    cout << "The largest number is: " << large << endl;
    cout << "Do you want to go again? ";
    cin >> again;
  }
  // cout << "code this \n\n";
}

// io and find the distance to the origin
void exercise2() {
  int x, y;
  cout << "Please enter 2 integers for x & y: " << endl;
  cin >> x >> y;
  double dist = pow((pow(x, 2) + pow(y, 2)), .5);
  cout << "The distance is: " << dist << endl;
  // cout << "code this \n\n";
}

// io with 3 numbers, put them in order. loop to stop
void exercise3() {
  // cout << "code this \n\n";
  int x, y, z;
  char again = "Y";
  while (again == "Y") {
    cout << "Enter 3 integers:";
    cin >> x >> y >> z;
    if (x > y)
      swap(x, y);
    if (y, z)
      swap(y, z);
    if (x > y)
      ;
    swap(x, y);
    cout << x << "" << y << "" << z << endl;
    cout << "go again?";
    cin >> again;
  }
}

// OTHER EXAMPLES
// io with different variable types
//    input dog name and age
//    calculate the dog's age in people years
void exercise4() {
  string dogName;
  int dogAge;
  cout << "\nExercise 1: C++ Input & Output\n";
  cout << "Hello! Please enter the name of your dog: ";
  cin >> dogName;

  cout << "How old is " << dogName << "?  ";
  cin >> dogAge;

  cout << "That means " << dogName << " is " << dogAge << " in dog years and "
       << dogAge * 7 << " in people years." << endl
       << endl;
}
void exercise5() {
  // formatting output
  int a, b;
  float quotient;
  cout << "\nExercise 2: C++ Output Formatting\n";
  cout << "Unformatted: " << 2.3891918182020 << endl;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "Formatted:   " << 2.3891918182020 << endl;
}

void exercise6() {
  int a, b, intQuotient;
  float quotient;
  cout << "\nExercise 3: C++ Integer Division, Static_Cast, Modulus\n";
  cin.clear();
  cout << "Please enter two numbers: ";
  cin >> a >> b;
  intQuotient = a / b;
  cout << "The quotient of " << a << " and " << b << " is " << intQuotient
       << "    --- integer division\n";
  quotient = a / static_cast<double>(b);
  cout.precision(2);
  cout << "The quotient of " << a << " and " << b << " is " << quotient
       << " --- with static cast" << endl;
  cout << "The remainder of " << a << " and " << b << " is " << a % b << endl;
}