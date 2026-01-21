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

