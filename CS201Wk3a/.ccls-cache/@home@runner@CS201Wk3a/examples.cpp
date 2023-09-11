#include "examples.h"

void example1() {
    //IO USING CIN COMMAND
    string s1, s2;
    cout << "Enter string 1: ";
    cin  >> s1;
    cout << "\nEnter string 2: ";
    cin  >> s2;
    cout << "\ns1 =  " << s1 << " & s2 = " << s2 << endl << endl;

    //IO USING GETLINE
    cout << "TRYING AGAIN: \nEnter string 1: ";
    getline(cin, s1);
    cout << "\nEnter string 2: ";
    getline(cin, s2);
    cout << "s1 = " << s1 << " & s2 = " << s2 << endl << endl;

    cout << "Enter 2 strings (return between strings): \n";
    getline(cin, s1);
    getline(cin, s2);
    cout << "S1= " << s1 << endl;
    cout << "S2= " << s2 << endl<<endl<<endl;

}

void example2() {
    //ISSUES COMBINING DIFFERENT TYPES OF STREAM INPUT
    //PAY ATTENTION TO WHAT IS LEFT IN THE BUFFER!
    int age;
    string name;
    char gender;
  
    cout << "Enter Your Age: ";
    cin >> age;              //get age

    cout << "Enter Name: ";
    getline(cin, name);      //get what is left in buffer

    cout << "Enter Gender: ";
    cin >> gender;
  
    cout << "\nName = " << name << endl;
    cout << "Age    = " << age << endl;
    cout << "Gender = " << gender << endl;

    //CIN.INGORE:  CLEARS BUFFER FOR 80 CHARACTERS OR UNTIL A 'RETURN' IS FOUND
    cout << "\n\nTRYING AGAIN:\nEnter Your Age: ";
    cin >> age;              //get age
    cin.ignore(80,'\n');
  
    cout << "Enter Name: ";
    getline(cin, name);      //get what is left in buffer

    cout << "Enter Gender: ";
    cin >> gender;
  
    cout << "\nName = " << name << endl;
    cout << "Age    = " << age << endl;
    cout << "Gender = " << gender << endl<<endl<<endl;
   
}

void example3() {
    //Using cin.get to get a character at a time
   
    //Read a string & get rid of any uppercase letters
    char c;
    cout << "Enter a string: ";
    cin.get(c);
    while (c != '\n') {
        if (!isupper(c))
            cout << c;
        cin.get(c);
    }
    cout << endl << endl;
}

void example4() {
    //Read a string & create a new string with only alphabetic characters
    string s1, outString = "";
    cout << "Enter a string: ";
    getline(cin,s1);
    for (unsigned int i = 0; i < s1.length(); i++) {
        if (isalpha(s1[i]))
            outString += s1[i];
    }
    cout << outString<< endl << endl;
}

void example5() {
    //Demonstration of File I/O

    // create a variable for the input & output files
    ifstream inFile;
    ofstream outFile;

    // open the files & assign the input and output files to the variables
    inFile.open("input5.txt");
    outFile.open("output5.txt");

    // check the input file is valid
    if (!inFile.good()) {
        cout << "Unable to open input file/n";
        return;
    }
  
    // input values from the input file
    // if the value is odd, add to the sum & increase the count
    // output the odd number found to the output file
    int next, sum = 0, count = 0;
    while (inFile >> next) {
        if (next % 2 == 1) {
            sum += next;
            count += 1;
            outFile << next << " ";
        }
    }
  
    // write the average of the odd values to the output file
    outFile << "\nThe average of the odd numbers is: " << static_cast<double>(sum) / count << endl;

    // close the input & output files
    outFile.close();
    inFile.close();
}

