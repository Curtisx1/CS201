#include "examples.h"

//FUNCTION DEFINITION

void example1() {
	// This program will create a sequence of
	// random numbers on every program run
  srand(time(0));
  int max = 10, min = -10;
	for (int i = 0; i < 5; i++) {
		cout << rand()%(max-min+1) + min << endl;
	}
}

//HELPER FUNCTION
int randomPt() {

}

void example2() {
	// ALGORITHM 1 - DISTANCE FROM A POINT TO THE ORIGIN
	// This function will generate 4 numbers b/w -10 & 10 (2 points x1,y1 and x2,y2)
	// find the distance to the origin for each point
	// print the closest point

	cout << "write your code for the distance function" << endl;

}
//HELPER FUNCTION
int rollDie(){

}
void example3() {
	// ALGORITHM 2 - CRAPS
	// This function will simulate the game of craps with the following rules:
	// if 7 or 11 – you win
	// if 2, 3, 12 – you lose
	// all others establish the ‘point’
	//      keep rolling until : point – you win OR 7 – you lose

  
}

void example4() {
	// ALGORITHM 3 - CHOCOLATE CHALLENGE
	// This function will takin in 3 values:  
	//     total pounds of chocolate needed; number of LargeBars(5 pounds) on hand, number of SmallBars (1 pound) on hand
	//     fill the order (if possible)

	cout << "write your code for the chocolate challenge" << endl;
}

void example5(){
  //order of operations: 
  //  ()
  //  !
  //  */% + -   L to R
  //  < <= > >= L to R
  // == !=
  // &&  &
  // ||  |
  int w = 0, x = 1, y = 2, z = -1;
  
  cout << x * y * pow(y, z) + 1 << endl;
    
  if ((w == 0) || y / w * z )                     //SHORT CIRCUIT
    cout << "(w == 0) || y / w * z is true\n";
  else
    cout << "(w == 0) || y / w * z is false\n";
  
  if ((w == 0) | y / w * z )                       //NOT SHORT CIRCUIT
    cout << "(w == 0) | y / w * z  is true\n";   
  else
    cout << "(w == 0) | y / w * z  is false\n";

  if (x/y == w && y*z == y && w)     
    cout << "x/y == w && y*z == y && w  is true\n";
  else
    cout << "x/y == w && y*z == y && w  is false\n";

  if (x/y == w || y*z == y && w)     
    cout << "x/y == w || y*z == y && w  is true\n";
  else
    cout << "x/y == w || y*z == y && w  is false\n";
  
  if (x/y == w && y*z == -y && !w) 
    cout << "x/y == w && y*z == -y && !w is true\n";
  else
    cout << "x/y == w && y*z == -y && !w is false\n";
   
  if (x/y == w && y*z == y || !w) 
    cout << "x/y == w && y*z == y || !w is true\n";
  else
    cout << "x/y == w && y*z == y || !w is false\n";
}

void example6(){     //switch example
  char grade;
  cout << "Choose your Grade: " << "A B C D F\n";
  cin >> grade;
  
  switch (toupper(grade)) {
    case 'A':
      cout << "Excellent!" << endl;
      break;
    case 'B':
      cout << "Great job" << endl;
      break;
    case 'C':
      cout << "Good" << endl;
      break;
    case 'D':
      cout << "Needs work" << endl;
      break;
    case 'F':
      cout << "Better try again\n ";
      break;
    default:
      cout << "Invalid grade" << endl;
  }
}

void example7(){   //floating point operations
  double x = 1.0 / 3.0;
  
  cout << x << " ";
  
  if (x == 0.333333333)                    //hard to test exact value
      cout << "x == 0.333333333 is the correct answer" << endl;
  else 
      cout << "x == 0.333333333 is the not the correct answer" << endl;
  
  if (abs(x - 0.333333) < 0.0001)          //use a threshold instead
    cout << "abs(x - 0.333333) < 0.0001 is the correct answer" << endl;
  else 
    cout << "abs(x - 0.333333) < 0.0001 is not the correct answer" << endl;
}

void example8(){     //break vs continue
  //break breaks out of loop and ends
	for (int i = 0; i < 10; i++) {
    if (i == 3)
      break;
		cout << i << " ";
	}
  cout << endl;
  //continue goes back to the top of the loop
	for (int i = 0; i < 10; i++) {
    if (i % 2 == 0)          //if i is even, don't print
      continue;
		cout << i << " ";
	}
  cout << endl;
}

void example9(){   //nested loops

  for (int i = 1; i <=10; i++){
     cout << setw(4) << i << " | ";      //setw is a formatting command
                                         //you must include <iomanip>
     for (int j = 1; j <=10; j++){
       cout << setw(4) << i*j << " ";
       }
     cout << endl;
  }  
}