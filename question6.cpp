#include<iostream>
using namespace std;

class MathOperations {
public:
    double divide(double num1, double num2) {
        if(num2 == 0) {
            throw "Division by zero condition!";
        }
        return (num1 / num2);
    }
};

int main() {
    MathOperations mathOp;
    double num1 = 10.0;
    double num2 = 0.0;
    double result;

    try {
        result = mathOp.divide(num1, num2);
        cout << "The result is: " << result << endl;
    }
    catch (const char* msg) {
        cerr << "Exception occurred: " << msg << endl;
    }

    return 0;
}