void example6a() {
    //Demonstration of File I/O & CSV file input using string stream & output formatting

    // name the input & output streams
    ifstream inFile;
    ofstream outFile;

    // open both files using the variable name for the input & output streams
    inFile.open("input6.txt");
    outFile.open("output6a.txt");

    // check that the input file opened
    if (!inFile.good()) {
        cout << "Unable to open input file/n";
        return;
    }
 
    string inLine, temp;
    vector<string> row;                        // vector of strings to hold each
                                               // string between the commas
    int sum;
  
    while (getline(inFile, inLine)) {          // read a line of input from the input file
        stringstream inSS(inLine);             //copy input line to stringstream
        row.clear();                           //clear vector of previous row information
        sum = 0;
        while (getline(inSS, temp, ',')) {
            row.push_back(temp);              //as long as there are commas 
                                              // push each string in file onto row
        }
        outFile << row[0] << "  " << setw(20) << left << row[1] << right << setw(10);  //print id and name
        sum = stoi(row[2]) + stoi(row[3]) + stoi(row[4]);  //add 3 values together
        outFile << setprecision(2) << fixed << static_cast<double>(sum) / 3 << endl;
    }
    outFile.close();
    inFile.close();
}

void example6b() {
    //Demonstration of File I/O & CSV file input using string stream & output formatting
    //store values in a vector of 'struct' types containing the id, name, and 3 scores
    
    struct dataLine {          //using a struct for related student data
      char id;
      string name;
      int score1;
      int score2;
      int score3;
    };

    // name the input & output streams
    ifstream inFile;
    ofstream outFile;

    // open both files using the variable name for the input & output streams
    inFile.open("input6.txt");
    outFile.open("output6b.txt");
  
    // check that the input file opened
    if (!inFile.good()) {
        cout << "Unable to open input file/n";
        return;
    }


    vector<dataLine> studentData;             // create a vector to hold student data
    dataLine tempData;                        // create a struct to hold 1 student's data
    string inLine, temp;
    vector<string> row;                       // vector of strings to hold each
                                              // string between the commas
    int sum;
     while (getline(inFile, inLine)) {          // read a line of input from the input file
        stringstream inSS(inLine);             //copy input line to stringstream
        row.clear();                           //clear vector of previous row information
        sum = 0;

        while (getline(inSS, temp, ',')) {
            row.push_back(temp);              //as long as there are commas 
                                              // push each value onto row
        }
        //store data from row in temp data structure
        tempData.id = row[0][0];              //row[0] is a string - take 0th character
        tempData.name = row[1];
        tempData.score1 = stoi(row[2]);
        tempData.score2 = stoi(row[3]);
        tempData.score3 = stoi(row[4]);
      
        studentData.push_back(tempData);       // push student onto the vector
    }
 
    //print id, name, scores & average
    for (int i = 0; i < studentData.size(); i++){
        sum = studentData[i].score1 + studentData[i].score2 + studentData[i].score3;
        double avg = static_cast<double>(sum) / 3;
      
        outFile << studentData[i].id << "  "  
                << setw(20) << left
                << studentData[i].name  << right << setw(10)
                << setprecision(2) << fixed << avg << endl; 
    }
  
    //close data file
    outFile.close();
    inFile.close();
}

void example7() {
    //Demonstration of File I/O & CSV file input using string stream & vector manipulation
    ifstream inFile;
    ofstream outFile;

    inFile.open("input7.txt");
    outFile.open("output7.txt");

    if (!inFile.good()) {
        cout << "Unable to open input file/n";
        return;
    }

    //find average for each student
    stringstream inSS;
    string inLine, temp;
    vector<string> row, names;
    vector<string>::iterator it;

    int sum;
    while (getline(inFile, inLine)) {
        stringstream inSS(inLine);            //copy input line to stringstream
        row.clear();                          //clear vector of previous row information
        sum = 0;
        while (getline(inSS, temp, ',')) {
            row.push_back(temp);              //loop as long as there are commas - push each value onto row
        }
        if (row[0] == "a") 
            names.push_back(row[1]);
        else if (row[0] == "d") {
            it = find(names.begin(), names.end(), row[1]);
            if (it != names.end())
                names.erase(it);
        }
        else if (row[0] == "r") {
            //replace is found in algorithms
            replace(names.begin(), names.end(), row[1], row[2]);  

            //this is another way to replace the data in the vector
            //it = find(names.begin(), names.end(), row[1]);
            //if (it != names.end()) {
                //names.erase(it);
                //names.push_back(row[2]);
            //}
        }
    }
    for (int i = 0; i < names.size(); i++)
        outFile << names.at(i) << endl;   

    outFile.close();
    inFile.close();
}

 