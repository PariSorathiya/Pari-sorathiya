#include <iostream>
using namespace std;
#include <string.h>
#include <vector>




int main()
{
    //g++ -std=c++11 file.cpp
    vector <int> arrrr{12,23,12,54,23,54};

    
   arrrr.pop_back();

for (int i=0;i<arrrr.size();i++)
{
    cout << arrrr[i] << endl;
    
}


    return 0;
}