#include <iostream>
#include <string>
#include "Store.h"

void ShowStr(const std::string& str)
{
	std::cout << str << std::endl;
}

void Store::operator()(const std::string& str)
{
	len = str.size();
	fout.write((char*)&len, sizeof(int));
	fout.write(str.data(), len);
}

void GetStrs(std::ifstream& fin, std::vector<std::string>& vstr)
{
	int len;
	std::string temp;
	fin.seekg(0);
	while (fin.read((char*)&len, sizeof(int)))
	{
		temp.resize(len);
		fin.read((char*)&temp[0], len);
		vstr.push_back(temp);
		temp.clear();	
	}
}