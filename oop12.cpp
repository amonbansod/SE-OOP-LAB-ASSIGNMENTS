#include<iostream>
using namespace std;
#include<deque>
int main()
{
    deque<int>dq;
    int ch,element;
    go:
        cout<<"\n1>INSERT AT END";
        cout<<"\n2>INSERT AT FRONT";
        cout<<"\n3>DELETE AT END";
        cout<<"\n4>DELETE AT FRONT";
        cout<<"\n5> DISPLAY FRONT ELEMENT";
        cout<<"\n6> DISPLAY BACK ELEMENT";
        cout<<"\n7> DISPLAY SIZE ";
        cout<<"\n8> DISPLAY  ELEMENTS";
        cout<<"\n 9> EXIT";
        cout<<"\n ENter choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                cout<<"\n ENter element to insert at end";
                cin>>element;
                dq.push_back(element);
                break;
            }

        case 2:
            {
                cout<<"\n ENter element to insert at front";
                cin>>element;
                dq.push_front(element);
                break;
            }
        case 3:
            {
                cout<<"\n DELETING AT FRONT";
                int x=dq.front();
                cout<<"\n FRONT ELEMENT DELETED IS"<<x;
                dq.pop_front();
                break;
            }

        case 4:
            {
                cout<<"\n DELETING AT END";
                int x=dq.back();
                cout<<"\n last ELEMENT DELETED IS"<<x;
                dq.pop_back();

                break;
            }

        case 5:
            {
                cout<<"\n DISPLAY FRONT";
                int x=dq.front();
                cout<<x;
                break;
            }

        case 6:
            {
                cout<<"\n DELETING LAST";
                int x=dq.back();
                cout<<x;
                break;
            }

        case 7:
            {
                cout<<"\n SIZE OF DEQUE";
                int x=dq.size();
                cout<<x;
                break;
            }

        case 8:
            {
                for(int i=0;i<dq.size();i++)
                    cout<<"\n"<<dq[i];
                break;
            }
        case 9:
            {
                goto exit;
            }

        }
        goto go;
        exit:
            return 0;
}
