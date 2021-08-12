#pragma once
#ifndef STORE_H_
#define STORE_H_
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

class Store
{
public:
	Store(std::ofstream& fo) : fout({ std::move(fo) }), len(0) {}
	void operator()(const std::string& str);
private:
	std::ofstream fout;
	int len;
};

void ShowStr(const std::string& str);
void GetStrs(std::ifstream& fin, std::vector<std::string>& vstr);

#endif // !STORE_H_
