#include <iostream>

using namespace std;

int median3(int a, int b, int c)
{
    if(a >= b)
    {
        if(b >= c)
        return b;

        else if(a <= c)
        return a;

        else
        return c;
    }

    else if(a > c)
    return a;

    else if(b > c)
    return c;

    else
    return b;
}

int main()
{
    int a, b, c;

    cout << "�� ������ �߾Ӱ��� ���մϴ�." << endl;
    cout << "a�� �� : "; cin >> a;
    cout << "b�� �� : "; cin >> b;
    cout << "c�� �� : "; cin >> c;

    cout<< "�߾Ӱ��� " << median3(a, b, c) << "�Դϴ�.";

    return 0;
}
