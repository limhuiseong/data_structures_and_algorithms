#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char arr[10];
    cout <<  "문자 입력";
    cin >> arr;
    cout << "내용 : " << arr << endl;

    cout << strlen(arr) << endl;
    cout << arr[0] << endl;

    return 0;
}