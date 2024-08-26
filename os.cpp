#include <iostream>
//bootloader script
#include "mxtos/boot.h"
//bios script
#include "mxtos/bios.h"
//clearing the screen
#include <cstdlib>
//crearing the screen cuh
#include <chrono>
#include <thread>
//shortcuts
using std::cout;
using std::cin;
using std::chrono::seconds;
using std::this_thread::sleep_for;
using namespace bios;

//timer
seconds scnd(1);
//clearing the screen
void clrs()
{
    std::system("clear");    
}
//error messeage cuz I'm too tired to write cout again and again
void error(){
        cout<<"invalid command\n";
    }
//drive indicator of the input from the beginning
void hdd(){
    cout <<"Enter Drive to boot:/> ";
}
//input display
void hddc(){
    cout <<"C:/> ";
}

//the main function...obviously
int main()
{
    //boot choices
    int lch;
    //variable for ending the program
    bool end = false;
    //variable for determining which drive to mount
    string drive;

    //inside a do while loop cuz... why not?
    do{
    //calls out the input display from the beginning
    hdd();
    cin >> drive;
    if (drive == "c" || drive == "C")
    {
        //clears the acreen
        clrs();
        //starts the opening sequence of the OS
        startup();
        //uses the boot.h namespace
        using namespace boot;
        //loads the bootloader script
        loader();
        //displays the input display of the C drive
        hddc();

        cin >> lch;
        //switch for the choices of loader
        switch (lch)
        {
        case 3:
            return 0;
            break;
        
        default:
        error();
            break;
        }
        end = true;
    }
    else
    {
        error();
        sleep_for(scnd);
        clrs();
        end = false;

    }
    }
    while (end == false);
    return 0;
}