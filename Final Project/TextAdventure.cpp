#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	string name = "";
	int answer = 0;
	
	cout << "Welcome to your adventure!" << endl << "Please enter your characters name: ";
	getline(cin,name);
	cout << "In this text adventure you have the choice of Genocide or Pacifist!" << "\n" << endl << "Genocide: You are a fearsome beast ready to take out anything in your way." << "\n" << endl << "Pacifist: You stand for world peace no matter what people way want to do to you you care about them you want to be-friend them." << "\n" << endl;
	cout << "Every person born draws their first breath with one other person in the world. This person is known as your 'other'. Everyone has magic but, this magic derives from the life source of your other. One may only posses the power to use magic once one reaches maturity (literally). Every person is connected to one other person, but if you over-use your magic your other will die. This goes both ways. Anyone can die of natural causes, murder, etc.; they are human." << "\n" << endl << "Society used to believe in finding your other and teaming with them, using each other with consent and balance. This ideal has nearly died and is only followed in small cultures that call themselves the Old Society. Most try never to know who their other is, thus they can use their power without knowledge of who they’re hurting, without the distraction of worrying for someone else’s health while fighting. Some people, cults who call themselves the New Society, find their other, lock them up, and use their life force relentlessly while barely keeping that person alive and without allowing their prisoner to learn any further magic." << endl << "The bad guy has found a way to lock up people and use their life sources too, but if they die, the bad guy simply loses the power he was gaining from that one person. The only way the bad guy would lose ALL of his power were if his other half dies.  "<< "\n" << endl << name << ", you exist in this new world and the choice is yours as to how you use your power." << endl << endl;
	
	cout << "You find your self in a tavern with no memory of who you are or how you here. The music of the tavern isn't helping your memory either. The bartender asks you if you would like a pint." << "\n" << endl << "1: accept the drink" << "\n" << endl << "2: refuse the drink." << endl;
	cin >> answer;
	while (answer == 1){
		cout << "You drink the entire pint and he asks if you want another." << endl;
		cout << "1:Yes or 2:No" << endl;
		cin >> answer;
	}
	if (answer == 2) {
		cout << "Bartender: Very well, if you're not drinking, go find a table.";
	}
	cout << " You go to find a table but before you sit down a hooded figure calls you over to his table in a dark corner" << endl;
	
	cout << "1:Go to his table" << endl << "2:Find a different table" << endl;
	cin >> answer;
	if (answer == 2) {
		cout << "You ignore the figure but then see there are no other tables in the tavern and head over to the hooded figure's table";
	}
	cout << "Figure: Hello my name is Essek I dwell from the eastern side of Gastead" << endl << "What brings you to these parts?" <<  "\n" << endl;
	cout << "1: I'm not sure I don't quite remember." << endl << "2: I'm here for one reason and thats to kill you!" << endl;
	cin >> answer;
	if (answer == 1) {
		cout << "Essek: This is a dangerous place for someone as famous as you to be in." << endl << endl;
	}
	else {
		cout << "You draw your sword, but before you can swing tavern security restrains you and throws you in a prison cell where you live out your days in suffering of malnutrition and dehydration." << endl << endl << "THE END";
		return 0;
	} 
	cout << name << ": What do you mean?" << endl << endl << "Essek: You...you don't remember? Well I guess I need to jog your memory. You're a legend! You are meant to fufill the prophecy!"<< endl << endl;
	cout << "Choice 1: What prophecy?"<< endl << "2: Oh, yes I remember"<< endl;
	cin >> answer;
	if (answer == 1) {
		cout << "Oh, well it's very long and complicated but the important part is that you are in it and we need you.";
	}
	else {
		cout << "Well good thing you knew because I have no desire of explaining the tale." << endl << endl;
	}
	cout << "Very well then I have a quest for you if you choose to accept." << endl << endl;
	cout << "1: Accept" << endl << "2:Deny" << endl;
	cin >> answer;
	if (answer == 1) {
		cout << "Essek: Mor'cro is the connection to your magic, as you know we are all connected to someone in this world. I'm connected to an old hand maid in Moortock but I drained her life ages ago. Unfortunately you are linked to the most powerful dark mage in the land. Oh and did I mention he's a giant?";
	}
	else {
		cout << "By refusing the quest you setting our fate to be doomed. Mor'cro's power is rising and you're the only one who can help us."<< endl << "THE END";
		return 0;
	}
}