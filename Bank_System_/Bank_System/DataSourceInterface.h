#pragma once
#include "Person.h"
#include "Clint.h"
#include "Employee.h"
#include "Admin.h"
class DataSourceInterface
protected:

	virtual void addClient(Clint) = 0;
	virtual void addEmployee(Employee) = 0;
	virtual void addAdmin(Admin) = 0;
	virtual void getAllClients() = 0;
	virtual void getAllEmployees() = 0;
	virtual void getAllAdmins() = 0;
	virtual void removeAllClients() = 0;
	virtual void removeAllEmployees() = 0;
	virtual void removeAllAdmins() = 0;
};

