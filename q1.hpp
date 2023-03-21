#include <iostream>
#include <iomanip>
using namespace std;

//********************
void getinput(int &);
void getinput(int &, int &);
void getinput(float &, float &);

//********************

// ******************************

void getinput(int &n1, int &n2)
{
    cin >> n1 >> n2;
}

void swapTwoValues(int &n1, int &n2)
{
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}
void getinput(float &fnum1, float &fnum2)
{
    cin >> fnum1 >> fnum2;
}
void swapTwoValues(float &fnum1, float &fnum2)
{
    int tmp;
    tmp = fnum1;
    fnum1 = fnum2;
    fnum2 = tmp;
}

// ******************************