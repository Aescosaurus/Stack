#pragma once

class Stacc
{
public:
	class Value
	{
	public:
		Value( int val );
		void NextVal( int* nextVal );
	private:
		int* nextVal = nullptr;
		const int val;
	};
public:
	void Push( int val );
	int Pop();
	int Count() const;
	bool Empty() const;
public:
	Stacc();
	~Stacc();
	Stacc& operator=( const Stacc& source );
private:
	int* start = nullptr;
	int count = 0;
};