/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#ifndef VECANALYSER_HPP
#define VECANALYSER_HPP

#include <iostream> 
#include "Worker.h"
#include "Pupil.h"

using namespace std; 

template<typename T>
class VecAnalyser
{
private:
public:
    VecAnalyser();
    T* get_object(vector<T*>, int index);
    void Swap(vector<T*>obj, int i, int k);
    void printElement(vector<T*>obj, int index);
    void printAll(vector<T*>obj);
    void printMax(vector<T*>obj);
//    void printMaxPupil(vector<T*>obj){
    void PrintOutstandingPeople(vector<T*>obj);
    bool ThereIsManager(vector<T*>obj);
    virtual~VecAnalyser();

};

#endif // VECANALYSER_HPP
