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

    cout << "세 정수의 중앙값을 구합니다." << endl;
    cout << "a의 값 : "; cin >> a;
    cout << "b의 값 : "; cin >> b;
    cout << "c의 값 : "; cin >> c;

    cout<< "중앙값은 " << median3(a, b, c) << "입니다.";

    return 0;
}
