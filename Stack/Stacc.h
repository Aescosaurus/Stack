#pragma once

class Stacc
{
public:
	void Push( int val );
	int Pop();
	int Count() const;
	bool Empty() const;
public:
	Stacc();
	Stacc( const Stacc& source );
	Stacc( const Stacc& source,int val );
	Stacc& operator=( const Stacc& source );
	~Stacc();
public:
	int* values = nullptr;
	int size;
};