#include <iostream>
#include <string>

using namespace std;

class Book {
private:
   string title;
   string author;
   int year;

public:
   // Constructor to initialize book details
   Book(const string& title, const string& author, int year) :
       title(title), author(author), year(year) {
       cout << "Book created: " << title << " by " << author << " (" << year << ")\n";
   }

   // Destructor to print a message when the book object is destroyed
   ~Book() {
       cout << "Book destroyed: " << title << endl;
   }
};

int main() {
   // Create a book object
   Book book1("The Lord of the Rings", "J.R.R. Tolkien", 1954);

   // The destructor will be called automatically when the book1 object goes out of scope

   return 0;
}