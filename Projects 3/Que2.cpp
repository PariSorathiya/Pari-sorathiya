#include <iostream>
#include <cmath> 
using namespace std;


int countDigits(int number) {
    number = abs(number);
    
    int count = 0;
    do {
        count++;
        number /= 10; 
    } while (number != 0);
    
    return count;
}

int main() {
    int number;
    
   
    cout << "Enter a number: ";
    cin >> number;
    cout << "The total number of digits in " << number << " is " << countDigits(number) << "." << endl;
    
    return 0;
}
