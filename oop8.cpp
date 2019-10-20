//EXCEPTION HANDLING (ASSIGNMENT 8)
#include<iostream>
using namespace std;
class exception_handling
{
	public:
		int age;
		double salary;
		int city;
		char w;
		void get_age();
		void get_salary();
		void get_city();
		void get_car();
		void display();
		exception_handling()
		{
			age=0;
			salary=0;
		}
};
void exception_handling::get_age()
{
	cout<<"\n Enter age";
	cin>>age;
	try
	{
		if(age<=18||age>=55)
		{
			throw(age);
		}	
	}
	catch(int)
	{
		cout<<"\n Exception";
		/*cout<<"\n Enter AGE again ";
		cin>>age;*/	
	}
}
void exception_handling::get_salary()
{
	cout<<"\n Enter salary";
	cin>>salary;
	try
	{
		if(salary<50000||salary>100000)	
		{
			throw(salary);
		}
	}
	
	catch(double)
	{
		cout<<"\n Exception";
		/*cout<<"\n Enter SALARY again ";
		cin>>salary;*/
	}
}
void exception_handling::get_city()
{
	cout<<"\n Enter city 1>MUMBAI 2>PUNE 3>OTHER";
	cin>>city;
	
	try
	{
		if(city>2)
		{
			throw(city);
		}	
	}
	catch(int)
	{
		cout<<"\n Exception";
		/*cout<<"\n Enter CITY again ";
		cin>>city;*/
	}
	
}
void exception_handling::get_car()
{
	char y,n;
	cout<<"\n Do you have 4 wheeler (y/n)";
	cin>>w;
	try
	{
		if(w=='n')
		{
			throw(w);
		}	
	}
	catch(char)
	{
		cout<<"\n Exception";
		/*cout<<"\n Enter VEHICLE DETAILS again ";
		cin>>w;*/
	}
}
void exception_handling::display()
{
	cout<<"\nYOUR AGE :"<<age;
	cout<<"\n--------------------------------------------";
	cout<<"\nYOUR SALARY :"<<salary;
	cout<<"\n--------------------------------------------";
	cout<<"\nYOUR VEHICLE DETAILS: ";
	if(w=='n')
	{
		cout<<" NO FOUR WHEELER";
	}
	else
	{
		cout<<"FOUR WHEELER";
	}
	cout<<"\n--------------------------------------------";
	cout<<"\nYOUR CITY :";
	if(city==1)
	{
		cout<<" MUMBAI";
	}
	else if(city==2)
	{
		cout<<" PUNE";
	}
	else
	{
		cout<<"\n other city";
	}
	cout<<"\n--------------------------------------------";
} 
int main()
{
	exception_handling e;
	e.get_age();
	e.get_salary();
	e.get_car();
	e.get_city();
	e.display();
	return 0;
	
}
