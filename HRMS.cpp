#include "HRMS.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>



void HRMS::add(Employee employe, std::string departmentId, double salary)
{
	Employees.push_back(employe);
	Map.insert(std::pair<std::string, Employee>(departmentId, employe));
	Salary.insert(std::pair<std::string, double>(employe.getId(), salary));

}


void HRMS::printDepartment(std::string departmentId)
{
	std::cout << "\n\tPracownicy departamentu " << departmentId << "\n" << std::endl;
	for (auto const& itr : Map)
	{
		if (departmentId == itr.second.getDepartmentId())
			std::cout << itr.second.getName() << " " << itr.second.getSurname() << std::endl;
	}
}

void HRMS::changeSalary(std::string employeeId, double salary)
{
	Salary.at(employeeId) = salary;
}

void HRMS::printSalaries()
{
	
	std::cout << "\n\tZarobki\n" << std::endl;
	for (auto const& itr : Salary)
	{
		for (auto const& itr2 : Employees)
		{
			if (itr.first == itr2.getId())
				std::cout << itr2.getName() << " " << itr2.getSurname() << " : " << itr.second << " PLN" << std::endl;
		}

	}

}

void HRMS::printSalariesSorted()
{
	std::cout << "\n\t Posortowane Zarobki\n" << std::endl;

	typedef std::pair<std::string, double> pair;
	std::vector<pair> vec;
	std::copy(Salary.begin(), Salary.end(), std::back_inserter<std::vector<pair>>(vec));
	std::sort(vec.begin(), vec.end(), [](const pair& l, const pair& r) 
	{
		if (l.second != r.second)
			return l.second > r.second;
		return l.first > r.first;
	});

	std::vector<Employee>::iterator itr2;
	for (auto const& pair : vec) 
	{
		for (auto itr2 : Employees)
		{
			if (pair.first == itr2.getId())
				std::cout << itr2.getName() << " " << itr2.getSurname() << " : " << pair.second << " PLN" << std::endl;
		}
	}

}


