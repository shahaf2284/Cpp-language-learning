/* Assignment: 1 
Author: shahaf zohar ID: 205978000
Author: shaked basa, ID: 206310781 
*/ 
 
#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(){
    // Creating a default Fracrtion
    numerator = 0;
    denominator = 1;    // can't devide by zero
    }

Fraction::Fraction(int num1, int num2)
{
    // Creating a Fraction
    numerator = num1;
    denominator= num2;
}
float Fraction::value()
{     // return the value and cange to float
    if (denominator == 0)
    {
        denominator = 1;
        numerator = 0;
    }
    float result =  (float)numerator/denominator;
    return result;
}

void Fraction::updateNumerator(int num)
{      //update the numerator
    numerator = num; 
}

void Fraction::updateDenominator(int num)
{      //update the denominator
    denominator = num; 
}

void Fraction::printValue()
{
    if (denominator == 0)
    {
        denominator = 1;
        numerator = 0;
    }
    cout << numerator << "/" << denominator ;
    
}
Fraction::~Fraction()
{
    cout << "Destructor calld for: NONE value in Fraction class"<<endl;
}

