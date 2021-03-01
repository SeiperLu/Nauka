#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review
{
	std::string title;
	int rating;

};

bool operator<(const Review& r1, const Review& r2);
bool worseThan(const Review& r1, const Review& r2);
bool FilleReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{
	using namespace std;
	vector<Review> books;
	Review temp;
	while (FilleReview(temp))
		books.push_back(temp);
	if (books.size() > 0)
	{
		cout << "Dziekuje. Podales " << books.size() << " ocen ksiazek:\n" << "Ocena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end());
		cout << "Posortowane wedlug tytulow:\nOcena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end(), worseThan);
		cout << "Posortowane wedlug oceny:\nOcena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
		random_shuffle(books.begin(), books.end());
		cout << "Po wymieszaniu:\nOcena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "Brak danych.\n";
	cout << "Koniec.\n";
	return 0;
}

bool operator<(const Review& r1, const Review& r2)
{
	if (r1.title < r2.title)
		return true;
	else if (r1.title == r2.title && r1.rating < r2.rating)
		return true;
	else
		return false;
}

bool worseThan(const Review& r1, const Review& r2)
{
	if (r1.rating < r2.rating)
		return true;
	else
		return false;
}

bool FilleReview(Review& rr)
{
	std::cout << " Wpisz tytul ksiazki (koniec, aby zakonczyc): ";
	std::getline(std::cin, rr.title);
	if (rr.title == "koniec")
		return false;
	std::cout << "Wpisz ocene: ";
	std::cin >> rr.rating;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const Review& rr)
{
	std::cout << rr.rating << "\t" << rr.title << std::endl;
}