//Error
#include <iostream>

using namespace std;

int main()
{
    char arr0[100];
    char arr1[100];
    int isTrue = 1;

    cin >> arr0;
    cin >> arr1;

    for(int i = 0; i < 2; i++)
    {
        if(arr0[i] ^ arr1[i] == 2)
            continue;
        else
        {
            isTrue = 0;
            break;
        }
    }

    isTrue == 1 ? cout << "True" : cout << "false";
    
}