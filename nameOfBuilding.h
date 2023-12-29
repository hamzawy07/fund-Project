#ifndef TASK_NAMEOFBUILDING_H
#define TASK_NAMEOFBUILDING_H
#include "client.h"
#include <bits/stdc++.h>
using  namespace std;
class nameOfBuilding:public client{
string name;
double price;
string type;
double space;
string location;
public:
    nameOfBuilding(string Cn,int Ci,double Cb,string Ct,string n, double p,string t, double s,string loc);
    //void setBuildingInfo(string n,double p,string t,double s,string loc);
    void displayBuilding();
    double getBudget();
    string getNameOfBuilding();
    void saveToFileE();
    //virtual void display() const;
};
#endif
