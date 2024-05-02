#include<iostream>
#include "process.h"

using std::cout;
using std::endl;

int main()
{
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning end" << endl;
    return 0;
}