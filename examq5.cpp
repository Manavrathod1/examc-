#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    string name;
    string role;

public:
    
    void setName(const string& n) {
        name = n;
    }

    void setRole(const string& r) {
        role = r;
    }

    
    string getName() const {
        return name;
    }

    string getRole() const {
        return role;
    }
};


class EmployeeDetails : public Employee {
protected:
    int experience;

public:

    void setExperience(int exp) {
        experience = exp;
    }

   
    int getExperience() const {
        return experience;
    }
};


class CompanyInfo : public EmployeeDetails {
protected:
    string companyName;
    string address;

public:
 
    void setCompanyName(const string& cn) {
        companyName = cn;
    }

    void setAddress(const string& add) {
        address = add;
    }


    string getCompanyName() const {
        return companyName;
    }

    string getAddress() const {
        return address;
    }

    void getInput() {
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee Role: ";
        getline(cin, role);

        cout << "Enter Employee Experience (in years): ";
        cin >> experience;

        cin.ignore(); 

        cout << "Enter Company Name: ";
        getline(cin, companyName);

        cout << "Enter Company Address: ";
        getline(cin, address);
    }


    void printEmployeeInfo() const {
        cout << "\nEmployee Information:" << endl;
        cout << "Employee Name: " << getName() << endl;
        cout << "Employee Role: " << getRole() << endl;
        cout << "Experience: " << getExperience() << " years" << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
   
    CompanyInfo employee;

    
    employee.getInput();


    employee.printEmployeeInfo();

    return 0;
}