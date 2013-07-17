/*
 * libscrollback
 * written by Alex Jordan
 */

bool Libscrollback_initialized = false;
int Libscrollback_maxBufferSize = 100;
bool Libscrollback_lineReserved[9] = false;


int Libscrollback_initialize()
{
	 //any init here
	Libscrollback_initialized = true;
}

void Libscrollback_setMaxBufferSize()
{

}

void Libscrollback_addToBuffer()
{

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

}
