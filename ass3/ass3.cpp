#include <iostream>
#include <string>
using namespace std;

class Employee {
	// employee variables
protected:
    string Emp_name;
    string Emp_id;
    string Address;
    string Mail_id;
    string Mobile_no;

public:
    Employee(string name, string id, string address, string mail, string mobile)
        : Emp_name(name), Emp_id(id), Address(address), Mail_id(mail), Mobile_no(mobile) {}


	//salary calculator
    virtual void calculate_salary() {
        // Base class does not calculate salary
    }
};

class Programmer : public Employee {
protected:
    double Basic_Pay;

public:
    Programmer(string name, string id, string address, string mail, string mobile, double pay)
        : Employee(name, id, address, mail, mobile), Basic_Pay(pay) {}

    void calculate_salary() override {
        double DA = 0.97 * Basic_Pay;
        double HRA = 0.10 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double club_fund = 0.001 * Basic_Pay;
        double gross_salary = Basic_Pay + DA + HRA;
        double net_salary = gross_salary - PF - club_fund;

        cout << "Programmer's Pay Slip:" << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

class TeamLead : public Employee {
protected:
    double Basic_Pay;

public:
    TeamLead(string name, string id, string address, string mail, string mobile, double pay)
        : Employee(name, id, address, mail, mobile), Basic_Pay(pay) {}

    void calculate_salary() override {
        double DA = 0.97 * Basic_Pay;
        double HRA = 0.10 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double club_fund = 0.001 * Basic_Pay;
        double gross_salary = Basic_Pay + DA + HRA;
        double net_salary = gross_salary - PF - club_fund;

        cout << "Team Lead's Pay Slip:" << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};


class AssProMan : public Employee {
protected:
    double Basic_Pay;

public:
    AssProMan(string name, string id, string address, string mail, string mobile, double pay)
        : Employee(name, id, address, mail, mobile), Basic_Pay(pay) {}

    void calculate_salary() override {
        double DA = 0.97 * Basic_Pay;
        double HRA = 0.10 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double club_fund = 0.001 * Basic_Pay;
        double gross_salary = Basic_Pay + DA + HRA;
        double net_salary = gross_salary - PF - club_fund;

        cout << "Assistant Project Manager's'Pay Slip:" << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};


class ProjectManager : public Employee {
protected:
    double Basic_Pay;

public:
    ProjectManager(string name, string id, string address, string mail, string mobile, double pay)
        : Employee(name, id, address, mail, mobile), Basic_Pay(pay) {}

    void calculate_salary() override {
        double DA = 0.97 * Basic_Pay;
        double HRA = 0.10 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double club_fund = 0.001 * Basic_Pay;
        double gross_salary = Basic_Pay + DA + HRA;
        double net_salary = gross_salary - PF - club_fund;

        cout << "Project Manager's Pay Slip:" << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};




int main() {
    Programmer programmer("Jeremy", "EMP001", "kanjurmarg E", "john@email.com", "1234567890", 50000);
    programmer.calculate_salary();
    cout<<endl;
    TeamLead teamLead("Atharv", "EMP002", "kalyan ke galli", "atharv@email.com", "9876543210", 6000);
    teamLead.calculate_salary();
    cout <<endl;
    AssProMan assProMan("Uday", "EMP069", "Latur ke khet", "laturiboi69@hotmail.com", "6942069420", 50);
    assProMan.calculate_salary();
    
    // similarly for project manager

    return 0;
}
