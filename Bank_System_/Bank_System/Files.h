#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include "Clint.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;
class Files
{
public:
    static void file_client(string text) {
        ofstream file1;
        file1.open(text);
        file1.close();
    }
    static void file_employee(string text) {
        ofstream file2;
        file2.open(text);
        file2.close();
    }
    static void file_admin(string text) {
        ofstream file3;
        file3.open(text);
        file3.close();
    }
    static void IdClient(string text) {
        ofstream IdClient;
        IdClient.open(text);
        IdClient.close();
    }
    static void IdEmployee(string text) {
        ofstream IdEmployee;
        IdEmployee.open(text);
        IdEmployee.close();
    }
    static void IdAdmin(string text) {
        ofstream IdAdmin;
        IdAdmin.open(text);
        IdAdmin.close();
    }
};

