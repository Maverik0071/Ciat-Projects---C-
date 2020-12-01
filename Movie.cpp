/* Week Four Exercise 1
William Sewell */
#include<iostream>
#include<string>
using namespace std;
class Movie
{
private:
	string title;
	int year;
	string director;
public:
	void setTitle(string);
	void setYear(int);
	void setDirector(string);
	void display();

};

void Movie::setTitle(string movieTitle)
{
	title = movieTitle;

}
void Movie::setYear(int yr)
{
	year = yr;

}
void Movie::setDirector(string dir)
{
	director = dir;

}

void Movie::display()
{
cout << title << " made in " << year << " directed by "
<< director << endl;
}
int main()
{
	Movie myFavoriteMovie;
	myFavoriteMovie.setTitle("Top Gun");
	myFavoriteMovie.setYear(1985);
	myFavoriteMovie.setDirector("Don Simpson");
	myFavoriteMovie.display();
	return 0;


}