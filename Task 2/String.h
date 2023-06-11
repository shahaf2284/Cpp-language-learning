/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 

#ifndef STRING_HPP
#define STRING_HPP
#include <iostream>

using namespace std;

class String
{
private:
    char *arr ;

public:
    String();                       
    String(char *str);                                 // constractor whit char*
    String(const String &source);                      // copy constractor
    void Removespaces(char del1,char num);       // remove function
    String& operator=(const String &obj);             //initialization the objects by comper another objrct
//    String& operator>>(const string &obj);             //initialization the objects by geting data from the user
    bool operator==(String &obj);                     //Comparison of objects and return bool value
    friend ostream &operator<<(ostream &out, const String &M);  // print function 
    String& rearrangementid(String &Id); 
    ~String();                                   // distractor

};

#endif // STRING_HPP
