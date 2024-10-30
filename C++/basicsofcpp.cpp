/*
* @author igmansvi
* @details includes basics of cpp
*/
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello World";
//     return 0;
// }


// here [#include <iostream>] is a header file library that lets us work with
// input and output objects, as we used [cout] here;
// this adds functionality to programs.

// [using namespace std] means that we can use names for objects and variables
// from the standard library.

// it ignores blank spaces. [int main() {}] is a function and code inside of 
// {} will be executed.

// [cout] (pronounced "see-out") is an object used with insertion operator [<<],
// to output/print text.

// [return 0] ends the main function.


// printing texts...
// [
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello ";
//     cout << "Let's learns C++";
//     return 0;
// }
// ]


// adding new lines in text [\n]
// adding horizontal tabs in text [\t]
// [
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello \n";
//     cout << "Let\'s learn C++\n";
//     return 0;
// }
// ]
// these are  known as -escape sequence-.


// comments
// [
// #include <iostream>
// using namespace std;
// int main() {
//     //this is single line comment.
//     /*this is multi-line comments and
//      any text in between this will be ignored.*/
//     cout << "Hello \n";
//     cout << "Let\'s learn C++\n";
//     return 0;
// }
// ]


// variables
// there are multiple type of variables which are defined using
// different -keywords-.
// [int - stores integers]
// [float - stores floating point numbers till 6-7 decimals]
// [double - stores floating point numbers till 15 decimels]
// [char - stores single characters, letter, number or ASCII values and surrounded by single quotes]
// [string - stores texts and surrounded by double quotes]
// [bool - stores values with two states = {true : false}]


// working with variables
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 21;
//     int b = 43;
//     int sum = a+b;
//     cout<< sum;
//     return 0;
// }
// ]


// for comibining text and variables we seperate
// the text with [<<] and variables.
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 21;
//     int b = 43;
//     int sum = a+b;
//     cout<< "the value of sum is \t"<<sum;
//     return 0;
// }
// ]


// mutiple variable declaration
// you can declare more than one variable in the same line
// and separate them with comma(,).
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int x=5, y=7, z=9;
//     cout << x + y + z << "\n";
//     //declaration in one line
//     //declaration in one line and assign the values afterwards
//     int a, b, c;
//     a = 6;
//     b = 8;
//     c = a + b;
//     cout << c << "\n";
//     //declaration of all variables with same value
//     int m, n, o;
//     m = n = o = 7;
//     cout << m << " " << n << " " << o ;
//     return 0;
// }
// ]


// {identifiers - unique names for different variables.}
// these are case-sensitive and must begin with letters or underscores(_)
// cannot contain whitespaces or special characters
// cannot use reserved keywords for variable declaration

// Note: recommendedd to use descriptive names in order to create
// understandable and maintainable code. 


// [const - it is the constant decalaration keywords used to declare constants]
// they are read-only and cannot cannot changes existing values

// Input and Output
// [cout - used to output values]
// [cin - used to get input data]
// [ [<< - this is the insertion operator], [>> - this is the extraction operator] ]

// [
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cout << "Enter a number: ";
//     cin >> a;
//     cout << "Enter another number: ";
//     cin >> b;
//     c = a + b;
//     cout << "Sum is : " << c;
//     return 0;
// }
// ]


// data types
// [bool, char, int, float, double]
// size
// [(1 byte), (1 byte), (2 or 4 bytes), (4 bytes), (8 bytes)]
// repectively

// [
// #include <iostream>
// using namespace std;
// int main() {
//     int myNum = 7;
//     double myDoubleNum = 7.77;
//     bool myBool = true;
//     char myChar = 'A';
//     string myLetter = "Hello World";
//     cout << myNum << myDoubleNum << myBool << myChar << myLetter;
//     return 0;
// }
// ]


// Numeric types
// [int, float, double]
// scientific number with an "e to indicate power of 10" can also be added to float or double;


// Boolean types
// [true{1}, false{0}]
// value returned is 1 or 0.


// Character types
// [char]
// single character stored in single quote.


// String types
// [string]
// stored as a sequence of characters enclosed by double quotes.
// this is not a built-in type so to use it we use [#include <string>]
// this header provides the library.


// Operators
// [Arthmetic, Assignment, Comparison, Logical, Bitwise]

// Arthmetic operators
// [+, -, *, /, %, ++, --]
// [(returns sum),
// (returns subtract),
// (returns multipy),
// (returns division),
// (returns remainder),
// (returns value + 1),
// (returns value - 1)]
// repectively

// Assignment operators
// [=, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=]
// these are assiging with addition to respective operators

// Comparison operators
// [==, !=, >, <, >=, <=]
// [(equal to),
// (not equal),
// (greater than),
// (less than),
// (greater than or equal to),
// (less than or equal to)]
// repectively
// return {true : false}

// Logical operators
// [&&(and), ||(or), !(not)]
// return {true : false}


// Working with strings

// [#include <string>] - library for using strings

// [
// #include <string>
// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;
//     string greeting = "Hello ";
//     cout << greeting + name << "\n"; //using [+] operator for concatenation
//     cout << greeting.append(name); //using [append()] function to concatenation
//     return 0;
// }
// ]

// Note: [+] operator is used for addition and concatanetion purposes
// but addition of string with int data types raises an error.

// [length() or size() - function used to get length of string]
// [
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout << "Enter the string: ";
//     cin >> str;
//     cout << str.length() <<"\n";
//     cout << str.size();
//     return 0;
// }
// ]

// Access strings and modifying it;
// Using index; starts from 0;
// [
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     int i;
//     cout << "Enter the string: ";
//     cin >> str;
//     cout << "Enter the index: ";
//     cin >> i;
//     cout << "Given character at provided index is: " << str[i] << "\n";
//     char chr;
//     int c;
//     cout << "Enter the character to modify in string: ";
//     cin >> chr;
//     cout << "Enter the character index to modify it: ";
//     cin >> c;
//     str[c] = chr;
//     cout << "String after modification: " << str;
//     return 0;
// }
// ]

