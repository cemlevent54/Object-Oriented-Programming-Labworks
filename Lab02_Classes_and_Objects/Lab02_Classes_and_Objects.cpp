#include <iostream>
#include <string>
using namespace std;

class Author {
public:
    Author() {
        name = "";
        birthYear = 0;
        nationality = "";
        deathYear = 0;
    }

    Author(string _name, int _birthYear, string _national, int _deathYear) {
        name = _name;
        birthYear = _birthYear;
        nationality = _national;
        deathYear = _deathYear;
    }

private:
    string name;
    int birthYear;
    string nationality;
    int deathYear;

public:
    string getName() const {
        return name;
    }

    void setName(string _name) {
        name = _name;
    }

    int getBirthYear() const {
        return birthYear;
    }

    void setBirthYear(int _birthYear) {
        birthYear = _birthYear;
    }

    string getNationality() const {
        return nationality;
    }

    void setNationality(string _nationality) {
        nationality = _nationality;
    }

    int getDeathYear() const {
        return deathYear;
    }

    void setDeathYear(int _deathYear) {
        deathYear = _deathYear;
    }
    void printAuthorInfo() const {
        cout << "Name: " << name << endl;
        cout << "Birth Year: " << birthYear << endl;
        cout << "Nationality: " << nationality << endl;
        cout << "Death Year: " << deathYear << endl;
    }
};

class Publisher {
public:

    Publisher() {
        name = "";
        address = "";
    }

    Publisher(string _name, string _address) {
        name = _name;
        address = _address;
    }

private:
    string name;
    string address;

public:
    string getName() const {
        return name;
    }

    void setName(string _name) {
        name = _name;
    }

    string getAddress() const {
        return address;
    }

    void setAddress(string _address) {
        address = _address;
    }
    void printPublisherInfo() const {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Book {
public:
    Book(string _title, int _pages, int _publicationYear, Author _author,
        Publisher _publisher) {
        title = _title;
        pages = _pages;
        author = _author;
        publisher = _publisher;
        publicationYear = _publicationYear;
    }

private:
    string title;
    int pages;
    Author author;
    Publisher publisher;
    int publicationYear;

public:
    string getTitle() const {
        return title;
    }

    void setTitle(string _title) {
        title = _title;
    }

    int getPages() const {
        return pages;
    }

    void setPages(int _pages) {
        pages = _pages;
    }

    Author getAuthor() const {
        return author;
    }

    void setAuthor(Author _author) {
        author = _author;
    }

    Publisher getPublisher() const {
        return publisher;
    }

    void setPublisher(Publisher _publisher) {
        publisher = _publisher;
    }

    int getPublicationYear() const {
        return publicationYear;
    }

    void setPublicationYear(int _publicationYear) {
        publicationYear = _publicationYear;
    }

    void printBookInfo() const {
        cout << "Title: " << title << endl;
        cout << "Pages: " << pages << endl;
        cout << "Author: " << author.getName() << endl;
        cout << "Publisher: " << publisher.getName() << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};

int authorAgeAtPublication(const Book& book) {
    int publicationYear = book.getPublicationYear();
    int authorBirthYear = book.getAuthor().getBirthYear();
    return publicationYear - authorBirthYear;
}

double calculatePrintingCost(const Book& book, double costPerPage) {
    return book.getPages() * costPerPage;
}

int main() {
    Author author("Halil Inalcik", 1916, "Turkish", 2016);
    Publisher publisher("Eren Yayincilik", "Istanbul, Turkiye");
    Book book("Balkanlar", 299, 1993, author, publisher);

    std::cout << "AUTHOR & BOOK INFO TEST" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    author.printAuthorInfo();
    std::cout << "-----------------------------" << std::endl;
    book.printBookInfo();
    std::cout << "-----------------------------" << std::endl << std::endl;

    std::cout << "FUNCTION TEST" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Author age at publication: " << authorAgeAtPublication(book) << std::endl;
    std::cout << "Printing cost:  " << calculatePrintingCost(book, 0.1) << std::endl;
    std::cout << "-----------------------------" << std::endl << std::endl;

    return 0;
}
