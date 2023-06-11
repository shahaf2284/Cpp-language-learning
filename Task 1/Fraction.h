/* Assignment: 1 
Author: shahaf zohar ID: 205978000
Author: shaked basa, ID: 206310781 
*/ 

#include <iostream>
#ifndef FRACTION_HPP
#define FRACTION_HPP

class Fraction
{   
    //attribute and initialization the varible
    int numerator = 1;                    // mone
    int denominator = 1;                // mehane/ can't devide by zero
public: 
    Fraction();
    Fraction(int num1, int num2);       //get to varible and criate Fraction     
    float value();                      // rerurn the value 
    void updateNumerator(int num);       // update the numerator
    void updateDenominator(int num);     // update the denominator
    void printValue();                  // print function 
    ~Fraction();                        // Destructor
    
};

#endif // FRACTION_HPP
