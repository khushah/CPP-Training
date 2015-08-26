#include<iostream>

using namespace std;


class Comparator{
	
	public:
	Comparator(int a,int b);
	Comparator(float a,float b);
	Comparator(char a,char b);
	Comparator(string a,string b);
	
	void check()
	{
		cout << "In Comparator class!" << endl;
	}
};

Comparator :: Comparator(int a,int b){
	int result = a < b ? b : a ;
	cout << result << " is greater!" << endl;  
}

Comparator :: Comparator(float a, float b){
	float result = a < b ? b : a ;
	cout << result << " is greater!" << endl; 
}

Comparator :: Comparator(char a, char b){
	char result = a < b ? b : a ;
	cout << result << " is greater!" << endl; 
}

Comparator :: Comparator(string a, string b){
	string result = a.compare(b) < 0 ? b : a ;
	cout << result << " is greater!" << endl; 
}

int main(){
	Comparator comp(3,4);
	Comparator comp1(25.1f,45.6f);
	Comparator comp2('v','c');
	Comparator comp3("happy","sad");
	
	cout<< "\nUse of copy constructor" << endl;
	cout << "-----------------------" << endl;
	
	Comparator compCopy = comp;
	compCopy.check();
	return 0;
}
