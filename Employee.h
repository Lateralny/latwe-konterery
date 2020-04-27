#pragma once
#include <iostream>
class Employee
{

private:
	std::string Id;
	std::string Name;
	std::string Surname;
	std::string DepartmentId;
	std::string Position;

public:
	Employee();
	Employee(std::string id, std::string name, std::string surname, std::string departmentId, std::string position);

	void setId(std::string id);
	void setName(std::string name);
	void setSurname(std::string surname);
	void setDepartmentId(std::string departmentId);
	void setPosition(std::string position);

	const std::string& getId() const;
	const std::string& getName() const;
	const std::string& getSurname() const;
	const std::string& getPosition() const;
	const std::string& getDepartmentId() const;



};




