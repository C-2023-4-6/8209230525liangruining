#include<iostream>
using namespace std;
int main()
{
    char sign;
    float num1, num2;

    cout << "�����������+��-��*��/ : ";
    cin >> sign;

    cout << "����������: ";
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
            cout << "��������Ϊ0";
            break;
        }
        else
        {
            cout << num1 / num2;
            break;
        }

    default:
        cout << "δ�ҵ���Ӧ�����";
        break;
    }
	return 0;
}