#pragma once
#include "Person.h"
#include "Clint.h"
#include <iostream>
#include <string>
#include <fstream>
#include "Files.h"
#include <vector>
#include <Windows.h>
using namespace std;

class FilesHelper

{
public:
    static void saveLast(string fileName, int id) {
        ofstream allid;
        allid.open(fileName, ios::out);
        allid << id;
        allid.close();
    }
    static int getLast(string fileName) {
        ifstream allid(fileName);
        int lastid;
        if (allid.is_open()) {
            allid >> lastid;
            return lastid;
        }
        else {
            cout << "Couldn't open file\n";
        }
    }
    static void saveClient(Clint c, string fileName) {
        ofstream file1;
        file1.open(fileName, ios::out | ios::app);
        file1 << c.get_id() << "&" << c.get_name() << "&" << c.get_password() << "&" << c.get_balance() << "\n";
        file1.close();
    }
    static void saveEmployee(string fileName, string lastidFile, Employee e) {
        ofstream file2;
        file2.open(fileName, ios::out | ios::app);
        file2 << e.get_id() << "&" << e.get_name() << "&" << e.get_password() << "&" << e.get_salary() << "\n";
        file2.close();
        ofstream file_2;
        file_2.open(lastidFile, ios::out);
        file_2 << e.get_id();
        file_2.close();
    }
    static void getClients() {
        string fileName;
        cout << "enter the file name: ";
        cin >> fileName;
        ifstream file;
        file.open(fileName);
        if (file.is_open()) {
            vector<string>allClients;
            string line;
            while (!file.eof())
            {
                getline(file, line);
                allClients.push_back(line);
            }
            file.close();


            for (int i = 0; i < allClients.size() - 1; i++) {
                cout << "Client " << i + 1 << " : " << allClients[i] << "," << endl;
            }
        }
    }
    static void getEmployees() {
        string fileName;
        cout << "enter file name: ";
        cin >> fileName;
        ifstream file(fileName);

        if (file.is_open()) {
            vector<string>allEmployees;
            string line;

            while (!file.eof())
            {
                getline(file, line);
                allEmployees.push_back(line);
            }
            file.close();

            for (int i = 0; i < allEmployees.size() - 1; i++) {
                cout << "Employee " << i + 1 << " : " << allEmployees[i] << "," << endl;
            }
        }
    }
    static void getAdmins() {
        string fileName;
        cout << "enter file name: ";
        cin >> fileName;
        ifstream file(fileName);

        if (file.is_open()) {
            vector<string>allAdmins;
            string line;

            while (!file.eof())
            {
                getline(file, line);
                allAdmins.push_back(line);
            }
            file.close();

            for (int i = 0; i < allAdmins.size() - 1; i++) {
                cout << "Admin " << i + 1 << " : " << allAdmins[i] << "," << endl;
            }
        }
    }
    static void clearFile(string fileName, string lastidFile) {
        // delete fileName
        fstream read_file;
        read_file.open(fileName);
        if (read_file.fail()) {
            cout << "error opening file " << endl;
            return;
        }

        vector<string>clearfile;
        string line;

        while (!read_file.eof())
        {
            getline(read_file, line);
            clearfile.push_back(line);
        }

        read_file.close();

        remove("client.txt");

        // delete lastidFile

        fstream read_idfile;
        read_idfile.open(lastidFile);
        if (read_idfile.fail()) {
            cout << "error opening file " << endl;
            return;
        }

        vector<string>clearidfile;
        string idline;

        while (!read_idfile.eof())
        {
            getline(read_idfile, idline);
            clearidfile.push_back(idline);
        }

        read_idfile.close();

        remove("allid.txt");
    }
};
