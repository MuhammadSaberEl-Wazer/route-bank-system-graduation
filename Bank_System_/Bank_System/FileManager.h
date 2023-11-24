#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "DataSourceInterface.h"
#include "FilesHelper.h"
using namespace std;


class FileManager :
    public DataSourceInterface
{
    void addClient(Clint client, string filename) {
        FilesHelper::saveClient(client,filename);
   }

    void addEmployee(string filename ,string lastidfile ,Employee employee)  {
        FilesHelper::saveEmployee(filename,lastidfile,employee);
    }

    void addAdmin(string filename, string lastidfile, Employee admin) {
        FilesHelper::saveEmployee(filename, lastidfile, admin);
    }

     void getAllClients() {
        
         ifstream file("Clients.txt");
         string line;
         while ( getline(file, line)) {
             Clint client = FilesHelper::getClints(line);
             // Process the retrieved client data as needed
             client.display();  // Example: Display client information
         }
         file.close();
    }

     vector<string> getAllEmployees(){
         vector<std::string> employees;
         ifstream file("employees.txt");
        if (file.is_open()) {
             string line;
            while (getline(file, line)) {
                employees.push_back(line);
            }
            file.close();
        }
        else {
            cout << "Failed to open employees.txt" << endl;
        }
        return employees;
    }

    vector<string> getAllAdmins() override {
        vector<string> admins;
        ifstream file("admins.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                admins.push_back(line);
            }
            file.close();
        }
        else {
            cout << "Failed to open admins.txt" << endl;
        }
        return admins;
    }

    void removeAllClients() override {
        ofstream file("clients.txt", ofstream::out | fstream::trunc);
        if (!file.is_open()) {
            cout << "Failed to open clients.txt" << endl;
        }
        file.close();
    }

    void removeAllEmployees() override {
        ofstream file("employees.txt", ofstream::out | ofstream::trunc);
        if (!file.is_open()) {
            cout << "Failed to open employees.txt" << endl;
        }
        file.close();
    }

    void removeAllAdmins() override {
        ofstream file("admins.txt", ofstream::out | ofstream::trunc);
        if (!file.is_open()) {
            cout << "Failed to open admins.txt" << endl;
        }
        file.close();
    }
};

