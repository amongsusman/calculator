/*
Name: Tyler Zhang
Program Name: Make a Calculator
Date:  9/12/24
Extra: Applies bitwise xor on the numbers
*/
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "What is the first number you want to enter?" << "\n";
    // Gets input for the first number
    cin >> x;
    cout << "What is the second number you want to enter?" << "\n";
    cin >> y;
    cout << "Your numbers added together equals " << (x + y) << "\n";
    cout << "Your second number subtracted from your first number equals " << (x - y) <<  "\n";
    cout << "Your numbers multiplied together equals " << (x * y) << "\n";
    // Rounds it to 2 decimal places
    cout << "Your first number divided by the second number equals " << ((int) ((x / y) * 100.00 + 0.5) / 100.00) << "\n";
    cout << "Your first number MOD the second number equals " << ((int) x % (int) y) << "\n";
    // Extra:

    cout << "Your first number XORed (Bitwise XOR) the second number equals " << ((int) x ^ (int) y) << "\n";

    // Pre-increments by 1 so that it gives the number + 1 instead of adding 1 to the number after the statement is compiled (++x instead of x++)
    cout << "Your first number incremented by 1 is " << (++x) << "\n";
    cout << "Your second number decremented by 1 is " << (--y) << "\n";
}