
/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 

#include "String.h"
#include <iostream>
#include <string.h>

using namespace std;

String::String() {                       // defult destractor 
        arr = new char;     //Dynamic memory
}

String::String(char *str)
{
    arr = new char[strlen(str)+1];     //Dynamic memory
    int i= 0;
    strcpy(arr, str);                                     //initialization ,copy by one by one char to arr            
    this->Removespaces(' ' ,strlen(str)+1);               //call for remove function
//    this->RemoveDualspaces("\t" ,strlen(str)+1);            //call for remove function
} 
void String::Removespaces(char del1,char num)
{    // remove all del(char) from the string
    char *temparr;
    temparr = new char[num];     //Dynamic memory
    int inputIndex = 0;
    int outputIndex = 0;
    int Index=0;
    while(arr[Index]!='\0'){
        if((arr[Index]== 't')&&(arr[Index-1]=='\\')){
            arr[Index]=' ';
            arr[Index-1]=' ';}
        Index++;}
    while(arr[inputIndex]==del1){             //   Check first if there are spaces
        inputIndex++;}                        // Runs to the point without the spaces
    while(arr[inputIndex] != '\0')
    {
        temparr[outputIndex] = arr[inputIndex];
        if(arr[inputIndex] == del1 )
        {
            while(arr[inputIndex + 1] == del1)
            {
                // skip over any extra spaces
                inputIndex++;
            }
        }
        outputIndex++;
        inputIndex++;
    }
//    // null-terminate output   
    temparr[outputIndex] = '\0';                      // end the string whit NULL    
    strcpy(arr, temparr);                             //initialization ,copy by one by one char to arr            
    delete [] temparr;
}

String::String(const String &source)    //copy constractor  
{
    this->arr = new char[strlen(source.arr) + 1];           //Dynamic memory
    strcpy(arr, source.arr);                                //initialization 
} 

String &String::operator=(const String &obj)
{
    arr = new char[strlen(obj.arr) + 1];
    strcpy(arr,obj.arr);                    //Copies the string
    return *this;
    }
    
bool String::operator==(String &obj)
{ 
    int num_arr=strlen(this->arr);
    int num_obj=strlen(obj.arr);
    int index=0;
    if(num_arr == num_obj){
        while(index<num_arr)
            {
                if(this->arr[index]!=obj.arr[index]){
                    return false;}
                   index++; 
            }
            return true;
        }
    return false;
}

ostream & operator << (ostream &out, const String &M)
{
    out << M.arr<<endl;
    return out;
}
String::~String()
{
    delete [] arr;
}

