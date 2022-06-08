// lk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ikkuna.h"
#include "lk.h"
#include "utils.h"
int main()
{
    srand(time(NULL));
    W::window();
    return 0;
}

void LK::LK_GenerateNumbers(int num, int max, lk& rakenne)
{
    U::setReset(&rakenne.numerot, num);

    while(true){
        int ran = rand() % max;
        rakenne.numerot.insert(ran);

        if (rakenne.numerot.size() >= num -1)
            break;
    }

    //for(const auto& i : rakenne.numerot){
    //    static int b = 0;
    //    std::cout << "[" << b << "]: " << i << '\n';
    //    b += 1;
    //}
}
