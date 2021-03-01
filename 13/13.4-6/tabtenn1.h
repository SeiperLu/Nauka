#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <iostream>
using std::string;

class TableTennisPlayer
{
public:
	TableTennisPlayer(const string & fn="brak",const string &ln="brak", bool ht =false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
private:
	string firstname;
	string lastname;
	bool hasTable;
};

class RatedPlayer : public TableTennisPlayer
{
public:
	RatedPlayer(unsigned int r = 0, const string& fn = "brak", const string& ln = "brak", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
	unsigned int Rating()const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }

private:
	unsigned int rating;
};



#endif // !TABTENN1_H_
#pragma once
