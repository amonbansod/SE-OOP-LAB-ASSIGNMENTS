// CPP PROGRAM USING PURELY VIRTUAL FUNCTIONS 

#include<iostream>
using namespace std;
class publication
{
	protected:
		char title[10];
		float price;
	public:
		virtual void read()=0;
		virtual void display()=0;
};
class book: public virtual  publication
{
	int pages;
	public:
		void read();
		void display();
};
class tape: public virtual publication
{
	float time;
	public:
		void read();
		void display();
};
void book::read()
{
	cout<<"\n ENter the title of book";
	cin>>title;
	cout<<"\n ENter price of book";
	cin>>price;
	try
	{
		if(price>=500)
		{
			throw(price);
		}
	}
	catch(float)
	{
		cout<<"\n price not affordable";
		cout<<"\n ENter price again";
		cin>>price;
	}
	cout<<"\n Enter pages";
	cin>>pages;
}
void book::display()
{
	cout<<"\n title:"<<title;
	cout<<"\n price:"<<price;
	cout<<"\n pages:"<<pages;
}
void tape::read()
{
	cout<<"\n ENter the title of book";
	cin>>title;
	cout<<"\n ENter price of book";
	cin>>price;
	cout<<"\n ENter time";
	cin>>time;
	try
	{
		if(time>=60)
		{
			throw(time);
			}
	}
	catch(float)
	{
		cout<<"\n time is  not suitable";
		cout<<"\n ENter time again";
		cin>>time;
	}
}
void tape::display()
{
	cout<<"\n title:"<<title;
	cout<<"\n price:"<<price;
	cout<<"\n time:"<<time;

}
int main()
{
	int j,ch,n;
	publication *p[50];
	j=0;
	do
	{
		cout<<"\n 1>book   2>tape    3>display  4>exit";
		cout<<"\n Enter choice";
		cin>>ch;
	switch(ch)
	{
		case 1:
		{
			cout<<"\nBOOK";
			p[j]=new book();
			p[j]->read();
			j++;
			break;
		}
		case 2:
		{
			cout<<"\nTAPE";
			p[j]=new tape();
			p[j]->read();
			j++;
			break;
		}
		case 3:
		{
			cout<<"\n Display";
			n=j;
			for(j=0;j<n;j++)
			{
				p[j]->display();
			}
			break;
		}
	}
	}while(ch<4);
return 0;
}
/*1>book   2>tape    3>display
 Enter choice1

BOOK
 ENter the title of bookpotter

 ENter price of book300

 Enter pages122

 1>book   2>tape    3>display
 Enter choice3

 Display
 title:potter
 price:300
 pages:122
 1>book   2>tape    3>display
 Enter choice2

TAPE
 ENter the title of bookharry

 ENter price of book400

 ENter time32

 1>book   2>tape    3>display
 Enter choice3

 Display
 title:potter
 price:300
 pages:122
 title:harry
 price:400
 time:32
 1>book   2>tape    3>display 4>exit
 Enter choice 4
*/

