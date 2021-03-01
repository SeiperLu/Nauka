#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class beta
{
private:
	template<typename V>
	class hold
	{
	private:
		V val;
	public:
		hold(V v = 0) : val(v) {}
		void show() const { cout << val << endl; }
		V Vaule() const { return val; }
	};
	hold<T> q;
	hold<int> n;
public:
	beta(T t, int i) : q(t), n(i) {}
	template<typename U>
	U blal(U u, T t) { return (n.Vaule() + q.Vaule() * u / t); }
	void Show() const { q.show(); n.show(); }
};

int main()
{
	beta<double> guy(3.5, 3);
	cout << "T okreslone jak double\n";
	guy.Show();
	cout << "V najpierw okreslono jako T, czyli double, a nastepnie jako int\n";
	cout << guy.blal(10, 2.3) << endl;
	cout << "U okreslono jako int\n";
	cout << guy.blal(10.0, 2.3) << endl;
	cout << "U okreslono jako double\n";
	cout << "Koniec.\n";
	return 0;
}