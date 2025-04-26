#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open a file in write mode
    ofstream ofs("employee.txt");
    
    // Check if the file is open
    if (!ofs) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    ofs << numEmployees << endl; // Write the number of employees to the file

    for(int i=0; i < numEmployees; i++){
        int id;
        string name, department;
        double salary;
        cout << "Enter employee ID: " << "name: " << "department: " << "salary: " << endl;
        cin >> id >> name >> department >> salary;

        ofs << id << " " << name << " " << department << " " << salary << endl; // Write employee data to the file
    }

    // Close the file
    ofs.close();

    cout << "Employee data written to employee.txt" << endl;
    return 0;
}