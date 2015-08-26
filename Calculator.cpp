#include<iostream>

using namespace std;

class Calculator{
   private:
	int sum;
	int diff;
	int product;
	public:
	 Calculator();
	 int add(int num1, int num2);
	 int subtract(int num1,int num2);
	 int multiply(int num1, int num2);
};

Calculator::Calculator(void){
	sum = 0;
	diff = 0;
	product = 1;
}

int Calculator::add(int number1, int number2){
	sum = number1 + number2;
	return sum;
}


int Calculator::subtract(int number1, int number2){
	diff = number1 - number2;
	return diff;
}

int Calculator::multiply(int number1, int number2){
	product = number1 * number2;
	return product;
}

int main(){
	Calculator c;
	int sum = c.add(100,45);
	int diff = c.subtract(80,50);
	int product = c.multiply(2,8);
	cout << "sum = " << sum << "\n" << "diff = " << diff << "\n" << "product = " << product << endl;
	return 0;
}
