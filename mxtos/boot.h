#ifndef BOOT_H
#define BOOT_H
#include <iostream>
using std::cout;
using std::string;
namespace boot{
    void loader()
    {
        cout << "\n\nMX - TOS 10.03 BOOT MENU\n------------------------\n[1]START SYSTEM\n[2]CHECK DRIVE\n[3]TERMINATE SYSTEM\n";
    }
}
#endif
