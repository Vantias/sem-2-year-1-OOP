#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Employee{
	private:
		int salary;
		string name;
		
	public:	
	void setsalary (int employee_salary){ 
	salary=employee_salary; 
	}
	    
	     
	int getemployee_salary ( ){
		return salary;
	}
	
 	void setemployee_name (string employee_name ){  
	  name=employee_name;
	 }
	  
	     
	string getemployee_name ( ){
		return name;
}

};
	 
	

    
  
int main() {
Employee E1;
  E1.setemployee_name("gepard");
   cout<< "the employee is "<<E1.getemployee_name();

	return 0;
}
