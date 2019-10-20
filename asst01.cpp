#include<iostream>
#include<string.h>
using namespace std;

class student
{
    public:

      int roll_no,sr_no;
      char name[20];
      char dob[10];
      char blood_grp;
      char address[20];
      int tele_no;
      int DL_no;
      static int count;


       void get_data();
       friend void display_data(student &obj);


       student()                                //DEFAULT CONSTRUCTOR
       {
         roll_no=0;
         cout<<"CONSTRUCTOR"<<endl;
         roll_no=count;
         count++;
        }


        ~student()                              //DESTRUCTOR
        {
            cout<<"DESTRUCTOR"<<endl;
            count++;
        }

        static void get_count()                 //MEMBER FUNCTION
        {
            cout<<"COUNT"<<count<<endl;
        }


        student(int roll_no)                    //PARAMETERISED CONSTRUCTOR
        {
            this->roll_no=roll_no;
        }


        student(student&obj)                    //COPY CONSTRUCTOR
        {
            roll_no=obj.roll_no;
            strcpy(name,obj.name);
            strcpy(dob,obj.dob);
            blood_grp=obj.blood_grp;
            strcpy(address,obj.address);
            tele_no=obj.tele_no;
            DL_no=obj.DL_no;
            sr_no=count;
            count++;
        }
};

         int student :: count=0;

        void student :: get_data()
        {
            cout<<"ENTER ROLL NUMBER: "<<endl;
            cin>>roll_no;
            cout<<"ENTER NAME: "<<endl;
            cin>>name;
            cout<<"ENTER DOB(IN WORDS): "<<endl;
            cin>>dob;
            cout<<"ENTER BLOOD GROUP: "<<endl;
            cin>>blood_grp;
            cout<<"ENTER ADDERSS: "<<endl;
            cin>>address;
            cout<<"ENTER TELEPHONR NUMBER: "<<endl;
            cin>>tele_no;
            cout<<"ENTER DL. NUMBER: "<<endl;
            cin>>DL_no;
        }

        void display_data(student&obj)
        {

            cout<<"ROLL NUMER:"<<obj.roll_no  <<endl;
            cout<<"SR. NUMBER:"<<obj.sr_no  <<endl;
            cout<<"NAME:"<<obj.name  <<endl;
            cout<<"DATE OF BIRTH:"<<obj.dob  <<endl;
            cout<<"BLOOD GROUP:"<<obj.blood_grp <<endl;
            cout<<"ADDRESS:"<<obj.address <<endl;
            cout<<"TELEPHONE NUMBER:"<<obj.tele_no <<endl;
            cout<<"DRIVING LICENCE NUMBER:"<<obj.DL_no <<endl;
        }

int main()
{
    student s1;
    student s2(s1);

    cout<<"ENTER DATA FOR FIRST STUDENT:"<<endl;
    s1.get_data();

    cout<<"ENTERED DATA IS:"<<endl;
   display_data(s1);

    //int *s[50];
    student*s[50];
    int i,n;
    cout<<"ENTER NUMBER OF STUDENTS:"<<endl;
    cin>>n;

        for(i=0;i<n;i++)
        {
            s[i]=new student();
        }

        for(i=0;i<n;i++)
        {
            s[i]->get_data();
        }

        for(i=0;i<n;i++)
        {
            display_data(*s[i]);
        }

        //for(i=0;i<n;i++)
        //{
            //delete(*s[i]);

       // }
    return 0;
}


