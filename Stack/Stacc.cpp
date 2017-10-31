#include "Stacc.h"

void Stacc::Push( int val )
{
	temp = new int[size];
	for( int i = 0; i < size; ++i )
	{
		temp[i] = values[i];
	}
	delete[] values;
	values = new int[size + 1];
	++size;

	for( int i = 0; i < size - 1; ++i )
	{
		values[i] = temp[i];
	}
	values[size - 1] = val;
	delete[] temp;
	temp = nullptr;
}

int Stacc::Pop()
{
	const int val = values[size - 1];

	delete[] values;
	values = new int[size - 1];
	--size;

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
	*this = source;
}

Stacc& Stacc::operator=( const Stacc& source )
{
	size = source.size + 1;
	values = new int[size];

	for( int i = 0; i < source.size; ++i )
	{
		values[i] = source.values[i];
	}

	return *this;
}

Stacc::~Stacc()
{
	delete[] values;
	values = nullptr;
}
