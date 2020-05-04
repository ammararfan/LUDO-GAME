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

        return (rand() % 6) + 1;
    }
    void DrawDice(int Dn);
};

