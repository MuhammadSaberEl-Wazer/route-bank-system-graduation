#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

class Parser
{
public:
    static std::vector<std::string> split(const std::string &line)
    {
        std::vector<std::string> tokens;
        std::istringstream tokenStream(line);
        std::string token;
        while (std::getline(tokenStream, token, '&'))
        {
            tokens.push_back(token);
        }
        return tokens;
    }

    class Client
    {
    public:
        int id;
        std::string name;
        std::string password;
        double balance;

        static Client parseToClient(const std::string &line)
        {
            Client client;
            auto tokens = split(line);
            for (const auto &token : tokens)
            {
                auto pos = token.find('=');
                if (pos != std::string::npos)
                {
                    std::string key = token.substr(0, pos);
                    std::string value = token.substr(pos + 1);

                    if (key == "id")
                    {
                        client.id = std::stoi(value);
                    }
                    else if (key == "name")
                    {
                        client.name = value;
                    }
                    else if (key == "password")
                    {
                        client.password = value;
                    }
                    else if (key == "balance")
                    {
                        client.balance = std::stod(value);
                    }
                }
            }
            return client;
        }
    };

    class Employee
    {
    public:
        int id;
        std::string name;
        std::string password;
        double salary;

        static Employee parseToEmployee(const std::string &line)
        {
            Employee employee;
            auto tokens = split(line);
            for (const auto &token : tokens)
            {
                auto pos = token.find('=');
                if (pos != std::string::npos)
                {
                    std::string key = token.substr(0, pos);
                    std::string value = token.substr(pos + 1);

                    if (key == "id")
                    {
                        employee.id = std::stoi(value);
                    }
                    else if (key == "name")
                    {
                        employee.name = value;
                    }
                    else if (key == "password")
                    {
                        employee.password = value;
                    }
                    else if (key == "salary")
                    {
                        employee.salary = std::stod(value);
                    }
                }
            }
            return employee;
        }
    };

    class Admin
    {
    public:
        int id;
        std::string name;
        std::string password;

        static Admin parseToAdmin(const std::string &line)
        {
            Admin admin;
            auto tokens = split(line);
            for (const auto &token : tokens)
            {
                auto pos = token.find('=');
                if (pos != std::string::npos)
                {
                    std::string key = token.substr(0, pos);
                    std::string value = token.substr(pos + 1);

                    if (key == "id")
                    {
                        admin.id = std::stoi(value);
                    }
                    else if (key == "name")
                    {
                        admin.name = value;
                    }
                    else if (key == "password")
                    {
                        admin.password = value;
                    }
                }
            }
            return admin;
        }
    };
};

// Trial of functions..

// int main()
// {

//     std::ifstream clientFile("client.txt");
//     std::string clientLine;
//     while (std::getline(clientFile, clientLine))
//     {
//         Parser::Client client = Parser::Client::parseToClient(clientLine);
//         std::cout << "Client - ID: " << client.id << ", Name: " << client.name << ", Balance: " << client.balance << std::endl;
//     }

//     std::ifstream employeeFile("employee.txt");
//     std::string employeeLine;
//     while (std::getline(employeeFile, employeeLine))
//     {
//         Parser::Employee employee = Parser::Employee::parseToEmployee(employeeLine);
//         std::cout << "Employee - ID: " << employee.id << ", Name: " << employee.name << ", Salary: " << employee.salary << std::endl;
//     }

//     std::ifstream adminFile("admin.txt");
//     std::string adminLine;
//     while (std::getline(adminFile, adminLine))
//     {
//         Parser::Admin admin = Parser::Admin::parseToAdmin(adminLine);
//         std::cout << "Admin - ID: " << admin.id << ", Name: " << admin.name << std::endl;
//     }

//     return 0;
// }
