// ============================================================================
// File: cscreen.cpp
// ============================================================================
// This is the implementation file for the CScreen class.
// ============================================================================

#include    <cstdlib>
#include    <ctime>
#include    <fstream>
#include    <ncurses.h>
#include    <unistd.h>
using namespace std;
#include    "cscreen.h"
#include    "cmatrix.h"


// ==== CScreen::CScreen ======================================================
//
// This is the constructor for the CScreen class. It uses the parameter to open
// the configuration file and fetch the display character and sleep interval to
// initialize the object. If values cannot be read from the input file, default
// values are used. Then the random number generator is seeded with the current
// system time, and the curses library is initialized before returning.
//
// Input:
//      fname [IN]      -- a cstring containing the name of the configuration
//                         file
//
// ============================================================================

CScreen::CScreen(const char  fname[])
{
    ifstream myFile;

    myFile.open(fname);
    if(myFile.fail())
    {
        cout << "Error with file name...\n";
    }

    //get the display character and sleep interval
    myFile.get(m_dispChar);
    myFile >> m_sleep;
    srand(time(NULL));
    InitCurses();

}  // end of "CScreen::CScreen"



// ==== CScreen::InitCurses ===================================================
//
// This function is responsible for initializing the curses library. It also
// establishes the foreground and background colors for all of the color pair
// structures.
//
// Input:
//      Nothing
//
// Output:
//      Nothing
//
// ============================================================================

void    CScreen::InitCurses()
{
    ???

}  // end of "CScreen::InitCurses"



// ==== CScreen::Scatter ======================================================
//
// This function contains an infinite loop that draws characters to random
// locations on the screen. Inside the loop, a COLOR_PAIR is activated, then a
// local CMatrix object is used to fill the screen with the display character.
// After the screen has been filled, the loop pauses for about a half-second,
// before doing it all over again and again, until the user presses Ctrl+c,
// which terminates the loop so that the function can return to the caller.
//
// Input:
//      Nothing
//
// Output:
//      Nothing
//
// ============================================================================

void    CScreen::Scatter()
{
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLUE);
    init_pair(2, COLOR_BLACK, COLOR_MAGENTA);
    init_pair(3, COLOR_WHITE, COLOR_BLUE);
    init_pair(4, COLOR_BLACK, COLOR GREEN);
    init_pair(5, COLOR_WHITE, COLOR_CYAN);
    init_pair(6, COLOR_BLACK, COLOR_YELLOW);
    init_pair(7, COLOR_WHITE, COLOR_BLACK);


}  // end of "CScreen::Scatter"

