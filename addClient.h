#ifndef TASK_ADDCLIENT_H
#define TASK_ADDCLIENT_H
#include <bits/stdc++.h>
#include "client.h"
using  namespace std;
class addClient{
private:
    client clients[100];
    int numClients;
public:
    addClient();
    void setClient(string n,int i,double b,string t);
    void addClients();
    void displayCustomers();
    void saveDataToFile();
};
#endif
