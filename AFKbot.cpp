#include <iostream>
#include <windows.h>
#include <time.h>

double timePassed(int a, int b)
{
    double passedTime = (a * b) / 1000;
    return passedTime;
};

int main()
{
    int keysSent = 0;
    int interval = 0;


    std::cout << "Thank you for using the Ring Road Official AFK bot!\n" << std::endl;

    std::cout << "!!!README!!!\nThis bot hijacks your keyboard inputs.\nIt is for total AFKing, such as avoiding being kicked for inactivity while you go make poopy.\n";
    std::cout << "You will have 5 seconds to Alt+Tab back into your game before the bot starts.\nMake sure your character is standing in an open space.\n" << std::endl;

    std::cout << "Enter the key delay interval in milliseconds and press enter.\n";

    std::cin >> interval;

    std::cout << "The bot is ready. You may now start AFKing!\n";
    system("pause");

    std::cout << "Starting in 5 seconds..." << std::endl;
    Sleep(1000);

    std::cout << "Starting in 4 seconds..." << std::endl;
    Sleep(1000);

    std::cout << "Starting in 3 seconds..." << std::endl;
    Sleep(1000);

    std::cout << "Starting in 2 seconds..." << std::endl;
    Sleep(1000);

    std::cout << "Starting..." << std::endl;
    Sleep(1000);

    std::cout << "Sending keys in the order of \"WASD\" with " << interval << " millisecond intervals.\n" << std::endl;


    for (;;) {

        keybd_event(VkKeyScan('W'), 0x91, 0, 0);
        Sleep(interval);
        keybd_event(VkKeyScan('W'), 0x91, KEYEVENTF_KEYUP, 0);
        keysSent++;
        std::cout << "\r" << keysSent << " key commands sent. " << timePassed(keysSent, interval) << " seconds passed.";

        keybd_event(VkKeyScan('A'), 0x9e, 0, 0);
        Sleep(interval);
        keybd_event(VkKeyScan('A'), 0x9e, KEYEVENTF_KEYUP, 0);
        keysSent++;
        std::cout << "\r" << keysSent << " key commands sent. " << timePassed(keysSent, interval) << " seconds passed.";

        keybd_event(VkKeyScan('S'), 0x9f, 0, 0);
        Sleep(interval);
        keybd_event(VkKeyScan('S'), 0x9f, KEYEVENTF_KEYUP, 0);
        keysSent++;
        std::cout << "\r" << keysSent << " key commands sent. " << timePassed(keysSent, interval) << " seconds passed.";

        keybd_event(VkKeyScan('D'), 0xa0, 0, 0);
        Sleep(interval);
        keybd_event(VkKeyScan('D'), 0xa0, KEYEVENTF_KEYUP, 0);
        keysSent++;
        std::cout << "\r" << keysSent << " key commands sent. " << timePassed(keysSent, interval) << " seconds passed.";
    }

    return 0;
}