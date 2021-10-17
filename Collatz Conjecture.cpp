#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#define PI 3.14159265

int main()
{
    long long n;
    long long c{};
    int r;

    do {
         system("cls");
         std::cout << "enter number to start \n";
         std::cin >> n;

          do {
             if (n % 2 == 0)
              n = n / 2;

             else
              n = ((n * 3) + 1);

              std::cout << n << "\n";

              c = (c + 1);

        } while (n != 1);

         std::cout << "do you want to repeat 1/0";
         std::cin >> r;
    
    } while (r == 1);

    system("cls");
    
    std::cout << "\n\n" << c << "\n\n";
}