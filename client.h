#include <bits/stdc++.h>
using  namespace std;
#ifndef TASK_CLIENT_H
#define TASK_CLIENT_H
class client {
protected:
    string clientName;
    int ID;
    double budget;
    string type;

public:
    client();
    client(string n, int i, double b, string t);
    void display();
    void saveToFile(ofstream &file) const;
};
#endif
