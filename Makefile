all: output

output: main.o Employee.o HRMS.o
	g++ main.o Employee.o HRMS.o -std=c++11 -o output

main.o: main.cpp
	g++ -c main.cpp -std=c++11

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp -std=c++11

HRMS.o: HRMS.cpp HRMS.h
	g++ -c HRMS.cpp -std=c++11

clean:
	rm *.o output
	
run: output
	./output
	
