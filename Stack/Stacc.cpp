#include "Stacc.h"

void Stacc::Push( int val )
{
	*this = *this( val );
}

int Stacc::Pop()
{
	const int val = values[size - 1];
	*this = *this( *this );
	return val;
}

int Stacc::Count() const
{
	return size;
}

bool Stacc::Empty() const
{
	return ( size == 0 );
}

Stacc::Stacc()
	:
	size( 0 )
{
}

Stacc::Stacc( const Stacc& source )
{
	size = source.size - 1;
	values = source.values;
}

Stacc::Stacc( const Stacc& source,int val )
{
	size = source.size + 1;
	values = new int[size];
	values[size] = val;
}

Stacc& Stacc::operator=( const Stacc& source )
{

	return *this;
}

Stacc::~Stacc()
{
	delete[] values;
	values = nullptr;
}
