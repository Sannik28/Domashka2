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
     cout<<"������� ������ ������������� R1\n";
     cin >>R1;
     cout<<"������� ������ ������������� R2\n";
     cin >>R2;
     cout<<"������� ������ ������������� R3\n";
     cin >>R3;
     cout<<"������������� ������������� R0 = "<<R1*R2*R3/(R1*R2+R2*R3+R1*R3)<<"��";
 */
 /*
     float l;
     cout << "������� ����� ���������� � ��: \n";
     cin >>l;
     cout<<"������� ����� ���������� "<<l*l/(4*3.14)<<"��.��.";
 */
    float V, t, a;
    cout << "������� �������� � ��/�:\n";
    cin >> V;
    cout << "������� ����� � �:\n";
    cin >> t;
    cout << "������� ��������� ��/�^2:\n";
    cin >> a;
    cout << "���������� ���������� ��� ��������������� �������� " << V * t + ((a * t) / 2) << "��.";


    return 0;
}
