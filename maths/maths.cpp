// Reverse Integer
#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        while(x!=0)
        {
            int ld = x % 10;
            rev =(rev * 10) + ld;
            x /= 10;
            if(rev > INT_MAX || rev < INT_MIN)
            return 0;
        }
        return (int)rev;
    }
};

// count digits in an integer
#include <vector>
#include <algorithm>
using namespace std;

int countDigits(int n){
    int cnt = 0;
    while(n > 0){
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}
int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}

// palindrome number
bool palindrome(int n)
{
    int revNum = 0;
    int dup = n;
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (dup == revNum) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int number = 4554;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

// armstrong number
bool isArmstrong(int num) {
    int k = to_string(num).length();
    int sum = 0;
    int n = num;
    while(n > 0){
        int ld = n % 10;
        sum += pow(ld, k); 
        n = n / 10;
    }

    return sum == num ? true : false;
}
int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}

// divisor
class Solution {
public:
    // Function to find all divisors
    vector<int> getDivisors(int N) {
        // Create a vector to store divisors
        vector<int> res;

        // Loop from 1 to N
        for (int i = 1; i <= N; i++) {

            if (N % i == 0) {

                res.push_back(i);
            }
        }

        return res;
    }
};

int main() {

    Solution sol;

    int N = 36;

    vector<int> result = sol.getDivisors(N);
    cout << "Divisors of " << N << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

