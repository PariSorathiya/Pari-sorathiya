#include <iostream>
using namespace std;
#include <string.h>
#include <vector>




int main()
{
    //g++ -std=c++11 file.cpp
    vector <int> arrrr{12,23,12,54,23,54};

    
   arrrr.push_back(33);

for (int i=0;i<arrrr.size();i++)
{
    cout << arrrr[i] << endl;
    
}


cout << arrrr.empty() << endl;
cout << arrrr.at(1) << endl;

    return 0;
}