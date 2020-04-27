#include "Employee.h"

Employee::Employee() : Id("None"), Name("None"), Surname("None"), DepartmentId("None"), Position("None")
{
}

Employee::Employee(std::string id, std::string name, std::string surname, std::string departmentId, std::string position) 
	: Id(id), Name(name), Surname(surname), DepartmentId(departmentId), Position(position)
{
}

void Employee::setId(std::string id)
{
	this->Id = id;
}

void Employee::setName(std::string name)
{
	this->Name = name;
}

void Employee::setSurname(std::string surname)
{
	this->Surname = surname;
}

void Employee::setDepartmentId(std::string departmentId)
{
	this->DepartmentId = departmentId;
}

void Employee::setPosition(std::string position)
{
	this->Position = position;
}

const std::string& Employee::getId() const
{
	return this->Id;
}

const std::string& Employee::getName() const
{
	return this->Name;
}

const std::string& Employee::getSurname() const
{
	return this->Surname;
}

const std::string& Employee::getDepartmentId() const
{
	return this->DepartmentId;
}

const std::string& Employee::getPosition() const
{
	return this->Position;
}







