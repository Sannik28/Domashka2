/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//#include <Windows.h>
using namespace std;
int main()
{
    /*
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
     float R1, R2, R3;
     cout<<"¬ведите первое сопротивление R1\n";
     cin >>R1;
     cout<<"¬ведите первое сопротивление R2\n";
     cin >>R2;
     cout<<"¬ведите первое сопротивление R3\n";
     cin >>R3;
     cout<<"Ёквивалентное сопротивление R0 = "<<R1*R2*R3/(R1*R2+R2*R3+R1*R3)<<"ќм";
 */
 /*
     float l;
     cout << "¬ведите длину окружности в см: \n";
     cin >>l;
     cout<<"ѕлощадь круга составл€ет "<<l*l/(4*3.14)<<"кв.см.";
 */
    float V, t, a;
    cout << "¬ведите скорость в км/ч:\n";
    cin >> V;
    cout << "¬ведите врем€ в ч:\n";
    cin >> t;
    cout << "¬ведите ускорение км/ч^2:\n";
    cin >> a;
    cout << "–ассто€ние пройденное при равноускоренном движении " << V * t + ((a * t) / 2) << "км.";


    return 0;
}
