#include<iostream>
using namespace std;

void DoSomething(int arr[], int n) {
    arr[0] += 100; // Modifying the first element of the array
    cout << "Value inside function: " << arr[0] << endl; // Displaying the modified value

}
int main() {
    const int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Taking user input for the array elements
    }
    DoSomething(arr, n);

    cout << "Value in main after function call: " << arr[0] << endl;

    return 0;
}