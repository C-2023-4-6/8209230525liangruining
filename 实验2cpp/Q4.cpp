#include<iostream>
using namespace std;
int main()
{
    char sign;
    float num1, num2;

    cout << "输入运算符：+、-、*、/ : ";
    cin >> sign;

    cout << "输入两个数: ";
    cin >> num1 >> num2;

    switch (sign)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "除数不能为0";
            break;
        }
        else
        {
            cout << num1 / num2;
            break;
        }

    default:
        cout << "未找到相应运算符";
        break;
    }
	return 0;
}