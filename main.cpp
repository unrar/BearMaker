#include "generators.h"
#include <time.h>
#include <conio.h>
using namespace std;

int main()
{
    // Seed
    srand(time(NULL));

    // Get the color
    string rcolor = getcolor();

    // Get the size
    string rsize = getsize();

    // Put it out!
    cout << "Welcome to La Beardérie." << endl;
    cout << "Your Teddy Bear's color is: " << rcolor << "." << endl;
    cout << "Your Teddy Bear's size is: " << rsize << "." << endl;

    // Is it a cat?
    int rcat = rand() % 5 + 1;

    if (rcat == 3) {
        cout << "Your pretty Teddy Bear resulted to be a Cat! You're lucky, this only happens 1 out of 5 times!" << endl;
    }
    cout << "Press any key to exit... ";
    getch();

    return 0;
}
