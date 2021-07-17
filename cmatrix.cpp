// ============================================================================
// File: cmatrix.cpp
// ============================================================================
// This is the implementation file for the CMatrix class.
// ============================================================================

#include    <cstdlib>
#include    <ctime>
#include    <fstream>
#include    <ncurses.h>
#include    <unistd.h>
using namespace std;
#include    "cmatrix.h"


// ==== CMatrix::CMatrix ======================================================
//
// This is the CMatrix constructor, it just uses the parameters to initialize
// the CMatrix data members so that the screen dimensions are known to the
// matrix ADT.
//
// Input:
//      numRows [IN]    -- the number of rows in the current display
//
//      numCols [IN]    -- the number of columns in the current display
//
// ============================================================================

CMatrix::CMatrix(int numRows, int numCols)
{
    m_numRows = numRows;

    m_numCols = numCols;

}  // end of "CMatrix::CMatrix"



// ==== CMatrix::CMatrix ======================================================
//
// This function is responsible for filling the screen at random locations
// with the character parameter, and pausing the specified number of micro-
// seconds beween the drawing of each character. This drawing of characters
// continues until the screen is completely filled, at which point the
// function returns to the caller.
//
// NOTE: It is assumed that the caller has set the foreground and background
//       colors before making this call.
//
// Input:
//      dispChar [IN]   -- the character to use to fill the screen
//
//      msecs [IN]      -- the number of microseconds to pause between the
//                         drawing of each character
//
// Outpu:
//      Nothing
//
// ============================================================================


void    CMatrix::Fill(char dispChar, int msecs)
{
    ???

}  // end of "CMatrix::Fill"
