#include <iostream>

using namespace std;

int main()
{
    int hours, minutes, seconds;

    hours = 0;
    minutes = 0;
    seconds = 0;

    int count = 0;

    while(true)
    {
        ++count;

        ++seconds;

        if(seconds>60)
        {
            ++minutes;
            seconds = 0;
        }

        if(minutes>60)
        {
            ++hours;
            minutes = 0;
        }

        cout << hours << ":" << minutes << ":" << seconds << endl;

        if(count >= 1000)
        {
            break;
        }
    }

    return 0;
}
