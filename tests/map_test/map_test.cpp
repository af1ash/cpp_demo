#include "iostream"
#include "pnc_map.h"
using std::cout;
using std::endl;

void mapTest()
{
    cout << "This is a test" << endl;
    PNC_Map pnc_map;
    pnc_map.mapInfo();
}

int main()
{
    mapTest();
    return 0;
}