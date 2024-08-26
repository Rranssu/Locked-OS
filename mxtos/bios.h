#ifndef BIOS_H
#define BIOS_H
#include <iostream>
#include <chrono>
#include <thread>
using std::cout;
using std::string;
using std::chrono::seconds;
using std::this_thread::sleep_for;
namespace bios{

    void startup()
    {
        seconds delay(3);
        seconds delay1(5);
        string startup, loading, memcheck, hddcheck, drivers, devices, ok, bad;
        startup = "\t\t\tM\tX\t - \tT\tO\tS\n\t\t    1983 - 1992 All rights reserved to MX corporation\n";
        loading = "Initializing BIOS";
        memcheck = "checking memory";
        hddcheck = "Checking Drive";
        devices = "Detecting for conected devices";
        drivers = "Loading Drivers";
        ok = " [OK]\n";
        bad = " [Corrupted]\n";
        cout << startup;
        sleep_for(delay);
        cout << loading;
        sleep_for(delay);
        cout << ok;
        cout << memcheck;
        sleep_for(delay);
        cout << ok;
        sleep_for(delay1);
        cout << hddcheck;
        sleep_for(delay);
        cout << bad;
        cout << devices;
        sleep_for(delay);
        cout << ok;
        cout << drivers;
        sleep_for(delay);
        cout << ok;


    }
}
#endif