#include <iostream>
#include <climits> // Needed for findlimits()
#include <iomanip> // Needed for formattingOutput formatted I/O
#include <typeinfo> // Needed for finding types typeif().name()
#include <ctime> // Needed for displayDateTime
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

void formattingOutput(){
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

void quotientRemainder(){
    int i, y;
    cin >> i >> y;
    cout << i << " " << y << '\n';

    cout << i%y << " is remainder" << '\n';
    cout << i/y << " is quotient" << '\n';
}

void displayDateTime(){
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << "\n\n Display the Current Date and Time :\n";
    cout << "----------------------------------------\n";
    cout << " seconds = " << (tPtr->tm_sec) << endl;
    cout << " minutes = " << (tPtr->tm_min) << endl;
    cout << " hours = " << (tPtr->tm_hour) << endl;
    cout << " day of month = " << (tPtr->tm_mday) << endl;
    cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
    cout << " year = " << (tPtr->tm_year)+1900 << endl;
    cout << " weekday = " << (tPtr->tm_wday )<< endl;
    cout << " day of year = " << (tPtr->tm_yday )<< endl;
    cout << " daylight savings = " <<(tPtr->tm_isdst )<< endl;
    cout << endl;
    cout << endl;

    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
    cout << endl;
}

void checkTypeCasting(){
    cout << "\n\n Formatting the output using type casting:\n";
	cout << "----------------------------------------------\n"; 
	cout<<"Print floating-point number in fixed format with 1 decimal place: ";
    
    cout << fixed << setprecision(40);

    cout<<"\nTest explicit type casting :\n";
    int i1 = 22, i2 = 7;
    cout << i1 << " " << i2 << endl;    
    cout << (float) i1/i2 <<endl;
    cout << (double) i1/i2 <<endl;
    cout << i1 / (double)i2 << endl;  
 
    double d1 = 5.5, d2 = 6.6;
    cout<<"\nTest implicit type casting :\n" ;  
    cout << (int)d1 / i2 << endl;    
    cout << (int)(d1 / i2) << endl;   
    cout <<"\nint implicitly casts to double: \n";
    d1 = i1;    
    cout << d1 << endl;  // 4.0
    cout<<"double truncates to int!: \n";
    i2 = d2;            
    cout << i2 << endl;  // 6
}

int main(){
    checkTypeCasting();
}