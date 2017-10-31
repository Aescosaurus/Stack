#include "Stacc.h"

Stacc::Value::Value( int val_in )
	:
	val( val_in )
{
}

void Stacc::Value::NextVal( int* nextVal_in )
{
	nextVal = nextVal_in;
}
