/* Assignment: 1 
Author: shahaf zohar ID: 205978000
Author: shaked basa, ID: 206310781 
*/ 
#include <iostream>
#include "TwoDigits.h"

using namespace std;

TwoDigits::TwoDigits()
{   //  Creating a default TwoDigits 
    Unity = 0; 
    Dozens = 0;
}

TwoDigits::TwoDigits(int num)
{       //Creating a default TwoDigits by geting int 
    Unity = num%10; 
    Dozens = num%100/10; 
}

TwoDigits::TwoDigits(char a ,char b)
{   //  Creating a default TwoDigits by geting char 
    Unity =(int)a-48;
    Dozens = (int)b-48;
}
int TwoDigits::value()
{       //  return the value 
    int x = (int)Unity;
    int y = 10*(int)Dozens;
    return x + y;
}
void TwoDigits::update(int num)
{       //  update the value of TwoDigits
    Unity = num%10;             
    Dozens = num%100/10; 
}

void TwoDigits::printValue()
{       //  print the value   
    int x = (int)Unity, y = (int)Dozens;
    int result;
    cout <<((y == 0) ? x : x+y*10 );       // print Unity if Dozens ==0 else the value
}                     

TwoDigits::~TwoDigits()
{
    cout << "Destructor calld for NONE value in TwoDigits class"<<endl;
}


