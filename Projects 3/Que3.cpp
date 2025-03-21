#include <iostream>
using namespace std;


int sumOffirstAndLastDigits(int number) {
    
    number = abs(number);
    
    int lastDigit = number % 10; 
    
    
    while (number >= 10) {
        number /= 10;
    }
    int firstDigit = number; 
    
    
    return firstDigit + lastDigit;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "The sum of the first and last digits is: " << sumOffirstAndLastDigits(number) << endl;
    
    return 0;
}
