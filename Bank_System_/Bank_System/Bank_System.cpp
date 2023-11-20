#include <string>
#include <iostream>
using namespace std;
#include "Validation.h"
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <fstream>

#define TEXT_FILE_PATH "client.txt"

void file_client(Client& c1, string text) {
    ofstream file1;
    file1.open(text, ios::out);
    file1 << c1.get_id() << c1.get_name() << c1.get_password() << c1.get_balance() << "\n";
    file1.close(); 
}

int main()
{
    Client c1(15, "belal", "1595347884", 9500);
    file_client(c1, TEXT_FILE_PATH);
}
