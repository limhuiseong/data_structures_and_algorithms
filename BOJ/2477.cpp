#include <iostream>

using namespace std;

int main()
{
    int largeSquare;
    int smallSquare;
    int direction[6];
    int size[12];
    int k;
    cin >> k;

    for(int i = 0; i < 6; i++)
    {
        cin >> direction[i];
        cin >> size[i];
    }
    for(int i = 6; i < 12; i++)
    {
        size[i] = size[i-6];
    }

    int largeY = 0;
    int largeX = 0;
    int smallY;
    int smallX;
    int Xmem;
    int Ymem;

    for(int i = 0; i < 6; i++)
    {
        if(direction[i] == 3 || direction[i] == 4)
        {
            if(size[i] > largeY)
            {
                largeY = size[i];
                Ymem = i;
            }
            
        }
    }

    for(int i = 0; i < 6; i++)
    {
        if(direction[i] == 1 || direction[i] == 2)
        {
            if(size[i] > largeX)
            {
                largeX = size[i];
                Xmem = i;
            }
            
        }
    }

    if(size[Ymem + 1] == size[Xmem])
    {
        smallX = size[Ymem + 3];
        smallY = size[Ymem + 4];
    }
    else
    {
        smallX = size[Ymem + 3];
        smallY = size[Ymem + 2];
    }


    largeSquare = largeX * largeY;
    smallSquare = smallX * smallY;

    cout << (largeSquare - smallSquare) * k;




    return 0;
}