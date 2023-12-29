#include "client.h"
#include <bits/stdc++.h>
using namespace std;
client::client() : ID(0), budget(0.0) {
}
client::client(string n, int i, double b, string t) : clientName(n), ID(i), budget(b), type(t) {
}
void client:: display(){
    cout<<"Client Name: " << clientName << endl;
    cout<<"Client ID: " << ID<<endl;
    cout<<"Client Budget: "<<budget<<endl;
    cout<<"Type of Building: "<<type<<endl;
}
void client :: saveToFile(ofstream &file) const {
    file << "Name: " <<clientName << endl<<"ID: "<< ID<<endl;
    file<<"Budget: "<<budget<<endl<<"Type of Building: "<<type<<endl;
}
