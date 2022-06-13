#include <iostream>

using namespace std;

int main()
{
    char arr[10];

    cout << "문자 입력 : ";
    cin.getline(arr,10);

    cout << arr;

    return 0;
}