#include<iostream>
#include<string>
using namespace std;

class Movie {
public:
    string title;
    string genre;
    int releasedYear;

    Movie(string t, string g, int y) : title(t), genre(g), releasedYear(y) {}
};

int main() {
    
    Movie movies[] = {
        Movie("Ra-one", "Action", 2002),
        Movie("The Godfather", "Crime", 2005),
        Movie("Money hiest", "robery", 2020)
    };

    
    for(int i = 0; i < 3; i++) {
        cout << "Title: " << movies[i].title <<  ", Genre: " << movies[i].genre << ", Released Year: " << movies[i].releasedYear << endl;
    }

    return 0;
}

