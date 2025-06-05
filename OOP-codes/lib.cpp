#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Base class representing a LibraryItem
class LibraryItem {
protected:
    string title;
    string authorProducer;
    int uniqueIdentifier;

public:
    // Constructor
    LibraryItem(string title, string authorProducer, int uniqueIdentifier)
        : title(title), authorProducer(authorProducer), uniqueIdentifier(uniqueIdentifier) {}

    // Getter and Setter methods
    string getTitle() const {
        return title;
    }

    string getAuthorProducer() const {
        return authorProducer;
    }

    int getUniqueIdentifier() const {
        return uniqueIdentifier;
    }

    void setTitle(string newTitle) {
        title = newTitle;
    }

    void setAuthorProducer(string newAuthorProducer) {
        authorProducer = newAuthorProducer;
    }

    virtual void displayDetails() const {
        cout << "Title: " << title << ", Author/Producer: " << authorProducer << ", ID: " << uniqueIdentifier;
    }
};

// Derived class for Books
class Book : public LibraryItem {
private:
    int numPages;

public:
    // Constructor
    Book(string title, string author, int id, int numPages)
        : LibraryItem(title, author, id), numPages(numPages) {}

    // Getter and Setter methods specific to Books
    int getNumPages() const {
        return numPages;
    }

    void setNumPages(int newNumPages) {
        numPages = newNumPages;
    }

    // Overriding displayDetails for Books
    void displayDetails() const override {
        LibraryItem::displayDetails();
        cout << ", Pages: " << numPages << " (Book)";
    }
};

// Derived class for DVDs
class DVD : public LibraryItem {
private:
    int durationMinutes;

public:
    // Constructor
    DVD(string title, string producer, int id, int durationMinutes)
        : LibraryItem(title, producer, id), durationMinutes(durationMinutes) {}

    // Getter and Setter methods specific to DVDs
    int getDurationMinutes() const {
        return durationMinutes;
    }

    void setDurationMinutes(int newDurationMinutes) {
        durationMinutes = newDurationMinutes;
    }

    // Overriding displayDetails for DVDs
    void displayDetails() const override {
        LibraryItem::displayDetails();
        cout << ", Duration: " << durationMinutes << " minutes (DVD)";
    }
};

// Derived class for Magazines
class Magazine : public LibraryItem {
private:
    int issueNumber;

public:
    // Constructor
    Magazine(string title, string producer, int id, int issueNumber)
        : LibraryItem(title, producer, id), issueNumber(issueNumber) {}

    // Getter and Setter methods specific to Magazines
    int getIssueNumber() const {
        return issueNumber;
    }

    void setIssueNumber(int newIssueNumber) {
        issueNumber = newIssueNumber;
    }

    // Overriding displayDetails for Magazines
    void displayDetails() const override {
        LibraryItem::displayDetails();
        cout << ", Issue Number: " << issueNumber << " (Magazine)";
    }
};

// Library class to manage a collection of LibraryItems
class Library {
private:
    vector<LibraryItem*> items;

public:
    // Function to add a new item to the library
    void addItem(LibraryItem* newItem) {
        items.push_back(newItem);
    }

    // Function to search for an item by title
    LibraryItem* searchItemByTitle(string title) {
        for (LibraryItem* item : items) {
            if (item->getTitle() == title) {
                return item;
            }
        }
        return nullptr;
    }

    // Function to remove an item from the library
    void removeItem(int uniqueIdentifier) {
        auto it = remove_if(items.begin(), items.end(), [uniqueIdentifier](LibraryItem* item) {
            return item->getUniqueIdentifier() == uniqueIdentifier;
        });

        items.erase(it, items.end());
    }

    // Function to display details of all items in the library
    void displayAllItems() const {
        cout << "Library Items:\n";
        for (const LibraryItem* item : items) {
            item->displayDetails();
            cout << endl;
        }
    }

    // Destructor to free memory
    ~Library() {
        for (LibraryItem* item : items) {
            delete item;
        }
    }
};

int main() {
    // Create instances of different library items
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1, 180);
    DVD dvd1("Inception", "Christopher Nolan", 2, 148);
    Magazine magazine1("National Geographic", "National Geographic Society", 3, 123);

    // Display details of each item
    book1.displayDetails();
    cout << endl;
    dvd1.displayDetails();
    cout << endl;
    magazine1.displayDetails();
    cout << endl;

    // Create a library
    Library library;

    // Add items to the library
    library.addItem(&book1);
    library.addItem(&dvd1);
    library.addItem(&magazine1);

    // Display all items in the library
    library.displayAllItems();
    cout << endl;

    // Search for an item by title
    string searchTitle = "Inception";
    LibraryItem* foundItem = library.searchItemByTitle(searchTitle);

    if (foundItem != nullptr) {
        cout << "Item found: ";
        foundItem->displayDetails();
        cout << endl;
    } else {
        cout << "Item not found.\n";
    }

    // Remove an item from the library
    int removeId = 2;
    library.removeItem(removeId);

    // Display all items after removal
    library.displayAllItems();

    return 0;
}
