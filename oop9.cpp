#include<iostream>
#include<string.h>
using namespace std;
#include<fstream>
class student
{
	public:
		char name[50],a[50];
		int roll_no;
		float marks;
		void get_data();
		void put_data();
};
void student::get_data()                         //taking data from user
{
	cout<<"\n ENter the roll number => ";
	cin>>roll_no;
	cin.getline(a,50);
	cout<<"\n Enter the name        => ";
	cin.getline(name,50);
	cout<<"\n ENter the marks       => ";
	cin>>marks;
}
void student::put_data()                         //displaying data
{
	cout<<"\n-----------------------------------------";
	cout<<"\n  name        => "<<name;
	cout<<"\n  roll number => "<<roll_no;
	cout<<"\n  marks       => "<<marks;	
	cout<<"\n-----------------------------------------";
}
int main()
{
	student s;
	fstream file;
	int n,i;
	file.open("student.txt",ios::out|ios::binary);
	cout<<"\n Enter the total number of students";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s.get_data();
		file.write((char*)&s,sizeof(s));
	}
	file.close();
	
	file.open("student.txt",ios::in);
	while(file.read((char*)&s,sizeof(s)))
	s.put_data();
	file.close();
	return 0;
}
/*=*=*=*=***=*=*=*=*=*=*=*OUTPUT=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
kkw@kkw-HP-280-G2-MT-Legacy:~$ cd SEA63
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA63$ g++ stuedntfile.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA63$ ./a.out

 Enter the total number of students2

 ENter the roll number => 03

 Enter the name        => amon

 ENter the marks       => 00

 ENter the roll number => 100

 Enter the name        => bansod

 ENter the marks       => 00

-----------------------------------------
  name        => amon
  roll number => 03
  marks       => 0
-----------------------------------------
-----------------------------------------
  name        => bansod
  roll number => 100
  marks       => 0
*/
