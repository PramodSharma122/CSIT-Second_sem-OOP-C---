/*
Write a suitable program that illustrates the technique of constructor overloading. 
*/

#include <iostream>
using namespace std;

class Concept {
    int age;

   public:
    Concept() {
        age = 20;
    }

    Concept(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Concept C1 , C2(45);

    cout << "C1 Age = " << C1.getAge() << endl;
    cout << "C2 Age = " << C2.getAge() << endl;

    return 0;
}