#include <iostream>

using namespace std;

int main(){
    // Three long integers
    long long int a, b, c;

    // Taking input from the user
    cout<<"Enter three numbers->"<<endl;
    cin>>a>>b>>c;

    // Using the Ternary Operator to find the greatest among the three numbers
    double greatest = (a>b)?((a>c)?a:c):((b>c)?b:c);

    // Setting the precision
    cout.precision(20);

    // Printing the answer
    cout<<"The largest number among these three numbers is->"<<greatest<<endl;
    
    return 0;
}