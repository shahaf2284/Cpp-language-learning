/* Assignment: 1 
Author: shahaf zohar ID: 205978000
Author: shaked basa, ID: 206310781 
*/ 

#include <iostream>
#ifndef STRING_HPP
#define STRING_HPP

class String
{
private:
//attribute and initialization static char varible
    char arr[10] = {};
    
public:
    // Constructor 
    String();
    String(char letter[]);                    // Creating a array 
    void updateValue(char letter[]);          // updateValue the array 
    void copy(char letter[]);
    bool setCharAt(char , int index);        // Changes 1 cell in the array
    bool setCharsByUser();                    // Changes the array
    char getCharAt(int index);
    void printValue();
    void printValue(bool isbool);
    ~String();

};


#endif // STRING_HPP