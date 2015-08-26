# include<iostream>
using namespace std;

class Employee
{
	protected:
		int hoursWorked;
	
	public:
		Employee()
		{
			
		}
		Employee(int hr)
		{
			hoursWorked = hr;
		}
		virtual int processSalary()
		{
			return 150*hoursWorked;
			
		}
};
class Manager : public virtual Employee
{
	public:
		Manager(int hr):Employee(hr)
		{
			
		}
		int processSalary()
		{
			return 200*hoursWorked;
		}
		
};
int main()
{
	//Employee emp1(10);
	Manager m(10);
	Employee* e = &m; 
	int sal = e->processSalary();
	cout << "Manager's salary = " << sal << endl;
	
	Employee emp[] = {Employee(8), Employee(5), Employee(7)};
	
	for(int i=0;i<sizeof(emp)/sizeof(emp[0]);i++)
	{
		cout<<"Salary : " << emp[i].processSalary()<<endl;
	}
	
	//getchar();
	return 0;	
} 
