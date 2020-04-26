//****************************************************
// File: Main.cpp
//
// Purpose: Calculates the final bill with the tip included in the final bill, as well as 
//		reads to and from files, and calls to a function (CalculateFinalBill).
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
// 
//****************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include "TipCalculator.h"

using namespace std;

//****************************************************
// Function: main
//
// Purpose: Entry point for program
//
// Update Information
// ------------------
// 
//
//****************************************************

int main() {
	//Variables
	double billAmt;
	double taxPercentage;
	double tipPercentage;
	double total;
	//inputFile has the raw data
	ifstream inputFile;
	//outputFile has the data that is all calculated
	ofstream outputFile;

	//Opens both txt files
	inputFile.open("InputData.txt");
	outputFile.open("OutputData.txt");

	outputFile << "Bill\t\t\tTax Pct\t\t\tTip Pct\t\t\t\tFinal Bill" << endl;

	//reads 3 numbers from InputData with each loop through until there is not enough data to do another loop through
	while (inputFile >> billAmt >> taxPercentage >> tipPercentage) {
		total = CalculateFinalBill(billAmt, taxPercentage, tipPercentage);

		//writes the information to OutputData using fixed amount of decimal points for each number
		outputFile << setprecision(2) << fixed << billAmt << "\t\t\t" << setprecision(3) << fixed << taxPercentage << "\t\t\t" << 
			setprecision(2) << fixed << tipPercentage << "\t\t\t\t" << setprecision(2) << fixed << total << endl;

	}
	return 0;
}