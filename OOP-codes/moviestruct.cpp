#include <iostream>
using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
};

MovieData a, b;

void createMovieData() {
    cout << "Enter the Title of the first movie: ";
    getline(cin, a.title);
    
    cout << "Enter the Director of the first movie: ";
    getline(cin, a.director);
    
    cout << "Enter the release year of the first movie: ";
    cin >> a.yearReleased;
    cin.ignore(); 
    
    cout << "Enter the Title of the second movie: ";
    cin.ignore(); 
    getline(cin, b.title);
    
    cout << "Enter the Director of the second movie: ";
    getline(cin, b.director);
    
    cout << "Enter the release year of the second movie: ";
    cin >> b.yearReleased;
    cin.ignore(); 
}

void displayMovieData() {
    cout << endl;
    cout << "The information of the first movie is:" << endl;
    cout << "Title: " << a.title << endl;
    cout << "Director: " << a.director << endl;
    cout << "Release Year: " << a.yearReleased << endl;
    cout << endl;
    
    cout << "The information of the second movie is:" << endl;
    cout << "Title: " << b.title << endl;
    cout << "Director: " << b.director << endl;
    cout << "Release Year: " << b.yearReleased << endl;
}

int main() {
    createMovieData();
    displayMovieData();
    return 0;
}
