#include <iostream>
#include <climits> // Needed for findlimits()
#include <iomanip> // Needed for formattingOutput formatted I/O
#include <typeinfo> // Needed for finding types typeif().name()
using namespace std;

void sizeFinder(){
    cout << sizeof(bool) << '\n'; 
    cout << sizeof(short) << '\n';  
    cout << sizeof(char) << '\n';
    cout << sizeof(int) << '\n';
    cout << sizeof(float) << '\n'; 
    cout << sizeof(double) << '\n'; 
    cout << sizeof(long) << '\n'; 
    cout << sizeof(long double) << '\n'; 
}

void findLimits(){
    cout << "\n\n Check the upper and lower limits of integer :\n";
	cout << "--------------------------------------------------\n";
	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
	cout << " The minimum limit of long long data type :             " << LLONG_MIN << endl;
	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
    cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
    cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;
   cout << endl;
}

void ifCrossingLimits(){

   float gpa = 4.69f;           // Need suffix 'f' for float
   long totalDrawan = 12047235L;     // Suffix 'L' for long
   long long balance = 995324987LL;  // Need suffix 'LL' for long long int 

    cout << gpa << '\n';
    cout << totalDrawan << '\n';
    cout << balance << '\n';
}

void arithmeticCalculations(){
    double i = 24.9482;
    bool j = 1;
    float k = 23.23;
    unsigned int l = 24;
    int y = 345;

    cout << l - y << '\n'; // it will print positive value because usinged will come back to it's limit.
    cout << i/k << '\n';
}

void checkOverFlowDuringArithmeicCalculations(){
    // int i = 450848983834983;
    // cout << i << '\n';

   int n2 = -2147483648;     // minimum range of integer
   cout <<" Underflow the range and set in maximum range : " << n2 - 1 << endl; 
   cout <<" Decreasing from its maximum range : " << n2 - 2 << endl; 
   cout <<" Product is : " << n2 * n2 << endl; // it's reaching to the zero
   cout << endl;

}

int formattingOutput(){
   cout << " The value of pi in scientific format is : " << typeid(fixed).name() << endl; //typeof scienctic is a custom class

    cout << "\n\n Formatting the output :\n";
	cout << "----------------------------\n"; 
   
   double pi = 3.14159265; // this is floating point number
   cout << fixed << setprecision(4); // number is set to display with 4 decimal places
   cout << " The value of pi : " << pi << endl;
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; // setw() sets the total width
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   
   cout << setfill('@'); // setfill() sets to fill the blanks with specified character
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   
//    cout << scientific;  // set value in scientific format with exponent
   cout << " The value of pi in scientific format is : " << pi << endl;
   
   bool done = 0; // this is boolean variable
   cout << " Status in number : " << done << endl;  
   cout << boolalpha;     // set output in alphabet true or false
   cout << " Status in alphabet : " << done << endl;
   cout << endl;

   return 0;
}

void inputReading(){
    int i, y;

    cin >> i >> y;
    cout << i + y << '\n';
}

void numSwap(){
    int i, y;
    cin >> i >> y;
    cout << i << " " << y << '\n';

    y = i+y; // i 4, y 5 // 9
    i = y-i; // 9-4 // i 5
    y = y-i; 

    cout << i << " " << y << '\n';
}

int main(){
    numSwap();
}