#pragma once
#ifndef TVFM_H_
#define TVFM_H_

class Tv;

class Remote
{
public:
	friend class Tv;
	enum State { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cabel };
	enum { TV, DVD };
	enum{NORMAL, INTERACTIVE};
	Remote(int m = TV,int wm = NORMAL) : mode(m), work_mode(wm) { }
	bool volup(Tv& t);
	bool voldown(Tv& t);
	void onoff(Tv& t);
	void chanup(Tv& t);
	void chandown(Tv& t);
	void set_mode(Tv& t);
	void set_input(Tv& t);
	void set_chan(Tv& t, int c);
	void show_workm();
private:
	int mode;
	int work_mode;
};

class Tv
{
public:
	friend class Remote;
	enum State { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cabel };
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cabel), input(TV) {}
	bool volup();
	bool voldown();
	void onoff() { state = (state == On) ? Off : On; }
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cabel : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	bool ison() const { return state == On; }
	void settings() const;
	void set_workm(Remote & re);
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};

inline bool Remote::volup(Tv& t) { return t.volup(); }
inline bool Remote::voldown(Tv& t) { return t.voldown(); }
inline void Remote::onoff(Tv& t) { t.onoff(); }
inline void Remote::chanup(Tv& t) { t.chanup(); }
inline void Remote::chandown(Tv& t) { t.chandown(); }
inline void Remote::set_mode(Tv& t) { t.set_mode(); }
inline void Remote::set_input(Tv& t) { t.set_input(); }
inline void Remote::set_chan(Tv& t, int c) { t.channel = c; }
#endif // !TVFM_H_
