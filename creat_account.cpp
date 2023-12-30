#include "creat_account.h"
#include <bits/stdc++.h>
using  namespace std;
create_account::create_account(){
    head = NULL;
}
create_account::~create_account() {
    account* current = head;
    while (current != NULL) {
        account* next = current->next;
        delete current;
        current = next;
    }
}
void create_account::createAccount() {
    string username, password;
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;
    account* newAccount = new account(username, password);
    newAccount->next = head;
    head = newAccount;
    cout << "Account created successfully!" << endl;
}
void create_account::createAccount(string username,string password){
    account* newAccount = new account(username, password);
    newAccount->next = head;
    head = newAccount;
    cout << "Account created successfully!" << endl;
}
bool create_account::login() {
    string enteredUsername, enteredPassword;
    cout << "Enter your username: ";
    cin >> enteredUsername;

    cout << "Enter your password: ";
    cin >> enteredPassword;
    return login(enteredUsername, enteredPassword);
}
bool create_account::login(string usrName,string ppwd){
    account* current = head;
    while (current != NULL) {
        if (current->username == usrName && current->password == ppwd) {
            cout << "Login successful!" << endl;
            return true;
        }
        current = current->next;
    }
    cout << "Login failed. Incorrect username or password." << endl;
    return false;
}
void create_account::displayAccounts() {
    cout << "Accounts:" << endl;
    account* current = head;
    while (current != NULL) {
        cout << "Username: " << current->username << ", Password: " << current->password << endl;
        current = current->next;
    }
}