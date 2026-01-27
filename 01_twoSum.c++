// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
        
//     }
// };


//class Solution { ...  //class = c++ ka blueprint/container

// }; //class ka end

/* public: is a access specifiers which controls where class member can be accesssed from
        there are total 3 access specifiers are public,private and protected. This a foundational concept of 
        Encapsulation in Object-oriented programming */

/*  public: can be accessed from anywhere 
            
class student {
public: 
    int rollNo;

    void display(){
    cout << "Roll No: "<<rollNo << endl;    
    }
};

student s;
s.rollNo = 10; // Allowed
s.display(); // Allowed

*/

/*
2.private only accessible inside the same class

class BankAccount {
private:
        int balance;
        
public: void setBalance(int b){
        balance = b;}
    }

    int getBalance(){
        return balance;
    }
};

BankAccount acc;
//acc .balance = 1000; //not allowerd
acc.setBalance(1000); // Allowed
*/
/*
protected are accessible inside the same class and can be derived by child class
*/
// class Test {
//     int x;   // private by default
// };

// struct Test {
//     int x;   // public by default
// };

// “Good C++ design minimizes public data and maximizes private state.”

// This is critical for robust systems, libraries, and large codebases.

// vector<int> twoSum(vector<int>& numbers, int target)

/*vector<int> = dynamic array of integers 
        :function ka return type
        :Matlb function ek integer return karega\

    ● twoSum 
    :function ka naam

    ● (vector<int>& numbers, int target)

    numbers = array ka naam
    vector<int> = type
    & = reference(array copy nhi direct orignal array mil raha hai for faster and memory effieciency)

    – int target 
    • simple integer
    • jo sum banana hai
*/ 

// Function body { }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) return {left + 1, right + 1};
            if (sum < target) left++;
            else right--;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = sol.twoSum(numbers, target);

    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}


