#pragma once
#include <iostream>
#include "Person.h"
#include "Clint.h"

const int MAX_CLIENTS = 100;

class Employee : public Person
{
private:
    double salary;
    Clint Clint[MAX_CLIENTS];
    int numClients;

public:
    // Constructor
    Employee(int id, string name, string password, double salary)
        : Person(id, name, password), salary(salary), numClients(0) {}

    void set_salary(double salary)
    {
        this->salary = salary;
    }

    double get_salary() const
    {
        return salary;
    }

    bool login(int inputId, string inputPassword) const
    {
        return (inputId == id && inputPassword == password);
    }

    void add_client(const Clint &newClient)
    {
        if (numClients < MAX_CLIENTS)
        {
            Clint[numClients++] = newClient;
            cout << "Client added successfully.\n";
        }
        else
        {
            cout << "Cannot add more clients. Maximum limit reached.\n";
        }
    }

    Clint *search_client_by
