#include <iostream>
using namespace std;

class Book {
public:
    string Title;
    string Author;
    int* Rates;
    int RatesCounter;

    // Constructor
    Book(string title, string author) {
        Title = title;
        Author = author;

        RatesCounter = 2;
        Rates = new int[RatesCounter];
        Rates[0] = 4;
        Rates[1] = 5;
    }

    // Destructor
    ~Book() {
        delete[] Rates;
        Rates = nullptr;
    }

    // Copy constructor
    Book(const Book& original) {
        Title = original.Title;
        Author = original.Author;
        RatesCounter = original.RatesCounter;

        // Fix: Use int* instead of float*
        Rates = new int[RatesCounter];
        for (int i = 0; i < RatesCounter; i++) {
            // Fix: Convert the float value to int
            Rates[i] = static_cast<int>(original.Rates[i]);
        }
    }
};

int main() {
    // Creating objects using the constructor
    Book book1("Millionaire Fastlane", "M. J. DeMarco");
    Book book2("C++ Lambda Story", "Bartek Filipek");

    // Creating an object using the copy constructor
    Book book3(book1);

    

     cin.get(); // Optionally, if you want to pause the console
    return 0;
}
