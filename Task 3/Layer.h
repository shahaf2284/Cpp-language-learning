/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#ifndef LAYER_HPP
#define LAYER_HPP

#include "Class.h"
#define Number_class_in_layers 3                    //The number of classes in the layers

class Layer
{
private:
    char Name_Layer;
    vector<Class*>layer{};
public:
    Layer();
    Layer(char Name_Layer, vector<Class*>List_Layer);
    Layer(const Layer &source);
    void Set_Name_Layer(char num);
    int Get_Name_Layer();
    vector<Class*> get_veclass();
    Class* Getclass(int index);
    Class& operator[](int index);
    virtual~Layer();

};

#endif // LAYER_HPP
