#include <iostream>
using namespace std;
#include <string.h>
#include <vector>




int main()
{
    vector <int> arr;
    vector <int> arrr(5,2);
    //g++ -std=c++11 file.cpp
    vector <int> arrrr{12,23,12,54,23,54};

    
    for (int i=0;i<2;i++)
{
    cout << arrr[i] << endl;
    
}

for (int i=0;i<5;i++)
{
    cout << arrrr[i] << endl;
    
}


    return 0;
}