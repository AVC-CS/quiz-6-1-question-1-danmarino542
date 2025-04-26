#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open a file in write mode
    ifstream ifs("employee.txt");
    
    // Check if the file is open
    if (!ifs) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    int numEmployees;
    ifs >> numEmployees;
    cout << "ID\t\tName\t\tDepartment\tSalary" << endl;

    cout << "---------------------------------------------" << endl;

    int id;
    string name, department;
    double salary, totalSalray = 0.0;
    for(int i=0; i < numEmployees; i++){
        
        //employees data from the file
        ifs >> id >> name >> department >> salary;

        //employees data to the console
        cout << id << "\t\t" << name << "\t\t" << department << "\t\t" << salary << endl;
        totalSalray += salary; //total salary
    }

    // Close the file
    ifs.close();

    cout << "Data written to file successfully." << endl;
    return 0;
}