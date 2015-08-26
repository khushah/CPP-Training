#include <iostream>

using namespace std;

static int countA = 0;

class A
{
	static int countA;
	public:
	
	
    A(int aValue)
    {
        cout << "A: " << aValue << endl;
        countA++;
    }	
    virtual void check()
	{
    	cout << "In A"<<endl;
	}
	static int getCountA()
	{
		return countA;
	}
};

int A::countA = 0;

class B : virtual public A
{
	public:
    B(int aValue, double bValue)
    : A(aValue)
    {
        cout << "B: " << bValue << endl;
    }
    virtual void check()
	{
    	cout << "in B"<<endl;
	}
};

class C : virtual public A
{
	public:
    C(int aValue, double cValue)
    : A(aValue)
    {
        cout << "C: " << cValue << endl;
    }
    virtual void check(){
    	cout << "in C"<<endl;
	}
};

class D : public B, public C
{
	public:
	D(int aValue, double bValue, double cValue, int dValue)
	: A(aValue), B(aValue, bValue), C(aValue, cValue)
	{
		cout << "D: " << dValue << endl;
	}
	void check(){
    	cout << "in D"<<endl;
	}
};

int main(){
	D d(12,34.7,45.9,56);
	d.check();
	
	cout << "visited A = " << d.getCountA() << endl;
	return 0;
}
