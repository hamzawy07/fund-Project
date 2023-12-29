#include "addClient.h"
#include <bits/stdc++.h>
#include "client.h"
using  namespace std;
addClient::addClient():numClients(0) {
}
void addClient::setClient(string n,int i,double b,string t) {
    for (int i = 0; i < 100; ++i) {
        clients[i] = client(n, i, b, t);
    }
}
void addClient::addClients() {
    if (numClients < 100) {
        clients[numClients].display();
        numClients++;
    } else {
        cout << "Maximum number of clients reached.\n";
    }
}
void addClient::displayCustomers() {
    for (int i = 0; i < numClients; ++i) {
        clients[i].display();
        cout << "---------------------\n";
    }
}

void addClient::saveDataToFile() {
    ofstream outFile("customer_data.txt");
    if (!outFile.is_open()) {
        cout << "Error opening file for writing.\n";
        return;
    }
    for (int i = 0; i < numClients; ++i) {
        clients[i].saveToFile(outFile);
    }
    outFile.close();
    cout << "Data saved to customer_data.txt.\n";
}