#include <string>
#include <iostream>
using namespace std;

class Person {
protected:
    // attr
    int id;
    string name, password;
public:
    // constructor
    Person() {}
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
        Person::name = name;
    }
    void set_password(string password) {
        Person::password = password;
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