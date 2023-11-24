using namespace std;
#include <string>
#include <iostream>
#include "Validation.h"
#include "Person.h"
#include "Clint.h"
#include "Employee.h"
#include "Admin.h"
#include "FilesHelper.h"
#include "Files.h"
#include <fstream>
#include <Windows.h>
// classes files
#define TEXT_FILE_cl_PATH "client.txt"
#define TEXT_FILE_em_PATH "employee.txt"
#define TEXT_FILE_ad_PATH "admin.txt"
//id's files
#define TEXT_FILE_ALLID_PATH "allid.txt"
#define TEXT_FILE_IDcl_PATH "client's id.txt"
#define TEXT_FILE_IDem_PATH "employee's id.txt"
#define TEXT_FILE_IDad_PATH "admin's id.txt"


int main()
{
    Clint client_n(48, " hady adel ", "1231576461", 60000);
    Employee employee_n(1245, "kamel mohammed", "mncvcxnvjk78", 20000);
    Admin admin_n(1, " amer thabet ", "shgmnvuwhf45", 80000);



    //SaveLast_ID
    //FilesHelper::saveLast(TEXT_FILE_ALLID_PATH, admin_n.get_id());
    //cout << FilesHelper::getLast(TEXT_FILE_ALLID_PATH);
    //FilesHelper::saveClient(client_n, TEXT_FILE_cl_PATH);
    //FilesHelper::saveEmployee(TEXT_FILE_em_PATH, TEXT_FILE_IDem_PATH, employee_n);
    //FilesHelper::saveEmployee(TEXT_FILE_ad_PATH, TEXT_FILE_IDad_PATH, admin_n);
    //FilesHelper::getClients();
    //FilesHelper::getEmployees();
    //FilesHelper::getAdmins();
    //FilesHelper::clearFile(TEXT_FILE_cl_PATH, TEXT_FILE_ALLID_PATH);




}
