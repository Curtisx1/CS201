// 
// This continues Program 6 - Matrix Functions
//

#include "examples.h"

int main() {
  //
	//VECTOR EXAMPLES
	//

	int row1, col1, row2, col2;
	vector<int> ages;
	vector<vector<int>> values1, values2, addMatrix;

	example1(ages);
        //demo: input vector values 
        //  and print using for-each
  
  cout << "\nVector Printed - In Main\n";
	printVector(ages);
	
  //example2(ages);
        //demo: print the vector, 
        // manipulate some of the values
  
	//example3(values1, row1, col1); 
       //will load & print the 2-D vector
  
	//example3(values2, row2, col2); 
       //will load & print the 2-D vector

  //findMinValue(values1, row1, col1);
  
  if (row1 == row2 && col1 == col2){
    //addMatrix = addMatrices(values1,values2,row1,col1);
  }
}