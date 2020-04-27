#include "HRMS.h"

int main()
{
	Employee prac1("16182", "Piotr", "Kowalski", "Rozwoju", "Team Leader");
	Employee prac2("42354", "Michal", "Wisniewski", "Finansow", "Team Leader");
	Employee prac3("94732", "Maciek", "Cyganik", "Zarzadzania", "Team Leader");
	Employee prac4("36271", "Karol", "Krol", "Finansow", "Starszy Specjalista");
	Employee prac5("16234", "Amanda", "Czudej", "Rozwoju", "Starszy Specjalista");
	Employee prac6("18463", "Jacek", "Duda", "Rozwoju", "Specjalista");
	Employee prac7("26341", "Agnieszka", "Grabowska", "Finansow", "Starszy Specjalista");
	Employee prac8("12653", "Grzegorz", "Nowak", "Zarzadzania", "Specjalista");
	Employee prac9("26362", "Jan", "Nowak", "Finansow", "Specjalista");
	Employee prac10("19743", "Arleta", "Golda", "Finansow", "Specjalista");

	HRMS main;

	main.add(prac1, prac1.getDepartmentId(), 2500.01);
	main.add(prac2, prac2.getDepartmentId(), 2400.99);
	main.add(prac3, prac3.getDepartmentId(), 2200.76);
	main.add(prac4, prac4.getDepartmentId(), 4000.87);
	main.add(prac5, prac5.getDepartmentId(), 3200.41);
	main.add(prac6, prac6.getDepartmentId(), 7001.01);
	main.add(prac7, prac7.getDepartmentId(), 4231.01);
	main.add(prac8, prac8.getDepartmentId(), 7016.01);
	main.add(prac9, prac9.getDepartmentId(), 5000);
	main.add(prac10, prac10.getDepartmentId(), 3500.01);


	main.printDepartment("Finansow");
	main.printDepartment("Rozwoju");
	main.printDepartment("Zarzadzania");
	main.printSalaries();
	main.changeSalary("94732", 8190.16);
	main.changeSalary("42354", 8231.67);
	main.changeSalary("16182", 8921.17);
	main.changeSalary("16234", 5290.25);
	std::cout << "\n" << std::endl;
	std::cout << "\n\tPo edycji wynagrodzen \n" << std::endl;
	main.printSalaries();
	main.printSalariesSorted();

	//system("pause");
}
