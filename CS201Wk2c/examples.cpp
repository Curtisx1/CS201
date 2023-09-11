#include "examples.h"
// 
//VECTOR - PRINT FUNCTION
//
//HELPER FUNCTION: Print 1-D Vector
void printVector(vector<int> ages) {
	cout << "The ages entered were" << endl;

	for (auto i : ages)
		cout << i << endl;
}
//
//HELPER FUNCTION: Print 2-D Vector
//example of polymorphism
void printVector(vector<vector<int>> v1, int r, int c) {
	cout << "The values entered were" << endl;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			cout << v1.at(i).at(j) << " ";
		cout << endl;
	}
}


//VECTOR - EXAMPLE 1
void example1(vector<int> ages) {
	int age, number = 1;

	cout << "Enter an age for person # " << number++ << " : ";
	cin >> age;
	while (age > 0) {
		ages.push_back(age);
		cout << "Enter an age for person # " << number++ << " : ";
		cin >> age;
	}

  cout << "\nVector Printed - In Example 1\n";
	printVector(ages);
}

//VECTOR - EXAMPLE 2
void example2(vector<int> ages) {

	printVector(ages);

	ages.assign(5, 99);
	ages.insert(ages.begin()+2, 77);

	//add two additional vector functions here:


	printVector(ages);

}

//VECTOR - EXAMPLE 3
void example3(vector<vector<int>> &v1, int &row, int &col) {

	cout << "Enter number of rows followed by the number of columns: ";
	cin >> row >> col;

	//LOAD TABLE
	vector<int> temp;
	int tempNumb;
	cout << "Enter " << row * col << " values: ";
  
  //NOTE: create each 'row' and push the row onto the vector
	for (int i = 0; i < row; i++) {
		temp.clear();
		for (int j = 0; j < col; j++) {
			cin >> tempNumb;
			temp.push_back(tempNumb);
		}
		v1.push_back(temp);
	}

  printVector(v1, row, col);

}

//VECTOR - EXAMPLE 4
void findMinValue(vector<vector<int>>& v1, int r, int c){
  cout << "code this\n";

}


//VECTOR - EXAMPLE 5
vector<vector<int>> addMatrices(vector<vector<int>>& v1, vector<vector<int>>& v2, int r, int c){
  vector<vector<int>> sum;
  cout << "code this\n";
  return sum;
}
 