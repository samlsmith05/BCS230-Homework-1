//****************************************************
// File: TipCalculator.cpp
//
// Purpose: Uses the function CalculateFinalBill to calculate the bill.
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
#include "TipCalculator.h"
//****************************************************
// Function: CalculateFinalBill(double billAmount, double taxPct, double tipPct)
//
// Purpose: brings in all of the values and then proceeds to calculate the total
//		bill with everything included and returns that value back to the main.cpp
//
// Update Information
// ------------------
// 
//
//****************************************************
double CalculateFinalBill(double billAmount, double taxPct, double tipPct) {
	//Variables
	double taxAmount;
	double totalWithTax;
	double tipAmount;
	double totalWithEverything;

	//Calculations to determine the final bill
	taxAmount = billAmount * taxPct;
	totalWithTax = billAmount + taxAmount;
	tipAmount = totalWithTax * tipPct;
	totalWithEverything = tipAmount + totalWithTax;

	return totalWithEverything;//returns the amount of the final bill

}
