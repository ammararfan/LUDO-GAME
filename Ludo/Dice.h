#pragma once
#include<iostream>
#include<cstdlib>
#include<time.h>
#include"graphics.h"
using namespace std;
class Dice
{
    int Num;
public:
    int GenerateNum()
    {
       /* while (!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(500);
        }*/
        srand(time(0));

        Num = (rand() % 6) + 1;
        return Num;
    }
    
    void DrawDice(int Dn, int a = 40, int b = 500);

};

