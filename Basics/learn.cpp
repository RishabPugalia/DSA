#include<iostream>
#include<string>
using namespace std;
// #include<bits/stdc++.h> -- not recommended for competitive programming as it includes all standard libraries and can increase compilation time.

// USER INPUT AND OUTPUT

// int main() {
//     cout << "Hello, World!" << "\n" << "Hey" << endl;
//     cout << "Hello, World!";
//     return 0;
// }

// int main() {
//     int x, y;
//     cout << "Enter two integer: ";
//     cin >> x >> y;
//     cout << "You entered value of x: " << x << " and y: " << y;
//     return 0;
// }

// DATA TYPES
// INT LONG FLOAT DOUBLE

// int main() {

// int x = 10;
// long x = 15;
// cin >> x;
// long long x = 1400000000;

// float x = 10.5;
// float y = 20;
// cout << "value of y: " << y;
// return 0;
// }

// STRING INPUT AND OUTPUT & // GETLINE FUNCTION

// int main() {
//     // string s1;
//     // string s2;
//     // cin >> s1 >> s2;
//     // cout << s1 << " " << s2;

//     // string str;
//     // getline(cin, str); // Use getline to read a full line including spaces
//     // cout << str;
//     // return 0;

// CHARACTER INPUT AND OUTPUT

//     char ch = "g"; //char or string
//     cout << ch;
//     return 0;
// }

// CONDITIONAL STATEMENTS
// if, else if, else
// int main()
// {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if (age >= 18) {
//         cout <<"You are eligible to vote.";
//     }
//     else if(age < 18) {
//         cout << "You are not eligible to vote.";
//     }
//     return 0;
// }
// int main()
// {
// int marks;
// cout << "Enter your marks: ";
// cin >> marks;
// if(marks < 25) {
//     cout << "F";
// }
// else if(marks < 50) {
//     cout << "D";
// }
// else if(marks < 75) {
//     cout << "C";
// }
// else if(marks < 90) {
//     cout << "B";
// }
// else {
//     cout << "A";
// }
//     return 0;
// }

//nested if statements
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if(age < 18) {
//         cout << "You are eligible for job.";
//     }
//     else if(age <= 57) {
//         cout << "You are eligible for retirement benefits.";
    //    if(age >= 55) {
    //         cout << "but retirement soon";
    //    }
//     }
//     else {
//         cout << "You are eligible for pension.";
//     }
//     return 0;
//     }

//SWITCH CASE STATEMENT

// int main() {
//     int day;
//     cout << "Enter day number (1-7): ";
//     cin >> day;

//     switch(day) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "Invalid day number.";
//     }
//     return 0;
// }

// ARRAYS 

// int main()
// {
//     int arr[5];
//     cout << "Enter 5 elements of the array: ";
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

//     arr[3] += 5;
//     // arr[3] = 16; --changes the value of arr[3] to 16
//     cout << arr[3];
// }

// 2D ARRAYS

// int main()
// {
//     int arr[3][5];

//     arr[1][3] = 78;
//     cout << arr[1][3];
//     return 0;
// }

// STRINGS

// int main()
// {
//     string s = "Rishab";
//     int len = s.size();
//     s[len - 1] = 'a'; // Changing the last character of the string to 'a'
//     cout << s[len - 1] << endl; // Accessing the last character of the string
//     return 0;
// }

// FOR LOOP

// int main()
// {
//     for (int i = 0; i <= 5; i++) {
//         cout << "Iteration " << i << endl;
//     }
//     return 0;
// }

//WHILE LOOP

// int main()
// {
//     int i = 1;
//     while(i<=5) {
//         cout << "Iteration " << i << endl;
//         i++;
//     }
// }

// DO WHILE LOOP

// int main()
// {
//     int i = 2;
//     do {
//         cout << "Iteration " << i << endl;
//         i++;
//     } while(i <= 1);
//     cout << i << endl; // This will print the value of i after the loop ends
//     return 0;
// }

// FUNCTIONS

//void
//PARAMETERIZED

// void printName(string name)
// {
//     cout << "Hey " << name << endl;
// }
// int main()
// {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name; // Taking user input for the name
//     printName(name); // Calling the function to print the name

//     string name2;
//     cout << "Enter your name2: ";
//     cin >> name2; // Taking user input for the name
//     printName(name2); // Calling the function to print the name
//     return 0;
// }

//return functions
// int sum(int num1, int num2) {
//     int num3 = num1 + num2; // Adding two numbers
//     return num3; // Returning the sum
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2; // Taking user input for two numbers
//     int result = sum(num1, num2); // Calling the sum function
//     cout << "The sum is: " << result << endl; // Displaying the result
//     return 0;

// }


//pass by reference
// void doSomething(int num) {
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }
// int main()
// {
//     int num10 = 10;
//     doSomething(num10);
//     cout << num10 << endl;
//     return 0;
// }

// void doSomething(string name) {
//    name [0] = 't';
//     cout << name << endl;
// }

// int main()
// {
//     string name = "Rishab";
//     doSomething(name);
//     cout << name << endl;
//     return 0;
// }

// pass by reference

// void doSomething(string &name) {
//    name [0] = 't';
//     cout << name << endl;
// }

// int main()
// {
//     string name = "Rishab";
//     doSomething(name);
//     cout << name << endl;
//     return 0;
// }

void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}
int main()
{
    int n=5;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Taking user input for the array elements
    }
    doSomething(arr, n); // Calling the function to modify the array
    cout << "Value after function call: " << arr[0] << endl; // Displaying the modified value of the first element
    return 0;
}
