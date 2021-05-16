#include <iostream>
#include <iomanip>
#include <limits>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
	int l;
    double p;
    string o;

	cin>>l;
	cin>>p;
	cin.ignore();
	getline(cin,o);

cout<<i+l<<endl;
cout.precision(1);
cout<<fixed<<p+d<<endl;

s.append(o);
cout<<s<<endl;
}

    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
