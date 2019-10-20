
#include<iostream>
using namespace std;
//#include<fstream>
#include<algorithm>
#include<vector>
class item
{
    public:
    char name[50];
    int quantity;
    int cost;
    int code;
    bool operator==(const item &i1)
    {
        if(code==i1.code)
            return 1;
        return 0;
    }
    bool operator<(const item &i1)
    {
        if(code<i1.code)
            return 1;
        return 0;
    }

};
vector<item>o1;
    void print(item &i1);
    void display();
    void insert();
    void search();
    void dlt();
void  insert()
{
    item i1;
    cout<<"\n NAME:";
    cin>>i1.name;
    cout<<"\n QUANTITY";
    cin>>i1.quantity;
    cout<<"\n CODE";
    cin>>i1.code;
    cout<<"\n COST";
    cin>>i1.cost;
    o1.push_back(i1);
}
void search()
{
    vector<item>::iterator p;
    item i1;
    cout<<"\n ENTRE CODE";
    cin>>i1.code;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end())
        cout<<"\n NOT FOUND";
    else
    {
        cout<<"\n FOUND";
    }
}
void dlt()
{
    vector<item>::iterator p;
    item i1;
    cout<<"\n ENTRE code";
    cin>>i1.code;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end())
    {
        cout<<"\n NOT FOUND";
    }
    else
    {
        o1.erase(p);
        cout<<"\n FOUND AND DELETED";
    }
}
void display()
{
    for_each(o1.begin(),o1.end(),print);
    cout<<"\n";
}
void print(item &i1)
{
//    item i1;
    cout<<i1.name<<"\n";
    cout<<i1.code<<"\n";
    cout<<i1.quantity<<"\n";
    cout<<i1.cost<<"\n";
}

int main()
{
    item i;
    int ch;
    do
    {
        cout<<"1>insert 2>display 3>search 4>sort 5>delete 6>exit";
        cout<<"\n ENter choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                insert();
                break;
            }
        case 2:
            {
                display();
                break;
            }
        case 3:
            {
                search();
                break;
            }
        case 4:
            {
                //vector<item>o1;
                sort(o1.begin(),o1.end());
                break;
            }
        case 5:
            {
                dlt();
                break;
            }
        case 6:
            {
                exit(0);
            }
        }
    }while(ch!=7);

}
