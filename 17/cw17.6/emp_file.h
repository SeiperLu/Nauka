#pragma once
#ifndef EMP_FILE_H_
#define EMP_FILE_H_
#include <iostream>
#include <string>
#include <fstream>

enum classkind{Employee,Manager,Fink,Highfink};

class abstr_amp
{
public:
	abstr_amp();
	abstr_amp(const std::string& fn, const std::string& ln, const std::string& j);
	virtual void ShowAll() const;
	virtual void SetAll();
	virtual void writeall(std::ofstream& fs);
	virtual void getall(std::fstream& fs);
	friend std::ostream& operator<<(std::ostream& os, const abstr_amp& e);
	virtual ~abstr_amp() = 0;
private:
	std::string fname;
	std::string lname;
	std::string job;
};

class employee : public abstr_amp
{
public:
	employee();
	employee(const std::string& fn, const std::string& ln, const std::string& j);
	virtual void ShowAll() const;
	virtual void SetAll();
	virtual void writeall(std::ofstream& fs);
	virtual void getall(std::fstream& fs);
};

class manager : virtual public abstr_amp
{
public:
	manager();
	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0);
	manager(const abstr_amp& e, int ico);
	manager(const manager& m);
	virtual void SetAll();
	virtual void writeall(std::ofstream& fs);
	virtual void ShowAll() const;
	virtual void getall(std::fstream& fs);
private:
	int inchargeof;
protected:
	int InChargeOf() const { return inchargeof; }
	int& InChargeOf() { return inchargeof; }
};

class fink : virtual public abstr_amp
{
public:
	fink();
	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo);
	fink(const abstr_amp& e, const std::string& rpo);
	fink(const fink& e);
	virtual void SetAll();
	virtual void ShowAll() const;
	virtual void writeall(std::ofstream& fs);
	virtual void getall(std::fstream& fs);
private:
	std::string reportsto;
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string& ReportsTo() { return reportsto; }
};

class highfink : public manager, public fink
{
public:
	highfink();
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico);
	highfink(const abstr_amp& e, const std::string& rpo, int ico);
	highfink(const fink& f, int ico);
	highfink(const manager& m, const std::string& rpo);
	highfink(const highfink& h);
	virtual void SetAll();
	virtual void ShowAll() const;
	virtual void writeall(std::ofstream& fs);
	virtual void getall(std::fstream& fs);
};

#endif // !EMP_FILE_H_

