using namespace std;
#include <iostream>
//********************
// Declare Function Prototypes
//********************

//prottype to enter numbers
int getTwoValues(int &begin, int &end);
//prottype to find next prime number
int getNextPrime(int begin);
//prottype to find previous prime number
int getPrevPrime(int end);

// ******************************
// Implement all your functions here
// ******************************
//function to enter two numbers
int getTwoValues(int &begin, int &end){

    //check if the first number is less than the second number
    cout << "Enter two integers: ";
    cin >> begin >> end;
    if(begin > end) {
        cout << "Error: The first number must be less than the second number." << endl;
        return -1; // Error code
    }
    return 0;
    } 

//function to find the next prime number
int getNextPrime(int begin){
    // Check if the number is less than 2
    if (begin < 2) return 2; // The first prime number is 2
    bool isPrime = false;
    // Check if the number is prime, or get next prime number if false
    while (!isPrime) {
        begin++;
        isPrime = true;
        for (int i = 2; i <= begin / 2; i++) {
            if (begin % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return begin;
}

//function to find the previous prime number
int getPrevPrime(int end){
    if (end < 3) return -1; // No prime number before 2
    bool isPrime = false;
    while (!isPrime) {
        //decrement the number to find the previous prime number
        end--;
        //check if the number is prime
        isPrime = true;
        for (int i = 2; i <= end / 2; i++) {
            if (end % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return end;
}