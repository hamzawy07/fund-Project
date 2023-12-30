#include <bits/stdc++.h>
#include "addClient.h"
#include "nameOfBuilding.h"
#include "client.h"
#include "website.h"
#include "creat_account.h"
using namespace std;
int main() {
    int c;
    cout << "======================================" << endl;
    cout << "               Main Menu              " << endl;
    cout << "======================================" << endl;
    cout << "1. Client" << endl;
    cout << "2. Employee" << endl;
    cout << "3. Website" << endl;
    cout << "======================================" << endl;
    cin>>c;
    if (c==1) {
        addClient ob;
        int choice;
        string Cn;int Ci;double Cb;string Ct;string n; string t; string loc;
        cout<<"Enter Client Name: "<<endl;
        cin>>Cn;
        cout<<"Enter Client ID: "<<endl;
        cin>>Ci;
        cout<<"Enter Client Budget: "<<endl;
        cin>>Cb;
        cout<<"Enter Type Of Building: "<<endl;
        cin>>t;
        do {
            cout << "\nMarketing Company Menu:\n";
            cout << "1. Add Customer\n";
            cout << "2. Display Customers\n";
            cout << "3. Save Data to File\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    ob.setClient(Cn,Ci,Cb,t);
                    ob.addClients();
                    break;
                case 2:
                    ob.displayCustomers();
                    break;
                case 3:
                    ob.saveDataToFile();
                    break;
                case 4:
                    cout << "Exiting the program.\n";
                    break;
                default:
                    cout << "Invalid choice. Please enter a number between 1 and 4.\n";
            }

        } while (choice != 4);
    }
    else if (c==2){
        string Cn;int Ci;double Cb;string Ct;string n;double p; string t; double s; string loc;
        cout<<"Enter Client Name: "<<endl;
        cin>>Cn;
        cout<<"Enter Client ID: "<<endl;
        cin>>Ci;
        cout<<"Enter Client Budget: "<<endl;
        cin>>Cb;
        cout<<"Enter Type Of Building: "<<endl;
        cin>>Ct;
        t = Ct;
        cout<<"Enter Name Of Building: "<<endl;
        cin>>n;
        cout<<"Enter The Price of Building: "<<endl;
        cin>>p;
        cout<<"Enter The Space: "<<endl;
        cin>>s;
        cout<<"Enter The Location: "<<endl;
        cin>>loc;
        nameOfBuilding obj(Cn,Ci,Cb,Ct,n,p,t,s,loc);
        int choice;
        do {
            cout << "\nMarketing Company Menu:\n";
            cout << "1. Display Info about Building\n";
            cout << "2. Save Data to File\n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    obj.displayBuilding();
                    break;
                case 2:
                    obj.saveToFileE();
                    break;
                case 3:
                    cout << "Exiting the program.\n";
                    break;
                default:
                    cout << "Invalid choice. Please enter a number between 1 and 3.\n";
            }
        } while (choice != 3);
    }
    else if(c==3){
        create_account crt;
        int cc;
        do {
            cout << "Choose an option:\n"
                 << "1. Create Account (Interactive)\n"
                 << "2. Create Account (With Values)\n"
                 << "3. Log In (Interactive)\n"
                 << "4. Log In (With Credentials)\n"
                 << "5. Display Accounts\n"
                 << "6. Exit\n";
            cin >> cc;
            switch (cc) {
                case 1:
                    crt.createAccount();
                    break;
                case 2: {
                    string username, password;
                    cout << "Enter a username: ";
                    cin >> username;
                    cout << "Enter a password: ";
                    cin >> password;
                    crt.createAccount(username, password);
                    break;
                }
                case 3:
                    crt.login();
                    break;
                case 4: {
                    string username, password;
                    cout << "Enter your username: ";
                    cin >> username;
                    cout << "Enter your password: ";
                    cin >> password;
                    crt.login(username, password);
                    break;
                }
                case 5:
                    crt.displayAccounts();
                    break;
                case 6:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice. Try again." << endl;
            }
        } while (cc != 6);
        int Nf,No,Nr,Nh;
        Nf = 7;
        Nr = 5;
        Nh = 10;
        No = 20;
        website oj;
        int choice;
        do {
            cout << "\nMarketing Company Menu:\n";
            cout << "Choose a building type:\n";
            cout << "1. Office\n";
            cout << "2. Residence\n";
            cout << "3. Factory\n";
            cout << "4. Save Data to File\n";
            cout << "5. Exit\n";
            cout << "Enter your choice (1-5): ";
            cin >> choice;
            switch (choice) {
                case 1:
                    if (No==0){
                        cout<<"Nothing here..."<<endl;
                    }
                    else {
                        oj.office(No);
                        int qq3;
                        cin >> qq3;
                        No--;
                        cout<<"Thank You.."<<endl;
                        cout<<oj.getPrice();
                    }
                    break;
                case 2:
                    cout<<"1: house"<<endl;
                    cout<<"2: Building"<<endl;
                    int l;
                    cin>>l;
                    if(l==1) {
                        if (Nh==0){
                            cout<<"Nothing here..."<<endl;
                        }
                        else {
                            oj.house(Nh);
                            int qq;
                            cin >> qq;
                            Nh--;
                            cout<<"Thank You.."<<endl;
                            cout<<oj.getPrice();
                        }
                    }
                    else if(l==2) {
                        if (Nr == 0) {
                            cout << "Nothing here..." << endl;
                        } else {
                            oj.Residential_Building(Nr);
                            int qq1;
                            cin >> qq1;
                            Nr--;
                            cout<<"Thank You.."<<endl;
                            cout<<oj.getPrice();
                        }
                    }
                    break;
                case 3:
                    if (Nr==0){
                        cout<<"Nothing here..."<<endl;
                    }
                    else {
                        oj.Factory(Nf);
                        int qq2;
                        cin >> qq2;
                        cout<<"Thank You.."<<endl;
                        cout<<oj.getPrice();
                    }
                    Nf--;
                    break;
                case 4:
                    oj.saveFile("Total_Price.txt");
                    break;
                case 5:
                    cout << "Exiting the program.\n";
                    break;
                default:
                    cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            }
        } while (choice != 5);
    }
    return 0;
}