// When using [cin] a (whitespace, tab etc) considered as terminating character
// so once used only stores a single word entered.
// To take multiple words use [getline(cin, variable)] instead of [cin].
// [
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout << "enter a sentence: ";
//     getline(cin, str);
//     cout << "Here comes the output as whole sentence" << "\n" << str;
// }
// ]

// String Namespace
// It's upto us to use it or not
// [using namespace std] - just a standard library
// can be replaced with - [std::{object or type}]
// [
// #include <iostream>
// #include <string>
// //using namespace std; -- here we will replace this with std inside of function
// int main() {
//     std::cout << "hello";
//     return 0;
// }
// ]


// Math - functions to perform mathematical tasks on numbers.

// [min] - used to finf minimum value, can be performed only on two numbers
// [max] - used to find maximum value, can be performed only on two numbers
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cin >> a;
//     cin >> b;
//     int x, y;
//     cin >> x;
//     cin >> y;
//     cout << max(a,b) << "\n" << min(x,y);
//     return 0;
// }
// ]

// Other function can be found in [<cmath>] library
// abs(x)	Returns the absolute value of x
// acos(x)	Returns the arccosine of x
// asin(x)	Returns the arcsine of x
// atan(x)	Returns the arctangent of x
// cbrt(x)	Returns the cube root of x
// ceil(x)	Returns the value of x rounded up to its nearest integer
// cos(x)	Returns the cosine of x
// cosh(x)	Returns the hyperbolic cosine of x
// exp(x)	Returns the value of Ex
// expm1(x)	Returns ex -1
// fabs(x)	Returns the absolute value of a floating x
// fdim(x, y)	Returns the positive difference between x and y
// floor(x)	Returns the value of x rounded down to its nearest integer
// hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
// fma(x, y, z)	Returns x*y+z without losing precision
// fmax(x, y)	Returns the highest value of a floating x and y
// fmin(x, y)	Returns the lowest value of a floating x and y
// fmod(x, y)	Returns the floating point remainder of x/y
// pow(x, y)	Returns the value of x to the power of y
// sin(x)	Returns the sine of x (x is in radians)
// sinh(x)	Returns the hyperbolic sine of a double value
// tan(x)	Returns the tangent of an angle
// tanh(x)	Returns the hyperbolic tangent of a double value
// respective functions are found and can be used for calculations.

// [
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int x;
//     cout << "enter a number: ";
//     cin >> x;
//     cout << sqrt(x) << "\n" << log(x);
//     return 0;
// }
// ]


// Booleans
// return type {true(1) : false(0)}

// [
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     bool isCodingFun = true;
//     bool isCodingBoring = false;
//     cout << isCodingFun << "\n" << isCodingBoring;
//     return 0;
// }
// ]

// Boolean Expression
// Can be used for camparison and other stuffs

// [
// #include <iostream>
// using namespace std;
// int main() {
//     int x, y;
//     cin >> x;
//     cin >> y;
//     if (x > y) {
//         cout << "x is greater than y\n";
//     } else {
//         cout << "y is greater than or equal to x\n";
//     } //using conditional statments improves the output.
//     return 0;
// }
// ]


// Conditions
// [if, else, else if, switch]

// [if - code executed if condition is true]
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout << "Enter the number: ";
//     cin >> a;
//     cout << "Enter the number: ";
//     cin >> b;
//     if (a == b) {
//         cout << "Numbers aer equal!"; //this block only runs when condition is true;
//     }
//     return 0;
// }
// ]

// [else - code executedd if [if] condition is false]
// [
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Enter the time in hr: ";
//     int t;
//     cin >> t;
//     if (t > 18) {
//         cout << "It's dark now!";
//     } else {
//         cout << "Sun is not down yet!";
//     }
//     return 0;
// }
// ]

// [else if - code specified to run if condition before it comes false]
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cout << "Enter the time in hr: ";
//     cin >> t;
//     if (t < 10) {
//         cout << "Good Morning!";
//     } else if (t > 18) {
//         cout << "Good Evening!";
//     } else {
//         cout << "Good Afternoon!";
//     }
//     return 0;
// }
// ]

// Short-hand [if - else] - Ternary Operator
// syntax - [variable = (condition) ? expressionTrue : expressionFalse]
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cout << "enter the time in hr: ";
//     cin >> t;
//     string out = (t > 18) ? "good evening" : "good day";
//     cout << out;
//     return 0;
// }
// ]


// Switch [switch - to select one of many code blocks to be executed]
// [switch, case, break, default];
// [switch - used to add expression that to be evaluated]
// [case - the expression that to be matched with switch expression]
// [break - used to exit from loop or switch statement]
// [default - when no match found between cases and switch expression]

// [
// #include <iostream>
// using namespace std;
// int main() {
//     int d;
//     cout << "Enter the no:  ";
//     cin >> d;
//     switch (d) {
//   case 1:
//     cout << "Monday";
//     break;
//   case 2:
//     cout << "Tuesday";
//     break;
//   case 3:
//     cout << "Wednesday";
//     break;
//   case 4:
//     cout << "Thursday";
//     break;
//   case 5:
//     cout << "Friday";
//     break;
//   case 6:
//     cout << "Saturday";
//     break;
//   case 7:
//     cout << "Sunday";
//     break;
//   default:
//     cout << "this number doesn't matches to any day in week";
//     }
// return 0;
// }
// ]


// While - [while - code executes until condition is true]
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int i=0, j;
//     cout << "Enter the number: ";
//     cin >> j;
//     while (i < j) {
//         cout << i << "\t";
//         i++;
//     }
//     return 0;
// }
// ]

// Do - while [do/while - code executes till the condition is true]
// the loop will be executed at least once
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int i = 0, j;
//     cout << "Enter the number: ";
//     cin >> j;
//     do {
//         cout << i << "\t";
//         i++;
//     }
//     while(i < j);
//     return 0;
// }
// ]


