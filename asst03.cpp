#include<iostream>
using namespace std;

class personal
{
protected:
            
         char name[10];
         int age;
         char DOB[20];
         char blood_grp[5];
         int mob_no;
         char address[20];
          
public:
                
         void get_pdata();
};

class professional
{
protected:
            int experiance;
            int n;
            int salary;
            char proj_name[20];
            float proj_durn;
            
public:
            
            void get_prodata();
};

class academic
{
protected:
            char qualification[20];
            char pass_univ[20];
            char name_clg[20];
            int pass_year;
            
public:
            
            void get_acaddata();
};


void personal::get_pdata()
{
    cout<<"ENTER YOUR NAME:"<<endl;
    cin>>name;
    cout<<"ENTER YOUR AGE:"<<endl;
    cin>>age;
    cout<<"ENTER YOUR DOB(IN WORDS & WITHOUT SPACES):"<<endl;
    cin>>DOB;
    cout<<"ENTER YOUR BLOOD GROUP:"<<endl;
    cin>>blood_grp;
    cout<<"ENTER YOUR MOBILE NUMBER:"<<endl;
    cin>>mob_no;
    cout<<"ENTER YOUR RESIDENTIAL ADDRESS(WITHOUT SPACES):"<<endl;
    cin>>address;
}

void professional::get_prodata()
{
    cout<<"ENTER YEARS OF WORKING EXPERIANCE:"<<endl;
    cin>>experiance;
    cout<<"ENTER SALARY:"<<endl;
    cin>>salary;
    cout<<"ENTER NUMBER OF PROJECTS DONE:"<<endl;
    cin>>n;
    cout<<"ENTER THE NAME OF THE LATEST PROJECT:"<<endl;
    cin>>proj_name;
    cout<<"ENTER PROJECT DURATION:"<<endl;
    cin>>proj_durn;
}

void academic::get_acaddata()
{
    cout<<"ENTER YOUR BASIC QUALIFICATION:"<<endl;
    cin>>qualification;
    cout<<"ENTER NAME OF PASSING UNIVERSITY(BACHELORS/MASTERS):"<<endl;
    cin>>pass_univ;
    cout<<"ENTER NAME OF COLLEGE:"<<endl;
    cin>>name_clg;
    cout<<"ENTER YEAR OF PASSING:"<<endl;
    cin>>pass_year;
}

class biodata:public personal,public professional,public academic
{
public:
        void input_data();
        void display();
};

void biodata::input_data()
{
     get_pdata();
     cout<<endl;
     get_prodata();
     cout<<endl;
     get_acaddata();
     cout<<endl;
}

void biodata::display()
{
    cout<<"PERSONAL DATA!!"<<endl<<endl;
    
    cout<<"NAME:  "<<name<<endl;
    
    cout<<"AGE:  "<<age<<endl;
    
    cout<<"DATE OF BIRTH:  "<<DOB<<endl;
    
    cout<<"BLOOD GROUP:  "<<blood_grp<<endl;
    
    cout<<"MOBILE NUMBER:  "<<mob_no<<endl;
    
    cout<<"RESIDENTIAL ADDRESS:  "<<address<<endl;
    
    cout<<endl;
    
    cout<<"PROFESSIONAL DATA!!"<<endl<<endl;
    
    
    cout<<"WORKING EXPERIANCE:"<<experiance<<endl;
    
    cout<<"SALARY:"<<salary<<endl;
    
    cout<<"NUMBER OF PROJECTS DONE:"<<n<<endl;
    
    cout<<"NAME OF THE LATEST PROJECT:"<<proj_name<<endl;
    
    cout<<"PROJECT DURATION:"<<proj_durn<<endl<<endl;
    
    
    cout<<"ACCADEMIC DATA!!"<<endl<<endl;
    
    
    cout<<"BASIC QUALIFICATION:"<<qualification<<endl;
    
    cout<<"NAME OF PASSING UNIVERSITY(BACHELORS/MASTERS):"<<pass_univ<<endl;
    
    cout<<"NAME OF COLLEGE:"<<name_clg<<endl;
    
    cout<<"YEAR OF PASSING:"<<pass_year<<endl;
   
}

int main()
{
    biodata b;
    b.input_data();
    b.display();
    return 0;
}
       
