/* Assignment: 1 
Author: shahaf zohar ID: 205978000
Author: shaked basa, ID: 206310781 
*/ 


#ifndef TWODIGITS_HPP
#define TWODIGITS_HPP

class TwoDigits
{
private:                   //attribute and initialization the varible
    char Unity;             
    char Dozens;           
public:
    TwoDigits();                   //  default TwoDigits         
    TwoDigits(int num);            //  Creating TwoDigits
    TwoDigits(char a, char b);     //  v = some char  
    int value();                   //  return the value from char to int 
    void update(int num);          //  update the Unity and Dozens
    void printValue();             //  print the value 
    ~TwoDigits();                    // Destructor
    
    
};
#endif // TWODIGITS_HPP

