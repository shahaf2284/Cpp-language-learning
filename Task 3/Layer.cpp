/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#include "Layer.h"

using namespace std;

Layer::Layer(){
    Name_Layer = '-';     //Name the class in which he is studying(between a-f)
    for(int i = 0 ;i< Number_class_in_layers;i++){
        Class* New_Class = new Class();
        layer.push_back(New_Class);
        }
}
//constractor 
Layer::Layer(char Name_Layer, vector<Class*>List_Layer){
    this->Name_Layer=Name_Layer;
    this->layer=List_Layer;
}

//copy constractor
Layer::Layer(const Layer &source){
    Name_Layer=source.Name_Layer;
    layer=source.layer;
}

Class& Layer::operator[](int index){
    return *layer[index]; 
}

Class* Layer::Getclass(int index){
    return layer[index]; 
}

void Layer::Set_Name_Layer(char name_Layer/*between a-f*/){
    this->Name_Layer = name_Layer;
}

int Layer::Get_Name_Layer(){
    return this->Name_Layer; 
}

vector<Class*> Layer::get_veclass(){
    return this->layer;
    }


Layer::~Layer()
{
    cout<< "the destractor-Layer"<<endl;
}

