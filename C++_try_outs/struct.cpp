#include <iostream>
using namespace std;

struct musicBand{
	string bandName;
	string fandomName;
	int no_of_members;
	int albums;
};

void printDetails(musicBand &bt);
void changeFandomName(musicBand &bt, string name);

int main()
{
	musicBand BangTan;
	BangTan.bandName = "BTS";
	BangTan.fandomName = "Bells";
	BangTan.no_of_members = 7;
	BangTan.albums = 22;
	
	changeFandomName(BangTan , "ARMY");
	printDetails(BangTan);
	
	return 0;
}

void printDetails(musicBand &bt){
	cout<<bt.bandName<<endl;
	cout<<bt.fandomName<<endl;
	cout<<bt.no_of_members<<endl;
	cout<<bt.albums<<endl;
}
void changeFandomName(musicBand &bt, string name){
	bt.fandomName = name;
}