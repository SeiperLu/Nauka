#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review
{
	std::string title;
	int rating;
	double price;

};

bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool cheaperThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool FilleReview(Review& rr);
void ShowReview(const std::shared_ptr<Review>& rr);
void ShowChoice();

int main()
{
	using namespace std;
	vector<shared_ptr<Review>> books;
	shared_ptr<Review> temp (new Review);
	int i = 0;
	while (FilleReview(*temp))
	{
		books.push_back(temp);
		temp.reset(new Review);
	}
	
		
	if (books.size() > 0)
	{
		vector<shared_ptr<Review>> books_alphabetic(books);
		sort(books_alphabetic.begin(), books_alphabetic.end());
		vector<shared_ptr<Review>> books_rating(books);
		sort(books_rating.begin(), books_rating.end(), worseThan);
		vector<shared_ptr<Review>> books_price(books);
		sort(books_price.begin(), books_price.end(), cheaperThan);
		cout << "Dziekuje. Podales " << books.size() << " ocen ksiazek.";
		ShowChoice();
		int mod;
		while (cin >> mod && mod != 7)
		{
			switch (mod)
			{
			case 1:
				cout << "Ocena\tTytul\tCena\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 2:
				cout << "Ocena\tTytul\tCena\n";
				for_each(books_alphabetic.begin(), books_alphabetic.end(), ShowReview);
				break;
			case 3:
				cout << "Ocena\tTytul\tCena\n";
				for_each(books_rating.begin(),books_rating.end(), ShowReview);
				break;
			case 4:
				cout << "Ocena\tTytul\tCena\n";
				for_each(books_rating.rbegin(), books_rating.rend(), ShowReview);
				break;
			case 5:
				cout << "Ocena\tTytul\tCena\n";
				for_each(books_price.begin(), books_price.end(), ShowReview);
				break;
			case 6:
				cout << "Ocena\tTytul\tCena\n";
				for_each(books_price.rbegin(), books_price.rend(), ShowReview);
				break;
			default:
				cout << "Wprowadzono blede dane!\n";
				break;
			}
			ShowChoice();
		}
	}
	else
		cout << "Brak danych.\n";
	cout << "Koniec.\n";
	return 0;
}

bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else
		return false;
}

bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}

bool cheaperThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->price < r2->price)
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
	std::cout << "Podaj cene: ";
	std::cin >> rr.price;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const std::shared_ptr<Review>& rr)
{
	std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price << std::endl;
}

void ShowChoice()
{
	std::cout << "Podaj sposob sortowania/wyswietlania:\n";
	std::cout << "W kolejnosci wprowadzania - 1\tW kolejnosci alfabetycznej - 2\n";
	std::cout << "Oceny rosnaco - 3\tOceny malejaco - 4\n";
	std::cout << "Ceny rosnaco - 5\tCeny malejaco - 6\n";
	std::cout << "Koniec - 7\n";
	std::cout << "Wybor: ";
}