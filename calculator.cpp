#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter input a and b" << endl;
    cin >> a >> b;

    char op;
    cout << "Enter operation want to perform";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "Operation can't perform" << endl;
    }
    return 0;
}