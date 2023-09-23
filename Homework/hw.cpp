#include <iostream>
using namespace std;

int main(){
    //Print number from 280 to 250 with the help of for loop.

    // for(int i = 280; i >= 250; i--){
    //     cout << i <<" " ;
    // }
    // cout << endl <<"\n";


    //Print char from ‘A’ to ‘Z’ with the help of a for loop

    // char name;
    // for(name = 'A'; name <= 'Z'; name++){
    //     cout << name <<" " << endl;
    // }
    // cout << endl;

    // Print char from ‘Z’ to ‘A’ with the help of a for loop

    // char name;
    // for(name = 'Z'; name >= 'A'; name--){
    //     cout <<name <<" ";
    // }


    // There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP

    // for(int i = 220; i <= 730; i += 7){
    //     cout << i <<" ";
    // }


    // Print Sum of square of first n natural number.
    // sum of n natural num -> n * (n + 1) * (2*n + 1) / 6

    // int n, i , sum = 0;
    // cout <<"ENter the number : ";
    // cin >> n;
    // for(i = 1; i<= n; i++){
    //     sum = sum + i*i;
    // }
    // cout << sum;

    // Print Sum of cube of first n natural number

    // int n , i , sum = 0;
    // cout <<" Enter the number: "; cin >> n;

    // for(i = 1; i <= n; i++){
    //     sum = sum + (i*i*i);
    // }
    // cout << sum;


    //Print n’th Fibonacci number.

    int n , i, last = -1, prev = 1, curr;
    cout <<"Enter the number: "; cin >> n;

    for(i = 1; i <= n ;i++)
    {
        curr = last + prev;
        cout << curr <<" ";
        last = prev;
        prev = curr;
    }

    return 0;
}