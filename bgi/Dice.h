#pragma once
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
class Dice
{
    int Num;
public:
    int GenerateNum()
    {
        srand(time(0));
        
         Num=(rand() % 6) + 1;
         return Num;
    }
    void DrawDice(int Dn);

};

