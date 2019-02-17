#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
};

struct friends_t {
  string name;
  string email;
  movies_t favorite_movie;
} charlie, maria;

int main() {
  friends_t * pfriends = &charlie;

  charlie.name = "Charlie";
  charlie.email = "charlie@gmail.com";
  charlie.favorite_movie.title = "Buck to the future";
  charlie.favorite_movie.year = 1989;

  cout << charlie.name << " " << charlie.email << endl;
  cout << charlie.favorite_movie.title << " " << (pfriends->favorite_movie.year) << endl;
}
