#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec_1;
    // vector<int> vec_2(4,50);
    // vector<int> vec_3 = {1,2,3,4,5};
    // vector<int> vec_4 {1,2,3,4,5};


    // vec_2[0] = 10;
    // vec_2.at(1) = 20;
    // cout<<"Size of vec_2: "<<vec_3.size()<<endl;
    // cout<<"Capacity of vec_2: "<<vec_3.capacity()<<endl;

    // vec_3.push_back(20);

    // cout<<"Size of vec_2: "<<vec_3.size()<<endl;
    // cout<<"Capacity of vec_2: "<<vec_3.capacity()<<endl;
    for(int i=0; i<33; i++)
    {
        vec_1.push_back(i);
        cout<<vec_1.size()<<", "<<vec_1.capacity()<<endl;
    }
    vec_1.shrink_to_fit();
    cout<<vec_1.size()<<", "<<vec_1.capacity()<<endl;
    return 0;
}