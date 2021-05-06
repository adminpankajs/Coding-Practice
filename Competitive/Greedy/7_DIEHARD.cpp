#include<iostream>
#include<conio.h>
#include<set>
using namespace std;

int main()
{
    int size;
    int tempflag = 0;
    set<int, greater<int> > myset;
    set<int, greater<int> >::iterator itr;
    int mypos = 0;
    cout<<"Enter size : ";
    cin>>size;
    int myarr[size];
    for (int i = 0; i < size; i++)
    {
        myarr[i] = -20;
    }
    
    int i=0;
    int time = 0;
    int newflag = 0;
    while(myarr[0]<4)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if(newflag==0)
            {
                if(mypos==0)
                {
                    if(time==0)
                    {
                        myarr[mypos]=0;
                        myset.insert(0);
                        cout<<"POSITION 01 := "<<myarr[mypos]<<endl;;
                        newflag = 1;
                    }
                    else if(tempflag==0)
                    {
                        myset.erase(myarr[mypos]);
                        cout<<"SET value erased : "<<myarr[mypos];
                        myarr[mypos]++;
                        myset.insert(myarr[mypos]);
                        cout<<"POSITION 02 := "<<myarr[mypos]<<endl;
                        tempflag=1;
                    }
                }

            }
            if(myset.find(j)==myset.end())
            {
                if(myarr[mypos]!=j-1 && myarr[mypos]!=j+1)
                {
                    // cout<<myarr[0]<<" "<<myarr[1]<<" "<<myarr[2]<<" "<<myarr[3]<<endl;
                    mypos++;
                    myarr[mypos] = j;
                    myset.insert(j);
                    flag=1;
                    cout<<"SET :::: ";
                    for ( itr = myset.begin(); itr != myset.end(); itr++)
                    {
                        cout<<*itr<<" ";
                    }
                    cout<<endl;
                    cout<<"Pos "<<mypos<<" : "<<myarr[mypos]<<endl;
                    cout<<myarr[0]<<" "<<myarr[1]<<" "<<myarr[2]<<" "<<myarr[3]<<endl;
                    // j=0;
                }
            }
            time++;
        }
        if(flag!=1)
        {
            int myflag = 0;
            while(myflag==0)
            {
                myset.erase(myarr[mypos]);
                cout<<"SET value erased : "<<myarr[mypos];
                cout<<"SET :::: ";
                for ( itr = myset.begin(); itr != myset.end(); itr++)
                {
                    cout<<*itr<<" ";
                }
                cout<<endl;
                if(myarr[mypos]+1 == size)
                {
                    myarr[mypos] == 0;
                    mypos--;
                    cout<<"BACKTRACKED TO : "<<mypos<<endl;
                    if(mypos==0)
                    {
                        newflag=0;
                        myflag=1;
                        tempflag=0;
                    }
                }
                else
                {
                    if(myset.find(myarr[mypos]+1)==myset.end())
                    {
                        
                        if(myarr[mypos]+1!=myarr[mypos-1]-1 && myarr[mypos]+1!=myarr[mypos-1]+1)
                        {
                            myarr[mypos]++;
                            myset.insert(myarr[mypos]);
                            myflag=1;
                            cout<<"new mypos"<<mypos<<":"<<myarr[mypos]<<endl;
                        }
                        else
                        {
                            if(mypos==0)
                            {
                                tempflag=0;
                                newflag=0;
                                break;
                            }
                            myarr[mypos]++;
                            cout<<"new mypos for search"<<mypos<<":"<<myarr[mypos]<<endl;
                        }
                    }
                    else
                    {
                            if(mypos==0)
                            {
                                tempflag = 0;
                                newflag=0;
                                break;
                            }
                            myarr[mypos]++;
                            cout<<"new---- mypos for ieration"<<mypos<<myarr[mypos]<<endl;
                    }
                }
            }
            
        }
        else
            flag=0;
        // if(mypos==size-1)
        // {
        //     for (int i = 0; i < size; i++)
        //     {
        //         cout<<myarr[i]<<" ";
        //     }
            
        // }
        // cout<<"END"<<myarr[0]<<" "<<myarr[1]<<" "<<myarr[2]<<" "<<myarr[3]<<endl;
        cout<<"SET :::: ";
        for ( itr = myset.begin(); itr != myset.end(); itr++)
        {
            cout<<*itr<<" ";
        }
        cout<<endl<<endl<<endl;
        getch();
    }
    return 0;
}