#include<iostream>
using namespace std;

class sort
{
    int a[20];
    int i,j,n;
    int index_min,temp;

public:

    void get_data();
    void display_data();
    void sort_data();
};

void sort::get_data()
{
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY:"<<endl;
    cin>>n;
    cout<<"ENTER ARRAY ELEMENTS:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void sort::display_data()
{
    cout<<"ENTERED ARRAY ELEMENTS IS: ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

void sort::sort_data()
{
    for(i=0; i<n; i++)
    {
        index_min=i;

        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[index_min])
            {
                index_min=j;
            }
        }

        if(i!=index_min)
        {
            temp=a[i];
            a[i]=a[index_min];
            a[index_min]=temp;
        }


    }

    cout<<endl;
    cout<<"AFTER SORTING:             ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";

    }

    cout<<endl;
}


int main()
{
    sort s1;
    s1.get_data();
    s1.display_data();
    s1.sort_data();
    return 0;
}

/*

ENTER THE NUMBER OF ELEMENTS IN ARRAY:
5
ENTER ARRAY ELEMENTS:
1
3
5
4
2
ENTERED ARRAY ELEMENTS IS: 1    3       5       4       2

AFTER SORTING:             1    2       3       4       5


*/
