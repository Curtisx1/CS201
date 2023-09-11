#include "examples.h"


bool isDigits1(string str1) {
	return str1.find_first_not_of("0123456789") == string::npos;
	//similar result:
  //return str1.find_first_not_of("0123456789") == -1;
}

bool isDigits2(string str1) {
	for (int i = 0; i < str1.size(); i++) {
		if (!isdigit(str1[i]))
			return false;
	}
	return true;
}

bool isAlphaFound(string str1){
	for (int i = 0; i < str1.size(); i++) {
		if (isalpha(str1[i]))
			return true;
	}
	return false;
}

void printVector(vector<int> data) {
	for (int i = 0; i < data.size(); i++) {
		cout << data.at(i) << " ";
	}
	cout << endl;
}
void readData(vector<int>& data) {
	//Read CSV File
	ifstream inFile;
	inFile.open("data.txt");
	if (!inFile.is_open()) {
		cout << "Unable to open file";
		return;
	}
	string tempStr;
	int tempInt;
  
	//READ EXAMPLE 1
  ///*
  inFile >> tempStr;
	while (inFile.good()) {
  		if (isDigits1(tempStr)) {
			   data.push_back(stoi(tempStr));
		  }
		inFile >> tempStr;
	}
  //*/
	//READ EXAMPLE 2
  /*
  while (inFile >> tempStr) {
		if (isDigits2(tempStr)) {
			data.push_back(stoi(tempStr));
		}
	}
  */
  //READ EXAMPLE 3
  //note: only works for alpha chars a-z and A-Z
  /*
  while (inFile >> tempStr) {
		if (!isAlphaFound(tempStr)) {
			data.push_back(stoi(tempStr));
		}
	}
  */
  inFile.close();

}

void example1() {
	//Read CSV File & add digits to vector. Print Vector
	vector<int> data;
	readData(data);
	printVector(data);
  cout << endl << endl;
}

float operation(int a, int b, char oper) {
  //NOTE: in the switch statements there is no 'break'
  //      each case returns a value to the calling function or throws an error
  //      so break is not needed (would not be executed if included)
	try {
		switch (oper) {
		case '+': return a + b; 
      
		case '-': return a - b; 
      
		case '*': return a * b; 

 		case '^': return a ^ b;   //note: this may not be doing what you think!
      
 		case '%': 
     	if (b != 0)
				return a % b;
			else
				throw invalid_argument("modulus of 0 not permitted");   
      
		case '/':  
			if (b != 0)
				return static_cast<float>(a) / b;
			else
				throw invalid_argument("divide by 0");
    
    default : 
			throw invalid_argument("unrecognized operation " + to_string(a) + oper + to_string(b) );
			return 0;
		} 
	}
	catch (invalid_argument &e) {
		cout << e.what() << endl;
		return 0;
	}

}
void example2() {
	//process input file (separated by spaces)
	//Read File
	ifstream inFile;
	inFile.open("data2.txt");
	if (!inFile.is_open()) {
		cout << "Unable to open file";
		return;
	}
	string tempStr;
	int a, b;
	char oper;
	while (getline(inFile, tempStr)) {
		stringstream inSS(tempStr);
		try {
			inSS >> a >> oper >> b;
			cout << a << " " << oper << " " << b << " = " << operation(a, b, oper) << endl;
		}
		catch (...) {
			cout << "invalid input for " << a << " " << oper << " " << b <<  endl;
		}
	}
  inFile.close();
  cout << endl << endl;
}

int example3() {
	// Loop until a valid integer is entered
	int userInput;
	bool valid = false;

	while (!valid) {
		cout << "Enter an integer: ";
		try {
			if (cin >> userInput) {			// Attempt to read an integer from the user input
				valid = true;
				return userInput; 
			}
			else {
				throw std::invalid_argument("Invalid input. Please enter an integer.");
			}
		}
		catch (invalid_argument &e) {
			cin.clear();														// Clear the error flag of the input stream
			cin.ignore(INTMAX_MAX, '\n');  	// Ignore the remaining characters in the input buffer up to the newline
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}

}
