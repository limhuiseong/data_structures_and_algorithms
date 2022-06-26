#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int Aarr[100] = {0,};
    int Barr[100] = {0,};
    int resultArr[100];
    int Alen = 0;
    int Blen = 0;
    int len;

    cout << "A : "; cin >> A;
    fflush(stdin);
    cout << "B : "; cin >> B;

    int i = 0;

    while(A > 0)
    {
        Aarr[i]= A % 10;
        i++;
        A /= 10;
        Alen++;
    }
    i = 0;
    while(B > 0)
    {
        Barr[i]= B % 10;
        i++;
        B /= 10;
        Blen++;
    }

    cout << "Alen : " << Alen << endl << "Blen : " << Blen << endl;

    if(Alen > Blen)
    len = Alen;
    else
    len = Blen;

    int j = 0;
    while(1)
    {
        resultArr[j] = Aarr[j] + Barr[j];
        j++;
        
        if(j >= len)
        break;
    }
    
    cout << "A+B : ";
    for(int temp = len - 1; temp >=0; temp--)
    {
        cout << resultArr[temp];
    }

    cout << endl << "A+B transform : ";

    int last = 0;

    for(int i = 0; i < len; i++)
    {

        if(i == len-1)
        {
            while(resultArr[i] >=2)
            {
                resultArr[i] -= 2;
                last += 1;
                break;
            }
        }
        while(resultArr[i] >=2)
        {
            resultArr[i] -= 2;
            resultArr[i+1] += 1;
        }

    }
    if(last != 0)
    cout << last;

    for(int temp = len - 1; temp >=0; temp--)
    {
        cout << resultArr[temp];
    }

    return 0;
}