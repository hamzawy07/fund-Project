#include <bits/stdc++.h>
using  namespace std;
#ifndef TASK_CREAT_ACCOUNT_H
#define TASK_CREAT_ACCOUNT_H
class create_account {
    struct account{
        string username;
        string password;
        account* next;
        account(string name,string pwd){
            username = name;
            password = pwd;
            next = NULL;
        }
    };
    account* head;
public:
    create_account();
    void createAccount(string username,string password);
    void displayAccounts();
    bool login();
    bool login(string usrName,string ppwd);
    void createAccount();
    ~create_account();
};
#endif
