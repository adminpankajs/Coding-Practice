#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> temp;
    vector< vector<string> > vec;
    temp = {"Espresso Coffee","Cappuccino Coffee","Latte Coffee"};
    vec.push_back(temp);
    temp = {"Plain Tea","Assam Tea","Ginger Tea","Cardamom Tea","Masala Tea","Lemon Tea","Green Tea","Organic Darjeeling Tea"};
    vec.push_back(temp);
    temp = {"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};
    vec.push_back(temp);
    temp = {"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};
    vec.push_back(temp);

    int flag = 0;
    char ch;
    cin>>ch;
    int op;
    switch(ch){
        case 'c':
            cin>>op;
            if(op<vec.at(0).size())
            {
                flag=1;
                cout<<"Welcome to CCD!"<<endl;
                cout<<"Enjoy your "<<vec.at(0).at(op-1)<<"!"<<endl;
            }
            break;
        case 't':
            cin>>op;
            if(op<=vec.at(1).size())
            {
                flag=1;
                cout<<"Welcome to CCD!"<<endl;
                cout<<"Enjoy your "<<vec.at(1).at(op-1)<<"!"<<endl;
            }
            break;
        case 's':
            cin>>op;
            if(op<=vec.at(2).size())
            {
                flag=1;
                cout<<"Welcome to CCD!"<<endl;
                cout<<"Enjoy your "<<vec.at(2).at(op-1)<<"!"<<endl;
            }
            break;
        case 'b':
            cin>>op;
            if(op<=vec.at(3).size())
            {
                flag=1;
                cout<<"Welcome to CCD!"<<endl;
                cout<<"Enjoy your "<<vec.at(3).at(op-1)<<"!"<<endl;
            }
            break;
        default:
            cout<<"INVALID INPUT!"<<endl;
    }
    if(flag==0)
    {
        cout<<"INVALID INPUT!"<<endl;
    }
    return 0;
}