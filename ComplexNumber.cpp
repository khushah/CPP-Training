#include <iostream>
using namespace std;

class Number
{
	int value;
	
	friend class ComplexNumber;
	
	
	public:
		Number(int value)
		{
			this->value = value;
		}
		
		void display()
		{
			cout << "Number is real : " << value;
		}
};


class ComplexNumber
{
	double realNumber;
	double imaginaryNumber;
	 
	public:
		ComplexNumber(int realNumber,int imaginaryNumber)
		{
			this->realNumber = realNumber;
			this->imaginaryNumber= imaginaryNumber; 
		}
		
		void display()
		{
			if(imaginaryNumber == 0)
			{
				Number number(realNumber);
				number.display();
			}
			else 
			{
				cout<<realNumber<<"+i"<<imaginaryNumber<<endl;
			}
		}
		friend ComplexNumber operator+(const ComplexNumber &n1,const ComplexNumber &n2);
};

ComplexNumber operator+(const ComplexNumber &n1,const ComplexNumber &n2)
{
	double realNumber = n1.realNumber+n2.realNumber;
	double imaginaryNumber = n1.imaginaryNumber+n2.imaginaryNumber;
	return ComplexNumber(realNumber,imaginaryNumber);
}

int main()
{
	ComplexNumber a(1.0,2.0);
	ComplexNumber b(2.0,3.0);
	cout << "Sum of complex numbers : ";
	ComplexNumber c = a+b;
    c.display();
    cout << "Use of friend class " << endl;
    cout << "---------------------" << endl;
    ComplexNumber cn(3.0,0.0);
    cn.display();
	return 0;
}
