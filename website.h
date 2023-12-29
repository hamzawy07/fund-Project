#include <bits/stdc++.h>
using  namespace std;
#ifndef TASK_WEBSITE_H
#define TASK_WEBSITE_H
class website{
private:
    int Nf,No,Nr,Nh;
    double price;
public:
    website();
    void office(int o);
    void Factory(int f);
    void house(int h);
    void Residential_Building(int r);
    double getPrice();
    void saveFile(const string& filename) const;
};
#endif
