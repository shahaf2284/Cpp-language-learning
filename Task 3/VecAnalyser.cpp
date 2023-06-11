/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#include "VecAnalyser.h"
#include <iostream> 
#include "Worker.h"
#include "Pupil.h"
#include "Manager.h"

using namespace std; 


template <class T>
VecAnalyser<T>::VecAnalyser(){
}

template <class T>
T* VecAnalyser<T>::get_object(vector<T*>obj, int index){
    if(obj.size() < index){
        cout << "The index exceeds the limits of the vector, and the vector limit is-"<<obj.size()<<endl;
        return NULL;
        }
    return obj.at(index);
    
}

template <class T>
void VecAnalyser<T>::Swap(vector<T*>obj, int i,int k){
    if(obj.at(i)&&obj.at(k)){
        T temp = obj.at(i);
        obj.at(i)=obj.at(k);
        obj.at(k) = temp; 
        }
    else{
        cout << "The index is not valid"<<endl;}
}

template <class T>
void VecAnalyser<T>::printElement(vector<T*>obj, int index){
    if(obj.size() < index){
        cout << "The index exceeds the limits of the vector, and the vector limit is-"<<obj.size()<<endl;}
    else{
        obj.at(index)->Print();}
}

template <class T>
void VecAnalyser<T>::printAll(vector<T*>obj){
    for(T *value: obj){
        value->Print();    
        cout<< endl;
    }
}


    
template <class T>
void VecAnalyser<T>::printMax(vector<T*>obj){
        vector<T*> MAXsalery;
        int index=0;
        for(int i=0;i<obj.size();i++){
            if(obj.at(index)->Salery()<obj.at(i)->Salery()){
                index=i;
                MAXsalery.clear();
            }
            if(obj.at(index)->Salery() == obj.at(i)->Salery()){
                MAXsalery.push_back(obj.at(i));
            }
        }
        for(T* worker : MAXsalery){
            worker->Print();
            }
    }


template <class T>
bool VecAnalyser<T>::ThereIsManager(vector<T*>obj){
    for(T* worker : obj){
        if(dynamic_cast<Manager*>(worker)){
            return true;}
    return false;
}
}

template <class T>
void VecAnalyser<T>::PrintOutstandingPeople(vector<T*>obj){
        if(typeid(Pupil)==typeid(obj.at(0))){
            vector<T*> OutstandingPupil;
            for(int i=0;i<obj.size();i++){
                if(obj.at(i)->Excellent()){
                    OutstandingPupil.push_back(obj.at(i));
            }

        }
        for(T* student : OutstandingPupil){
            student->Print();
            cout<<endl;
            }
        if(OutstandingPupil.size()==0){
            cout<<"There is no Outstanding Pupils"<<endl;
            }

    }
    else{
        vector<T*> OutstandingWorker;
        for(int i=0;i<obj.size();i++){
            if(obj.at(i)->Excellent()){
                OutstandingWorker.push_back(obj.at(i));
        }
        for(T* worker : OutstandingWorker){
            worker->Print();
            cout<<endl;
            }
        if(OutstandingWorker.size()==0){
        cout<<"There is no Outstanding Workers"<<endl;
        }
    }
}   
}
template <class T>
VecAnalyser<T>::~VecAnalyser()
{
}

