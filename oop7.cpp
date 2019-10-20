// C++ PROGRAM TO SORT INTEGER ,FLOAT   AND  CHARACTER  DATA TYPE          
#include<iostream>
using namespace std;
template<class T>
class Sort
{
	T array[10],temp;
	int i,j,n,minindex;
	public:
		void read();
		void display();
		void sort_dis1();
		void sort_dis2();
};
template<class T>
void Sort<T>::read()                                                  //READ FUNCTION
{
	
	cout<<"\n ENter total number of terms";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n enter number";
		cin>>array[i];
	}
}
template<class T>
void Sort<T>::display()                                               //DISPLAY FUNCTION
{
	
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<array[i];
	}
}
template<class T>
void Sort<T>::sort_dis1()					     // SORTING
{
	for(i=0;i<n;i++)
	{
		minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[minindex])
			{
				minindex=j;	
			}	
		}
		if(minindex!=i)
		{
			temp=array[i];
			array[i]=array[minindex];
			array[minindex]=temp;
		}
	}
}
template<class T>
void Sort<T>::sort_dis2()
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}
int main()
{
	int ch;
	
	Sort<int>i1;
	Sort<float>f;
	Sort<char>c;
	Sort<double>d;
	cout<<"\n 1>integer data          2>float data       3>character data      4> double type data  5>exit";
	go:
	cout<<"\n ENter choice";
	cin>>ch;
	cout<<"\n---------------------";
	
		switch(ch)
		{
			case 1:
			{	
				cout<<"\n Sorting of integer type data";
				i1.read();
				i1.display();
				cout<<"\n After sorting";
				cout<<"\n BY USING SELECTION SORT";
				i1.sort_dis1();
				i1.display();
				cout<<"\n BY USING BUBBLE SORT";
				i1.sort_dis2();
				i1.display();
				cout<<"\n--------------------------------------------------------";
				break;
			}
			case 2:
			{
				cout<<"\n Sorting of float type data";
				f.read();
				f.display();
				cout<<"\n After sorting";
				cout<<"\n BY USING SELECTION SORT";
				f.sort_dis1();
				f.display();
				cout<<"\n BY USING BUBBLE SORT";
				f.sort_dis2();
				f.display();
				cout<<"\n--------------------------------------------------------";
				break;	
			}
			case 3:
			{
				cout<<"\n Sorting of character type data";
				c.read();
				c.display();
				cout<<"\n After sorting";
				cout<<"\n BY USING SELECTION SORT";
				c.sort_dis1();
				c.display();
				cout<<"\n BY USING BUBBLE SORT";
				c.sort_dis2();
				c.display();
				cout<<"\n--------------------------------------------------------";
				break;		
			}
			case 4:
			{
				cout<<"\n Sorting of double type data";
				d.read();
				d.display();
				cout<<"\n After sorting";
				cout<<"\n BY USINGSELECTION SORT";
				d.sort_dis1();
				d.display();
				cout<<"\n BY USING BUBBLE SORT";
				d.sort_dis2();
				d.display();
				cout<<"\n--------------------------------------------------------";
				break;		
			}
			case 5:
			{
				goto exit;
			}
		}
		goto go;
		exit:
	
	
	
	return 0;
}
/* O U T P U T
 1>integer data          2>float data       3>character data      4> double type data  5>exit
 ENter choice1

---------------------
 Sorting of integer type data
 ENter total number of terms3

 enter number2

 enter number6

 enter number4

2
6
4
 After sorting
 BY USING SELECTION SORT
2
4
6
 BY USING BUBBLE SORT
2
4
6
--------------------------------------------------------
 ENter choice2

---------------------
 Sorting of float type data
 ENter total number of terms3

 enter number2.5 

 enter number3.6

 enter number7.5

2.5
3.6
7.5
 After sorting
 BY USING SELECTION SORT
2.5
3.6
7.5
 BY USING BUBBLE SORT
2.5
3.6
7.5
--------------------------------------------------------
 ENter choice3

---------------------
 Sorting of character type data
 ENter total number of terms3

 enter numberq

 enter numberv

 enter numberb 

q
v
b
 After sorting
 BY USING SELECTION SORT
b
q
v
 BY USING BUBBLE SORT
b
q
v
--------------------------------------------------------
 ENter choice4

---------------------
 Sorting of double type data
 ENter total number of terms3

 enter number2233

 enter number456

 enter number1000

2233
456
1000
 After sorting
 BY USINGSELECTION SORT
456
1000
2233
 BY USING BUBBLE SORT
456
1000
2233
--------------------------------------------------------
 ENter choice5

*/
