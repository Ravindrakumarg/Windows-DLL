// DllUsageMathApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "MathFuncsDll.h"

using namespace std;
//using namespace MathFuncs;

int _tmain(int argc, _TCHAR* argv[])
{
	double a = 100;
	double b = 10;

	cout << "value of a=" <<a <<" and b="<<b<<endl;
	cout << "a + b = " <<MathFuncs::MyMathFuncs::Add(a, b) << endl;
	cout << "a - b = " <<MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
	cout << "a * b = " <<MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
	cout << "a / b = " <<MathFuncs::MyMathFuncs::Divide(a, b) << endl;

	return 0;
}

