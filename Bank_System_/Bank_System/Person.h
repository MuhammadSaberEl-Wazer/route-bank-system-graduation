#pragma once
#include <string>
#include <iostream>
#include "Validation.h"
using namespace std;

class Person
{
protected:
    // attr
    int id;
    string name, password;
public:
    // constructor
    Person() :id(0) {}
    Person(int id, string name, string password) {
        set_id(id);
        set_name(name);
        set_password(password);
    }
    // setters
    void set_id(int id) {
        Person::id = id;
    }
    void set_name(string name) {
        if (Validation::isVaildname) {
            Person::name = name;
        }
        else {
            cout << "Invalid name " << endl;
        }
    }
    void set_password(string password) {
        if (Validation::isValidPassword) {
            Person::password = password;
        }
        else
        {
            cout << "Invalid pasword " << endl;
        }
    }
    // getters
    int get_id() {
        return id;
    }
    string get_name() {
        return name;
    }
    string get_password() {
        return password;
    }
    // display
    void display_info() {
        cout << "ID: " << id << endl
            << "Name: " << name << endl;
    }
};

