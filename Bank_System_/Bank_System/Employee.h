#pragma once
#include <iostream>
#include "Person.h"
#include "Clint.h"

const int MAX_CLIENTS = 100;  

class Employee : public Person
{
private:
    double salary;
    Clint clients[MAX_CLIENTS];  
    int numClients;  

public:
    // Constructor
    Employee(int id, string name, string password, double salary)
        : Person(id, name, password), salary(salary), numClients(0) {}

   
    void set_salary(double salary) {
        this->salary = salary;
    }

    double get_salary() const {
        return salary;
    }

 
    bool login(int inputId, string inputPassword) const {
        return (inputId == id && inputPassword == password);
    }

   
    void add_client(const Clint& newClient) {
        if (numClients < MAX_CLIENTS) {
            clients[numClients++] = newClient;
            cout << "Client added successfully.\n";
        } else {
            cout << "Cannot add more clients. Maximum limit reached.\n";
        }
    }

    
    Clint* search_client_by_id(int clientId) {
        for (int i = 0; i < numClients; ++i) {
            if (clients[i].get_id() == clientId) {
                return &clients[i];
            }
        }
        return nullptr; 
    }

   
    void list_all_clients() const {
        cout << "List of Clients:\n";
        for (int i = 0; i < numClients; ++i) {
            clients[i].display_info();
            cout << "----------------\n";
        }
    }

    
    void edit_client_info(int clientId, const string& newName) {
        Clint* clientToEdit = search_client_by_id(clientId);
        if (clientToEdit != nullptr) {
            clientToEdit->set_name(newName);
            cout << "Client information updated successfully.\n";
        } else {
            cout << "Client not found.\n";
        }
    }

   
    void display_info() const {
        cout << "Employee Information:\n";
        Person::display_info();
        cout << "Salary: " << salary << endl;
    }
};
