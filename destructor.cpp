#include <iostream>
using namespace std;

class Book{
public:
    string Title;
    string Author;
    int* Rates;
    int RatesCounter;

    Book(string title, string author) {
        Title = title;
        Author = author;

        RatesCounter = 2;
        Rates = new int [RatesCounter];
        Rates[0] = 4;
        Rates[1] = 5;


        
    }
    ~Book(){
        delete [] Rates; 
        Rates = nullptr;
       
    }
};


int main()
{

    Book book1("Millionaire Fastlane", "M. J. DeMarco");
    Book book2("C++ Lamba Story", "Bartek Filipek");
    return 0;
}