#include <bits/stdc++.h>
using  namespace std;
#include "website.h"
website::website() {
Nf = 7;
Nr = 5;
Nh = 10;
No = 20;
price = 0;
}
void website::Factory(int ff) {
    int f = 17000;
    double p = 500000000;
    cout<<"We Have "<<Nf<<" Factory"<<endl;
    cout<<"Choose what you want: "<<endl;
    for(int i =1; i<=Nf;i++) {
        cout<<i << ": "<<f<<" square feet "<<"Price: "<<p<< endl;
        f+=2000;
        p+=20000000;
    }
    Nf--;
    price+=p;
}
void website::office(int oo) {
    cout<<"We Have "<<No<<" Office"<<endl;
    cout<<"Choose what you want: "<<endl;
    double p = 20000;
    int o = 25;
    for(int i =1; i<=No;i++) {
        cout<<i << ": "<<o<<" m " <<"Price: "<<p<< endl;
    }
    No--;
    price+=p;
}
void website::house(int hh) {
    cout<<"We Have "<<Nh<<" House"<<endl;
    cout<<"Choose what you want: "<<endl;
    double p = 100000;
    for(int i = 1; i<=Nh;i++) {
        int h = 700;
        cout<<i << ": "<<h<<" m Price: "<<p<< endl;
    }
    Nh--;
    price+=p;
}
void website::Residential_Building(int rr) {
    cout<<"We Have "<<Nr<<" Building"<<endl;
    cout<<"Choose what you want: "<<endl;
    double p = 20000;
    for(int i = 1; i<=Nr;i++) {
        int r = 15;
        cout<<i << ": "<<r<<"Room Price: "<<p<< endl;
    }
    Nr--;
    price+=p;
}
double website::getPrice() {
    return price;
}
void website::saveFile(const string& filename) const {
    ofstream outFile(filename);
        outFile << fixed << setprecision(2) << price<< endl;
        outFile.close();
        cout << "Total price information saved to file: " << filename << endl;
}
