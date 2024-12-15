#include <iostream>
#include <Square.h>

using namespace std;

class person{
    private:
    string name;
    string address;
    int phone;
    public:
    person(string nam,string add,int ph):name(nam),address(add),phone(ph){};
    void set_name(string n){name=n;}
    void set_address(string add){address=add;}
    void set_phone(int ph){phone=ph;}
    string get_name(){return name;}
    string get_address(){return address;}
    int get_phone(){return phone;}\
    void display(){
        cout<<"Name is : "<<get_name()<<endl;
        cout<<"Address is : "<<get_address()<<endl;
        cout<<"Phone is : "<<get_phone()<<endl;
    }
};

class Employee:public person{
    private:
    long eno;
    public:
    Employee(string nam,string add,int ph,long en):person(nam,add,ph),eno(en){};
    void set_eno(long en){eno=en;}
    long get_eno(){return eno;}
    void display(){
        person::display();
        cout<<"The Employee Number is "<<get_eno()<<endl;
    }
};

class Manager:public Employee{
    private:
    string dept_name;
    float salary;
    public:
    Manager(string nam,string add,int ph,long en,string depname,float sal):Employee(nam,add,ph,en),dept_name(depname),salary(sal){};
    void setdept_name(string dept){dept_name=dept;}
    void set_salary(float sal){salary=sal;}
    string get_dept(){return dept_name;}
    float get_salary(){return salary;}
    void display(){
        Employee::display();
        cout<<"Department Name is : "<<get_dept()<<endl;
        cout<<"Salary is : "<<get_salary()<<endl;
    }
};

int main(){
    Manager m1("Said","Banha",1566,99,"Engineering",50000);
    Manager m2("Ali","City",17826,98,"Water",10000);
    if(m1.get_salary()>m2.get_salary())cout<<m1.get_name()<<" has the highest salary"<<endl;
    if(m1.get_salary()<m2.get_salary())cout<<m2.get_name()<<" has the highest salary"<<endl;
    square s1;
    s1.set_length(600);
}
