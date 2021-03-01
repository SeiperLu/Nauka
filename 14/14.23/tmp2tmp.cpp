#include <iostream>
using std::cout;
using std::endl;

template <typename T> void counts();
template <typename T> void report(T&);

template<typename TT>
class HasFriendT
{
public:
	HasFriendT(const TT& i) : item(i) { ct++; }
	~HasFriendT() { ct--; }
	friend void counts<TT>();
	friend void report<>(HasFriendT<TT>&);
private:
	TT item;
	static int ct;
};

template<typename T>
int HasFriendT<T>::ct = 0;

template<typename T>
void counts()

{
	cout << "Szablon sizeof: " << sizeof(HasFriendT<T>) << "; ";
	cout << "Szablon counts(): " << HasFriendT<T>::ct << endl;
}

template<typename T>
void report(T& hf)
{
	cout << hf.item << endl;
}

int main()
{
	counts<int>();
	HasFriendT<int> hfi1(10);
	HasFriendT<int> hfi2(20);
	HasFriendT<double> hfdb(10.5);
	report(hfi1);
	report(hfi2);
	report(hfdb);
	cout << "Wynik dzialania counts<int>:\n";
	counts<int>();
	cout << "Wynik dzialania counts<double>:\n";
	counts<double>();
	return 0;
}
