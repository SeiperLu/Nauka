#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class baseDMA
{
public:
	baseDMA(const char* l = "brak", int r= 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
private:
	char* label;
	int rating;
};

class lacksDMA : public baseDMA
{
public:
	lacksDMA(const char * c = "brak", const char * l = "brak", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
private:
	enum {COL_LEN=40};
	char color[COL_LEN];
};

class hasDMA : public baseDMA
{
public:
	hasDMA(const char * s = "brak", const char * l = "brak", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
private:
	char* style;
};


#endif // !DMA_H_
#pragma once
