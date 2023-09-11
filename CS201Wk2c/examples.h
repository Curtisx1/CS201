#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//VECTOR - PRINT
void printVector(vector<int> ages);
//PRE: none
//POST: prints the vector sent

//VECTOR - EXAMPLE 1
void example1(vector<int> ages);
//PRE: none
//POST: will load & print the vector 

//VECTOR - EXAMPLE 2
void example2(vector<int> ages);
//PRE: none
//POST: will print the vector, manipulate some of the values, and reprint the vector

//VECTOR - EXAMPLE 3
void example3(vector<vector<int>>& v1, int& row, int& col);
//PRE: none
//POST: will load & print the vector 

//VECTOR - EXAMPLE 4
void findMinValue(vector<vector<int>>& v1, int r, int c);
//PRE:  the vector (rxc) is loaded with values 
//POST: print the minimum value in the vector 

//VECTOR - EXAMPLE 5
vector<vector<int>> addMatrices(vector<vector<int>>& v1, vector<vector<int>>& v2, int r, int c);
//PRE: none
//POST: return the sum of 2 matrices 