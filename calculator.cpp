#include <cstdio>

enum Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Calculator() {
        result = 0;
    }
    int calculate(int a, int b) {
        switch(operation) {
            case Add: {
                result = a += b;
                return result;
            } break;
            case Subtract: {
                result = a -= b;
                return result;
            } break;
            case Multiply: {
                result = a *= b;
                return result;
            } break;
            case Divide: {
                result = a /= b;
                return result;
            }
            default: {
                return result;
            }
        }
    }
private:
    int result;
    Operation operation = Subtract;
};

int main() {
    Calculator calculator;
    printf("Result: %d", calculator.calculate(10, 5));
}