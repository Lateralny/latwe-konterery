#pragma once
#include <vector>
#include <map>
#include <iostream>
#include "Employee.h"
class HRMS : public Employee
{
private:
	std::vector<Employee> Employees;
	std::multimap<std::string, Employee> Map;
	std::map<std::string, double> Salary;

public:
	void add(Employee employee, std::string departmentId, double salary);
	void printDepartment(std::string departmentId);
	void changeSalary(std::string employeeId, double salary);
	void printSalaries();
	void printSalariesSorted();

};

