/*
 *  libscrollback
 *  written by Alex Jordan
 */

const int Libscrollback_screenSize = 9;
bool Libscrollback_initialized = false;
const int Libscrollback_maxBufferSize = 100;
String Libscrollback_buffer[Libscrollback_maxBufferSize] = ""; // set to an empty string just in case we get problems later for accessing null strings
bool Libscrollback_lineReserved[Libscrollback_screenSize] = false;

void Libscrollback_addToBuffer(String stringToAdd)
{
	// push the stack up
	// note: implemented as a "pull", not a "push"
	// the top of the stack gets overwritten as a part of this
	for (int i = 99; i > 1; i--)
	{
		Libscrollback_buffer[i] = Libscrollback_buffer[i-1];
	}
	// handle the very bottom specially, since that's where we insert the next buffer item
	Libscrollback_buffer[0] = stringToAdd;
}

int Libscrollback_reserveLine(int line)
{
	if ( line >= 0 && line <= 9 ) Libscrollback_lineReserved[line] = true; else return 1;
	return 0;
}

void Libscrollback_unreserveLine()
{
	if ( line >= 0 && line <= 9 ) Libscrollback_lineReserved[line] = false; else return 1;
 	return 0;
}

bool Libscrollback_getReservedLine()
{
	if ( line >= 0 && line <= 9 ) return Libscrollback_lineReserved[line]; else return -1;
}

void Libscrollback_redraw()
{
	// figure out how many lines we have available
	int avail = 0;
	for (int i = 0; i < Libscrollback_screenSize; i++)
	{
		if Libscrollback_getReservedLine(i) /* do nothing */ else avail++;
	}
	// construct a temporary array with the amount of lines we have
	String line[avail];
}
