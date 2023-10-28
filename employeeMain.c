//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind); 

    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind); 

 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[];

    extern const int EmployeeTableEntries; 

 

    PtrToEmployee matchPtr;//Declaration 

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235"); 


    if (matchPtr != NULL) 

        printf("Employee Phone 909-555-1235 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

 

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "808-666-3232"); 
    if (matchPtr != NULL) 

        printf("Employee Phone 808-666-3232 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 



    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.78); 

    if (matchPtr != NULL) 

        printf("Employee salary match is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee salary is NOT found in the record\n"); 


    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 0.01); 
    if (matchPtr != NULL) 

        printf("Employee salary match is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee salary is NOT found in the record\n"); 


    return EXIT_SUCCESS; 

} 