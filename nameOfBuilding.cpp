#include <bits/stdc++.h>
#include "client.h"
#include "nameOfBuilding.h"
using  namespace std;

nameOfBuilding::nameOfBuilding(string Cn,int Ci,double Cb,string Ct,string n, double p, string t, double s, string loc) : client(Cn,Ci,Cb,Ct){
    name = n;
    space =s;
    type =t;
    price = p;
    location = loc;
}
double nameOfBuilding::getBudget(){
    return price;
}
void nameOfBuilding::displayBuilding(){
    cout<<"Building Name is: "<<name<<endl;
    cout<<"The Location: "<<location<<endl;
    cout<<"The Space of: "<<name<<" is: "<<space<<"m"<<endl;
    cout<<"its: "<<type<<endl;
    cout<<"Total Price is: "<<price<<endl;
}
string nameOfBuilding::getNameOfBuilding() {
    return name;
}
void nameOfBuilding::saveToFileE() {
    ofstream file("Building.txt");
    client::saveToFile(file);
    file<<"Building Name is: "<<name<<endl;
    file<<"The Location: "<<location<<endl;
    file<<"The Space of "<<name<<" is: "<<space<<"m"<<endl;
    file<<"its "<<type<<endl;
    file<<"Total Price is: "<<price<<"$"<<endl;
}

//void nameOfBuilding::setBuildingInfo(string n, double p,string t, double s,string loc) {
    //name = n;
   // space =s;
    //type =t;
    //price = p;
   // location = loc;
//}
