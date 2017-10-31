#include <conio.h>

#include "Stacc.h"

int main()
{
	Stacc s;

	s.Push( 50 );
	s.Push( 12 );
	int x = s.Pop();
	int y = s.Pop();
	int z = s.Count();
	s.Count();

	while( !_kbhit() );
	return 0;
}