// For - [for - to execute code till condition meets]
// syntax - [for (statement 1; statement 2; statement 3) {}]
// {statement 1} - executed before execution of code block;
// {statement 2} - condition for executing code block
// {statement 3} - executes every time code runs
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int j;
//     cout << "Enter the number: ";
//     cin >> j;
//     for (int i = 0; i < j; i++) {
//         cout << i << "\t";
//     }
//     return 0;
// }
// ]

// Print even numbers between user entered number
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int i = 0; i < n; i += 2) {
//         cout << i << "\t";
//     }
//     return 0;
// }
// ]

// Print odd numbers between user entered number
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int i = 1; i < n; i+=2) {
//         cout << i << "\t";
//     }
//     return 0;
// }
// ]

// Nested Loops
// the inner loops executes once for each iteration of outer loop
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int i = 0; i <= n; i++) {
//         cout << "Outer: " << i << "\n";
//         for (int j = 0; j <= i; j++) {
//             cout << " Inner :" << j << "\n";
//         }
//     }
//     return 0;
// }
// ]

// [for - each] - to loop through elements of a array
// syntax - [for (type variablename : arrayName) {}]
// [
// #include <iostream>
// using namespace std;
// int main() {
//     string arr[] = {"C++", "JavaScript", "Python"};
//     for (string i : arr) {
//         cout << i << "\n";
//     }
//     return 0;
// }
// ]


// Break and Continue Statements
// [break] statement is used in looping control statements like while, do-while, for, and switch
// it terminates the loop where it is placed
// [continue] statement is used in looping control statements like for, while, do-while. It skips
// the current iteration of the loop and continues with the next iteration
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int n, b, c;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "till which number you want to continue\n";
//     cout << "Please enter that number: ";
//     cin >> c;
//     cout << "which number to skip: ";
//     cin >> b;
//     for (int i = 0; i < n; i++) {
//         if (i == b) {
//             continue;   //it skips loop at b
//         } else if (i == c) {
//             break;  //it breaks loop at c
//         }
//         cout << i << "\t";
//     }
//     return 0;
// }
// ]


// Arrays - stores multiple values in single variable
// [type name[i] = {elements} ] - i refer to total number of elements in the array

// Working with Arrays
// index starts from 0

// [
// #include <iostream>
// using namespace std;
// int main() {
//     string lang[3] = {"C++", "JavaScript", "Python"};
//     for (string i : lang) {  //for-each loop (introduced in C++ version 11 (2011))
//         if (i == "Python") {
//             cout << "Python is good\n";
//             cout << "But we need to change it\n";
//             i = "C++ is God";
//         }
//         cout << i << "\n";
//     }
//     return 0;
// }
// ]

// iteration through elements of array
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int myNumbers[5] = {1, 2, 3, 4, 5}; //[int - decalares it as array of integers]
//     for (int i=0; i<5; i++) {
//         cout << myNumbers[i] << "\n";
//     }
//     return 0;
// }
// ]

// iteration using for-each loop
// [
// #include <iostream>
// using namespace std;
// int main() {
//     int myNumbers[5] = {1, 2, 3, 4, 5};
//     for (int i : myNumbers) {
//         cout << i << "\t";
//     }
//     return 0;
// }
// ]

// Array size
// no need to declare the size at array declaration
// also elements can be added after array decalaration
// [
// #include <iostream>
// using namespace std;
// int main() {
//     string lang[3];
//     lang[0] = "C++";
//     lang[1] = "JavaScript";
//     lang[2] = "Python";
//     for (string i : lang) {
//         cout << i << "\t";
//     }
//     return 0;
// }
// ]

// Get size of arrray
// [
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << sizeof(arr) << "\n"; //it will return size in bytes
//     int lengthofarr = sizeof(arr)/sizeof(int); //to get size of array we divide it by size of its type
//     cout << lengthofarr << "\n";
//     for (int i = 0; i<lengthofarr; i++) {
//         cout << arr[i] << "\t";
//     }
//     return 0; //it will return us the length of array and iterate each element using for loop
// }
// ]

// Multi-Dimensional Array
// Used to storing different datas of same type seprately
// we can create multiple data array inside of the array
// [
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     bool ships[4][4] = {
//         {0, 0, 0, 1},
//         {1, 0, 1, 0},
//         {0, 0, 0, 1},
//         {0, 1, 0, 0}
//     };
//     cout << "Are you ready to play?\n\n";
//     cout << "Enter yes or no: ";
//     string answer;
//     cin >> answer;
//     int hits = 0, numberOfTurns = 0;
//     if (answer == "no") {
//         cout << "We will see you soon!";
//     } else {
//         cout << "Alright let's start.\n\n";
//         cout << "Here are the rules to play! --> \n";
//         cout << ">> Enter the coordinates between 1 to 4 for fire!\n";
//         cout << ">> the battle-ground is of 4x4!\n\n";
//         cout << "Here is the map of playground --> \n\n";
//         cout << "\t{0\t0\t0\t1}\n\n\t{1\t0\t1\t0}\n\n\t{0\t0\t0\t1}\n\n\t{0\t1\t0\t0}\n\n";
//         cout << "Time to fight!\n\n";

//         while (hits < 5) {
//             int row, column;

//             cout << "Select Coordinates \n\n";

//             cout << "Enter X-coordinates: ";
//             cin >> column;

//             cout << "Enter Y-coordinates: ";
//             cin >> row;

//             if (ships[row-1][column-1]) {
//                 ships[row-1][column-1] = 0;
//                 hits++;
//                 cout << "\nHit! " << (5 - hits) << " ships left to destroy.\n\n";
//             } else {
//                 cout << "Oops! You Missed!\n\n";
//             }
//             numberOfTurns++;
//         }
//         cout << "Victory!\n\n";
//         cout << "You won in "<< numberOfTurns << " fire\n";
//         cout << "Do you want to play again?\n";
//         string choice;
//         cin >> choice;
//         if (choice == "yes") {
//             return main();
//         } else if (choice == "no") {
//             cout << "See you next time!";
//         } else {
//             cout << "Yes or no?\n\n";
//             if (choice == "yes") {
//                 return main();
//             } else {
//                 cout << "see you soon!";
//             }
//         }
//     }
//     return 0;
// }
// ]


// Structures - [struct]
// way to group variables of different data types together
// each variable in the structure is known as member of the structure
// can use dot operator to access members of a structure.
// [
// #include <iostream>
// using namespace std;
// int main() {
//     struct {    //declaration is done here;
//         int myNum;
//         string myString;
//     } myStructure; //here, a variable is assigned to store the data as structure.

//     myStructure.myNum = 7;
//     myStructure.myString = "hello";

//     cout << myStructure.myNum;
//     cout << "\n" << myStructure.myString;
//     return 0;
// }
// ]

// [
// #include <iostream>
// using namespace std;
 
// struct {    //it can be declared anywhere.
//     string myString = "hello";
//     bool myBool = true;
// } hello1, hello2, hello3; //multiple variables storing same structure of data;

// int main() {
//     cout << hello1.myBool;
//     cout << "\n" << hello3.myString;
//     return 0;
// }
// ]

// Named Structure - used to treat a structure as data type
// [
// #include <iostream>
// using namespace std;

// struct myDataType { //here structure is given a name to treat it as a data type;
//     int myNum;
//     string myString;
// };
//  int main() {
//     myDataType data; //here data-a variable is using myDataType as its data type
//     data.myNum = 0;
//     data.myString = "hello";
//     cout << data.myNum << "\n";
//     cout << data.myString;
//     return 0;
//  }
// ]


// References - used to create reference to existing variables
// [&] - operator used to create reference
// [
// #include <iostream>
// using namespace std;
// int main() {
//     string myString = "hello";
//     string &greeting = myString; //here greeting is used for reference to existing myString
//     cout << myString + "\n";
//     cout << greeting;
//     return 0;
// }
// ]

// [&] - can also be used to get memory address of the data
// [
// #include <iostream>
// using namespace std;
// int main() {
//     string myString = "hello";
//     cout << &myString; //output gives the address where data is stored inside of the system
//     return 0;
// }
// ]


// Pointers - [* - operator used]
// use to store memory address as data type as needed
// [
// #include <iostream>
// using namespace std;
// int main() {
//     string myString = "hello";
//     string* myStringAddress = &myString; //here variable is storing address of myString
//     cout << &myString;
//     cout << "\n" << myStringAddress;
//     return 0;
// }
// ]

// multiple ways to declare a pointer variable
// [ type* variableName,
//  type *variableName,
//  type * variableName]

// Notes - {References and Pointers are important in C++ because it gives the ability to manipulate data in the system memory - which reduce the code and improve the performance}
// {it directly involves the data's memory address to work with}


// Dereference - to get value through pointer variable
// [
// #include <iostream>
// using namespace std;
// int main() {
//     string myString = "Hello World!";
//     string* myStringAddress = &myString;
//     cout << myStringAddress << "\n";
//     cout << *myStringAddress; //it accessed the data directly through memory address
//     return 0;
// }
// ]

// Note - {[*] - when used in declaration (type* variableName), it create a pointer variable}
// {when not used in declaration, it acts as dereferance operator}
// [
// #include <iostream>
// using namespace std;
// int main() {
//     string myString = "hello";
//     string* myStringAddress = &myString;
//     cout << myString << "\n";
//     cout << &myString << "\n";
//     cout << myStringAddress << "\n";
//     cout << *myStringAddress << "\n";
//     *myStringAddress = "hello world"; //modifying the pointer value
//     cout << *myStringAddress << "\n";
//     cout << myString;
//     return 0;
// }
// ]


// ------------------------------------
// Important Note {difference between [endl] and ["\n"] or using nothing}
// [endl] - flushes out {_output_buffer_} what is output buffer now?
// Output buffer is a temporary non-sequential data stored before code being executed and stored sequential permanently in its file
// When, [endl] delete the temporary buffer data
// Where, In case of ["\n"] it get stored as usual but donesn't do any changes
// When used nothing, code executes as normal
// ------------------------------------

// Functions - a block of code which runs when fuction is called
// [main() - a pre-defined functions used to run code]
// How to create own functions?
// [
// #include <iostream>
// using namespace std;
// void hello() {   //function declared here
//     cout << "Hello world" << endl;
// }
// int main() {
//     hello();    //called here
//     hello();    //can be called multiple times
//     return 0;
// }
// ]

// Function declaration and definition
// Declaration - the return type, name of the function, and parameter if any
// Definition - the body of the function which contains the code to be executed

// Note - Function should be called after its declaration other-wise error
// But we can do this;
// [
// #include <iostream>
// using namespace std;
// void myFunction(); //function declared before with the body
// int main() {
//     myFunction();   //called here
//     return 0;
// }
// void myFunction() {
//     cout << "Hello world" << endl;  //body added here
// }
// ]

// Function Parameters
// Parameters - the imformation passed to the function in its declaration
// [
// #include <iostream>
// using namespace std;
// void addOne(int a) {
//     a += 1;
//     cout << a<< endl;
// }
// int main() {
//     int x;
//     cout << "Enter your number: ";
//     cin >> x;
//     addOne(x);
//     return 0;
// }
// ]

// Default Parameters
// these parameters can also be called optional parameters
// [
// #include <iostream>
// using namespace std;
// void greet(string name = "coder") {
//     cout << "hello " << name << endl;
// }
// int main() {
//     greet("world"); //when parameter passed it will be called as it provided
//     greet();    //when nothing passed the default value passes
//     return 0;
// }
// ]

// Multiple Parameters
// multiple parameters can be passed to a function of different datatypes
// Note - But when function called it should be called with same types and same order
// [
// #include <iostream>
// using namespace std;
// void wish(string greet, int year) {
//     greet = "Happy new year";
//     cout << greet + " " << year << endl;
// }
// int main() {
//     wish("",2024); //default value for string type and int type provided
//     return 0;
// }
// ]

// [void - it is defining that no value is returned]
// to return a data type value
// [
// #include <iostream>
// using namespace std;
// int addOne(int a) {  //it defines that a int type data should be returned by function
//     return a+1;
// }
// int main() {
//     int x;
//     cout << "Enter your number: ";
//     cin >> x;
//     cout << addOne(x);
//     return 0;
// }
// ]

// Pass by Reference
// We can also used references as variable for function
// [
// #include <iostream>
// using namespace std;
// void swap(int &x, int &y) {
//     int z = x;
//     x = y;
//     y = z;
//     cout << x << "\t" << y << endl;
// }
// int main() {
//     int firstNumber, secondNumber;
//     cout << "first number: ";
//     cin >> firstNumber;
//     cout << "second number: ";
//     cin >> secondNumber;
//     cout << "so these are your number respectively --> ";
//     cout << firstNumber << "\t" << secondNumber << endl;
//     string choice;
//     cout << "Do you want to swap these number?\n";
//     cout << "yes or no: ";
//     cin >> choice;
//     if (choice == "yes") {
//         swap(firstNumber, secondNumber);
//     } else {
//         cout << "\nyou have chosen not to swap the numbers.";
//     }
//     return 0;
// }
// ]

// Pass Array
// [
// #include <iostream>
// using namespace std;
// void arr(int arr[], int arraySize)
// {
//     for (int i = 0; i < arraySize; i++)
//     {
//         cout << arr[i] << "\t";
//     }
// }
// int main()
// {
//     int myArr[] = {0, 1, 2, 3};
//     int arraySize = sizeof(myArr) / sizeof(int);
//     arr(myArr, arraySize);
//     return 0;
// }
// ]

// Function Overloading
// Multiple functions with same name can be used
// as long as the number or type of parameters are different
// [
// #include <iostream>
// using namespace std;
// int plusOne(int a){
//     return a+1;
// }
// double plusOne(double a) {
//     return a+1;
// }
// int main() {
//     int x;
//     double y;
//     cout << "enter a int: ";
//     cin >> x;
//     cout << "enter a double: ";
//     cin >> y;
//     x = plusOne(x);
//     y = plusOne(y);
//     cout << x << "\t" << y;
//     return 0;
// }
// ]

// Recursion
// technique of making a function call itself
// [
// #include <iostream>
// using namespace std;
// int sum(int n) {
//     if (n>0) {
//         return n + sum(n-1);
//     } else {
//         return 0;
//     }
// }
// int main() {
//     int x;
//     cout << "enter the number: ";
//     cin >> x;
//     cout << sum(x);
//     return 0;
// }
// ]

// ---------------------------------------------------------------------------------------------------------

// OOP - object oriented programming
// Procedural programming is about writing procedures or functions that perform operations on the data,
// while object-oriented programming is about creating objects that contain both data and functions.

// The "Don't Repeat Yourself" (DRY) principle is about reducing the repetition of code.
// You should extract out the codes that are common for the application, and place them at a single place and 
// reuse them instead of repeating it.

// Now, What are Classes and Objects?
// these are the two main aspects of Object-Oriented Programming
// Difference is {a class is template for objects, and objects is an instance of a class}


// Class and Objects
// Class can contain attributes and methods which are basically variables and methods

// definition - {A class is a user-defined data type that we can use in our program,
// and it works as an object constructor, or a "blueprint" for creating objects.}

// [
// #include <iostream>
// using namespace std;
// class lang {
//     public:                 //access type declared for class
//         string codingLang;  //codingLang is the attribute
// };
// int main() {
//     lang myLang;    //myLang is an instance or a object
//     myLang.codingLang = "C++";

//     lang easyLang;
//     easyLang.codingLang = "JavaScript";

//     cout << myLang.codingLang << "\t";  //[.] - operator used to access attribute
//     cout << easyLang.codingLang;
//     return 0;
// }
// ]

// Class Methods
// There are two way to define functions for a class
// >>Inside class
// >>Outside Class - [::] scope resolution operator used
// [
// #include <iostream>
// using namespace std;
// class greet {
//     public:
//         void helloWorld() {         //function inside of the class
//             cout << "Hello World" << endl;
//         }
//         void hello(string name);
// };
// void greet::hello(string name) {    //function outside of the class
//     cout << "Hello " << name;
// }
// int main() {
//     string name;
//     cout << "Enter you name: ";
//     cin >> name;
//     greet greeting;
//     greeting.helloWorld();
//     greeting.hello(name);
//     return 0;
// }
// ]

// Constructors - special method automatically called when an object of a class is created
// [
// #include <iostream>
// using namespace std;
// class myClass {
//     public:
//         myClass() {     //constructor which will be called upon object creation
//             cout << "Hello world";
//         }
// };
// int main() {
//     myClass obj;
//     return 0;
// }
// ]
// Constructor with variables
// [
// #include <iostream>
// using namespace std;
// class greet {
//     public:
//         string name;
//         greet(string x) {    //similar to [::] it can also be specified outside class
//             name = x;
//         }
//         void sayHello() {
//             cout << "Hello " << name << endl;
//         }
// };
// int main() {
//     string x;
//     cout << "Enter your name: ";
//     cin >> x;
//     greet hello(x);
//     hello.sayHello();
//     return 0;
// }
// ]

// Access specifiers
// >>Public - accessible from outiside the class
// >>Private - not accessible from outside
// >>Protected - cannot accessed outside of class but can be accessed by the inherited classes
// By default memebers are specified -private-
// [
// #include <iostream>
// using namespace std;
// class myClass {
//     public:
//         int x;
//     private:
//         int y;
//     protected:
//         int z;
// };
// int main() {
//     myClass obj;
//     obj.x = 0;
//     // obj.y = 1; >> it is inaccessible
//     // obj.z = 2; >> it is also inaccessible
//     cout << obj.x;
//     return 0;
// }
// ]

// Encapsulation
// to hide senstive data from users, increase security of data
// [
// #include <iostream>
// using namespace std;
// class codingLang {
//     private:
//         string lang;
//     public:
//         void setLang(string x) {
//             lang = x;
//         }
//         string getLang() {
//             return lang;
//         }
// };
// int main() {
//     codingLang cLang;
//     cLang.setLang("C++");   //through this it ensures control to manipulate data without affectin other part
//     cout << cLang.getLang();
//     return 0;
// }
// ]

// Inheritance - to inherit attributes and methods from one class to another
// >>Derived Class - another class inheriting a class
// >>Base Class - the class to be inherited
// [
// #include <iostream>
// using namespace std;
// class greet {
//     public:
//         void sayHello(string name) {
//             cout << "Hello " << name << endl;
//         }
// };
// class hello : public greet {
//     public:
//         void wish(string name) {
//             cout << "Good day, " << name << endl;
//         }
// };
// int main() {
//     string x;
//     cout << "Enter Your Name: ";
//     cin >> x;
//     hello obj;
//     obj.sayHello(x);
//     obj.wish(x);
//     return 0;
// }
// ]

// MultiLevel Inheritance
// [
// #include <iostream>
// using namespace std;
// class hello {
//     public:
//         hello() {
//             cout << "hello world";
//         }
// };
// class Hello : public hello {};
// class helloWorld : public Hello {};
// int main() {
//     helloWorld obj;
//     return 0;
// }
// ]

// Multiple Inheritance
// different class inheriting a base class
// a class inherting different classes
// [
// #include <iostream>
// using namespace std;
// class hello {
//     public:
//         hello() {
//             cout << "hello world" << endl;
//         }
// };
// class Hello {
//     public:
//         Hello() {
//             cout << "hello coder" << endl;
//         }
// };
// class greet: public hello, public Hello {};
// int main() {
//     greet h;
//     return 0;
// }
// ]

// Polymorphism - many forms
// this allows us to perform methods of base class to perform different task upon inhertance
// [
// #include <iostream>
// using namespace std;
// class hello {
//     public:
//         void sayHello() {
//             cout << "hello world" << endl;
//         }
// };
// class Hello : public hello {
//     public:
//         void sayHello() {
//             cout << "hello coder" << endl;
//         }
// };
// class greet : public hello {
//     public:
//         void sayHello() {
//             string x;
//             cout << "Enter your name:  ";
//             cin >> x;
//             cout << "Hello " << x << endl;
//         }
// };
// int main() {
//     hello a;
//     Hello b;
//     greet c;
//     a.sayHello();
//     b.sayHello(); // override base class function value
//     c.sayHello(); // override base class function value
//     return 0;
// }
// ]

// {inheritance, abstraction, encapsulation, polymorphism, overriding_n_overloading}

// -- Quick tour with some more thing from beginning --

// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello world!" << endl ;
//     cout << "More basic's here" << endl;
//     return 0;
// }

// Types of Variables
// >>{Local Varialbles, Instance Variables, Static Variables}
// [(
//     Local Variables are defined within a block or method or constructor.
//     Instance Variables are non-static variables and are declared in a class outside any method, constructor, or block.
//     Static Variales are also called Class Variables just defined using static keyword.
// )]
// class Variables {
//     public:
//         static int a;   //static variable
//         int b;      //instance variable
//     public:
//          void func() {
//             int c;      //local variable
//         }
// };

// Constants - defined using const keyword, also called as a const type qualifier
// Once defined cannot be modified later and initialize at the time of decalaration
// constants can also be defined using preprocessors as [#define], which are macros behaving like a contant

// Local Scope and Global Scope Variables
// [(
//     Local scope variable exist inside of a block and can be accessed only in that block.
//     Global Scope Variable is available throughout the program life cycle.
// )]
// #include <iostream>
// using namespace std;

// int global_var = 2;
// void func () {
//     int local_var_inside_function = 0;
// }
// int main() {
//     int local_var = 3;
//     cout<<global_var<<endl;
//     cout<<local_var<<endl;
//     // cout<<local_var_inside_function<<endl; - this doesnot belong to this block scope
//     return 0;
// }

// local precedence over global
// #include <iostream>
// using namespace std;
// int global = 0;
// int main() {
//     int global = 1;
//     cout << global << endl;
//     return 0;
// }

// accessing global using scope resolution operator
// #include <iostream>
// using namespace std;
// int global = 0;
// int main() {
//     int global =1;
//     cout << ::global << endl;
//     cout << global << endl;
//     return 0;
// }

// Storage classes used to describe the characteristics of a variable/function.
// it determines the lifetime, visibility, default  value, and storage location
// helps us to trace the existence of a particular variable during runtime of the program
// [automatic, external, static, register, mutable, thread local]

// Static Variable - declared once and memory is allocated for the lifetime of the program
// #include <iostream>
// using namespace std;
// void demo() {
//     static int i = 0;    //value of i is carried throughout the program
//     cout << i << " ";
//     i++;     //updating the values each time function is called
// }
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         demo();
//     }
//     return 0;
// }

// Static variable in class
// #include <iostream>
// using namespace std;
// class GfG {
//     public:
//         static int i;
//         GfG() {

//         }
// };
// int main() {
//     GfG obj1;
//     GfG obj2;    //multiple copies cannot be created of the static variable for multiple objects
//     obj1.i = 0;
//     obj2.i = 1;
//     cout <<obj1.i << " " << obj2.i;
//     return 0;
// }


// Data types
// [primary, derived, user-defined]
// [
//     Primary - intger, character, boolean, float, double, void, widechar
//     Derived - function, arrray, pointer, reference
//     User-defined or Abstract - class, structure, union, enum, typedef
// ]
// [sizeof() - used to find the number of bytes occupied by variable/data type in memory]
// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     char b;
//     bool c;
//     float d;
//     double e;
//     void *f;
//     cout << sizeof(a) << endl;
//     cout << sizeof(b) << endl;
//     cout << sizeof(c) << endl;
//     cout << sizeof(d) << endl;
//     cout << sizeof(e) << endl;
//     cout << sizeof(f) << endl;
//     cout << "these represents the value in bytes";
//     return 0;
// }

// Datatype Modifiers - these modifiers are used with built-in data types to modify the length of data
// that a particular data type can hold
// [signed, unsigned, long, short]
// [
//     signed - integer, char, long-prefix
//     unsigned - integer, char, short-prefix
//     long - integer, double
//     short - integer
// ]

// [<limits.h> - header file is defined to find the range of fundamentals data-types.]

// Literals - constant values
// types - {integer, float, character, string}
// these can be defined in many way.

// Escape sequences - used to represent the characters that cannot be used normally.

// user-defined data types
// #include <iostream>
// using namespace std;
// class myClass {
//     public:     //Access specifiers
//         string myString;    //data members
//         void whatisClass() {    //member functions
//             cout << "Class is a user-defined datatype,\n which holds its data members and member functions." << endl;
//             cout << "these can be accessed and used to create an instance of this class called as object." << endl;
//         }
// };
// struct myStructure {    //structure declaration
//     string myString;
//     int myInt;
// };
// union myUnion {     //union declaration
//     int a, b; //these will share same location.
// };
// enum myEnum {   //these are used to assign names to integral constants
//     Mon, tue, wed, thur, fri, sat, sun
// };
// typedef int num;    //these are used to define existing data-type with different names


// datatype ranges and their macros
// C++ code to demonstrate the macros for data types

// #include <iostream>
// #include <limits.h> // for int,char macros
// #include <float.h> // for float,double macros

// using namespace std;

// int main()
// {
//     // Displaying ranges with the help of macros
//     cout << "char ranges from : " << CHAR_MIN << " to " << CHAR_MAX << endl;
//     cout << "short char ranges from : " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
//     cout << "unsigned char ranges from : " << 0 << " to " << UCHAR_MAX << endl;

//     cout << "short int ranges from : " << SHRT_MIN << " to " << SHRT_MAX << endl;
//     cout << "unsigned short int ranges from : " << 0 << " to " << USHRT_MAX << endl;
//     cout << "int ranges from : " << INT_MIN << " to " << INT_MAX << endl;
//     cout << "unsigned int ranges from : " << 0 << " to " << UINT_MAX << endl;
//     cout << "long int ranges from : " << LONG_MIN << " to " << LONG_MAX << endl;
//     cout << "unsigned long int ranges from : " << 0 << " to " << ULONG_MAX << endl;
//     cout << "long long int ranges from : " << LLONG_MIN << " to " << LLONG_MAX << endl;
//     cout << "unsigned long long int ranges from : " << 0 << " to " << ULLONG_MAX << endl;

//     cout << "float ranges from : " << FLT_MIN << " to " << FLT_MAX << endl;
//     cout << "negative float ranges from : " << -FLT_MIN << " to " << -FLT_MAX << endl;
//     cout << "double ranges from : " << DBL_MIN << " to " << DBL_MAX << endl;
//     cout << "negative double ranges from : " << -DBL_MIN << " to " << +DBL_MAX << endl;

//     return 0;
// }

// Type conversion - conversion from one type to another
// Implicit type conversion - automatic type conversion
// Explicit type conversion - manual type conversion

// #include <iostream>
// using namespace std;
// int main() {
//     int x = 1;
//     char y = 'a';
//     x += y;     //y is being converted to int. ASCII
//     float z = x + 0.1;      //x is being converted to float
//     cout << x << endl
//     << y << endl
//     << z << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     char x = 'a';
//     int y = (int)x;     //conversion using assignment, also called forceful casting.
//     cout << y << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 109;
//     char x = static_cast<int>(a);   //conversion using cast operator
//     cout << x << endl;
//     return 0;
// }

// Cast operator - it is unary operator which forces one data type to be converted into another
// types of casting - {static, dynamic, const, reinterpret}

// [<typeinfo> - library to check the data type}

// #include <iostream>
// using namespace std;
// int main() {
//     int num = 109;
//     double numDouble = static_cast<double>(num);     //static casting
//     cout << typeid(num).name() << endl;
//     cout << typeid(numDouble).name() << endl;
//     return 0;
// }

// Operators - symbol that operates to perform mathmatical or logical computations
// {arthmetic, relational, logical, bitwise, assignment, ternary or conditional}
// {unary, binary, ternary}

// Basic Input/Output
// Header files - {<iostream>, <iomanip>, <fstream>, <bits/stdc++>}
// <iostream> - input-output stream
// [cout used with << called as instertion operator]
// [cin used with >> called as extraction operator]
// #include <iostream>
// using namespace std;
// int main() {
//     string x;
//     cout << "enter your name: " ;
//     cin >> x;
//     cout << "Hello " << x << endl;
//     return 0;
// }

// Un-buffered standard error stream - [cerr]
// it doesnot store the error message and it get prompted immediately
// Buffered standard error stream - [clog]
// it stores error messages to display it later
// #include <iostream>
// using namespace std;
// int main() {
//     cerr << "Hello world";
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     clog << "hello world";
//     return 0;
// }

// Manipulators - special functions in I/O statement to alter the format parameters of the stream
// [<iomanip.h> - manipulator header file]
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     cout << setbase(16) << 100; //100 base 16
//     return 0;
// }

// Conditional Statements
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cin >> age;
//     if (age >18) {
//         cout << "Access Granted!" << endl;
//     }
//     cout << "Access Denied!" << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cin >> age;
//     if (age > 18) {
//         cout << "access granted!" ;
//     } else {
//         cout << "access denied!";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cin >> age;
//     if (age > 18) {
//         cout << "access granted!" << endl;
//     } else if (age == 18) {
//         cout << "not now!" << endl;
//     } else {
//         cout << "access denied!" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a
//     >> b
//     >> c;
//     if (a > b) {
//         if (a > c) {
//             cout << "a is the greatest!" << endl;
//         } else {
//             cout << "a is greater than b and smaller than c" << endl;
//         }
//     } else if (b >a) {
//         if (b > c) {
//             cout << "b is the greatest" << endl;
//         } else {
//             cout << "b is greater than a and smaller than c" << endl;
//         }
//     } else {
//         if (c > a) {
//             cout << "c is the greatest" << endl;
//         } else {
//             cout << "c is greater than a and smaller than b" << endl;
//         }
//     }
//     cout << "this is just for practice" << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "leap year or not" << endl;
//     int year;
//     cout << "enter year: ";
//     cin >> year;
//     if (year % 4 == 0) {
//         if (year % 100 == 0) {
//             if (year & 400 == 0) {
//                 cout << year << " year is leap year." << endl;
//             } else {
//                 cout << year << " is not a leap year." << endl;
//             }
//         } else {
//             cout << year << " is a leap year." << endl;
//         }
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cin >> age;
//     string result = age>18 ? "access granted" : "access denied";
//     cout << result << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "number to day!" << endl;
//     cout << "enter a digit: ";
//     cin >> n;
//     if (n < 8) {
//         switch(n) {
//             case 1:
//                 cout << "monday" << endl;
//                 break;
//             case 2:
//                 cout << "tuesday" << endl;
//                 break;
//             case 3:
//                 cout << "wednesday" << endl;
//                 break;
//             case 4:
//                 cout << "thursday" << endl;
//                 break;
//             case 5:
//                 cout << "friday" << endl;
//                 break;
//             case 6:
//                 cout << "saturday" << endl;
//                 break;
//             case 7:
//                 cout << "sunday" << endl;
//                 break;
//             default:
//                 cout << "nothing" << endl;
//         }
//     } else {
//         cout << "nope! enter valid digit#&%@" << endl;
//     }
//     return 0;
// }
// Jump statment - {break, continue, goto, return}
// GOTO - statment to jump directly to a labelled part of the program

// Loops - entry controlled loops, exit controlled loops
// test is checked before entering loop - for, while
// test is checked at through the loop - do-while

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cout << "Hello world" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int i = 0;
//     while (i < n) {
//         cout << "Hello world" << endl;
//         i++;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int i = 0, n;
//     cin >> n;
//     do {
//         cout << "hello world" << endl;
//         i++;
//     } while (i < n);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     const string arr[] {"c++", "javaScript", "python"};
//     for (string i : arr) {
//         cout << i << "\t" << endl;
//     }
//     return 0;
// }

// syntax - [for(initialization; test-condition; i++)]
// #include <iostream>
// using namespace std;
// int main() {
//     int n, d;
//     cin >>n
//     >> d;
//     for (int i = d; i <= n; i-- ) {
//         cout << i << "\t" << endl;
//     }
//     cout << "just for practice" << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int i = 0;
//     while (i < n) {
//         cout << "Hello" << endl;
//         i++;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int i, n;
//     cin >> n;
//     i = 0;
//     do {
//         cout << "Hello" << endl;
//         i++;
//     } while (i < n);
//     return 0;
// }

// Range based [for] loop
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {0, 1, 2 ,3, 4,5};
//     for (int i : arr) {
//         cout << i << endl;
//     }
//     return 0;
// }

// Functions : syntax {return_type function_name (parameter_type parameter_name ...){function_body}}
// Functions have return statements which return the value as per the data-type of function at initialisation.
// Void - this type doesnot return any particular result, generally used to perform some action.
// #include <iostream>
// using namespace std;
// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     printArr(arr,n);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int sumofelementsofarr(int arr[], int n) { // it will return int type of data as result;
//     int sum; 
//     for(int i=0; i<n; i++) {
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     cout << sumofelementsofarr(arr,n) << endl;
//     return 0;
// }

// Pointer and References
// Pointers - Pointers stores the memory address of a variable 
// References - References stores the value of another variable
// #include <iostream>
// using namespace std;
// int main() {
//     int x = 1;
//     int &y = x;
//     cout << y << endl;
//     int *ptr = &x; // pointer pointing to the address of x
//     cout << *ptr << endl;
// }

// Structure and Union 
// -- both stores the different types data_type
// -- But in union we can access only one at a time
// #include <iostream>
// int main() {
//     struct a {
//         int i;
//         char c;
//     } a;
//     union b {
//         int i;
//         char c;
//     } b;
//     return 0;
// }

// Important Concepts-------------------------------------------------------------------------------------------------------------------------

// Dynamic Memory Management - as in C
// -- malloc[memoy allocation], calloc[contigous allocation], realloc[re-allocation], free()
// -- malloc - syntax{(data_type*)(malloc(sizeof(data_type)))}
// -- calloc - syntax{(data_type*)(calloc(n,sizeof(data_type)))}
// -- realloc - syntax{ptr = realloc(ptr, new_size)}
// -- free() - to free the memory allocated

// Heap and Stack
// Stack - continous local short-span memory used to store variables
// Heap - Dynamically allocated memory to store objects, and data_structures for longer lifespan.
// Dynamically allocated memory is allocated on HEAP while non-static, local-variable are stored in STACK.

// Cpp supports these manual-memory management functions and adding to them {new, delete} operators to give easier way.

// {new, delete}
// new - allocates memory in free store
// syntax - {ptr = new (data_type)}
// delete - deallocates the memory
// syntax - {delete ptr}

// #include <iostream>
// using namespace std;
// int main() {
//     int *ptr;
//     ptr =  new int;
//     *ptr = 1;
//     cout << "value stored in memory" << endl;
//     cout << *ptr << endl;
//     int n = 5;
//     int *qtr = new int[n];
//     for(int i=0; i<n; i++) {
//         qtr[i] = i+1;
//     }
//     cout << "value stored in block of memory" << endl;
//     for(int i=0; i<n; i++) {
//         cout << qtr[i] << " "; 
//     }
//     delete ptr;
//     delete[] qtr;
//     return 0;
// }

// {Compile-time or Static_Memory_allocation} - declared by the compiler during compile time.
// -- done before program execution
// -- uses stack
// -- non-reusable
// -- re_allocation is not possible
// -- memory is permanent till the program excutes or function call exists.
// {Run-time or Dynamic_Memory_allocation} - memory allocation is done at the time of execution.
// -- done during program execution
// -- uses heap
// -- re_usable
// -- re_allocation is possible
// -- memory is allocated only if program unit gets active

// -------------------------------------------------------------------------------------------------------------------------------------------
