#include <iostream>
using namespace std;

class Club{
	public:
	string name;
	int founded;
	//constructor
        Club(string name_, int founded_):
        name{name_},
        founded{founded_}{}
	void info();
};

class Player{
	public:
	int age,height,goals;
        string name, surname;
        Club club;
        //constructor
        Player(int age_, int height_, int goals_, string name_, string surname_, Club club_):
            age{age_},
            height{height_},
            goals{goals_},
            name{name_},
            surname{surname_},
            club{club_}
            {}
        void info();
};

void info(Player player){
    cout << player.name << " " << player.surname << " plays in " << player.club.name << " which was founded in " << player.club.founded <<endl;
}
int main(){

    Club barcelona("FC Barcelona",1899);
    Player lewandowski(34,185,401,"Robert","Lewandowski",barcelona);
    info(lewandowski);
	return 0;
}
