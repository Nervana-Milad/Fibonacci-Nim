#include <iostream>
using namespace std;

int turns = 0;
string name_of_first_player;
string name_of_second_player;
int coins_of_first_player = 0;
int number_of_coins;
int coins_of_second_player = 0;


void first_player();
void second_player();


int main()
{
	cout << "enter name of first player : \n";
	cin >> name_of_first_player;
	cout << "enter name of second player : \n";
	cin >> name_of_second_player;
	cout << "enter number of coins : \n";
	cin >> number_of_coins;
	for (int i = 0; i <= number_of_coins; i++) {
		first_player();
		if (number_of_coins == 0)
		{
			cout << name_of_first_player << " is winner \n";
			break;
		}
		second_player();
		if (number_of_coins == 0)
		{
			cout << name_of_second_player << " is winner \n";
			break;
		}
	}
}
void first_player()
{
	cout << name_of_first_player << " please enter coins : \n";
	cin >> coins_of_first_player;
	if (turns == 0) {
		while (coins_of_first_player >= number_of_coins)
		{
			cout << "please enter coins less than " << number_of_coins << "\n";
			cin >> coins_of_first_player;

		}
		turns++;
	}
	else
		while (coins_of_first_player > coins_of_second_player * 2)
		{
			cout << "please enter number at most twice of other player,s coins :\n";
			cin >> coins_of_first_player;
		}

		number_of_coins -= coins_of_first_player;
		cout << "number of coins is " << number_of_coins << "\n";
}

void second_player()
{
	cout << name_of_second_player << " please enter coins : \n";
	cin >> coins_of_second_player;

	while (coins_of_second_player > number_of_coins)
	{
		cout << "please enter any number less than number of coins : \n ";
		cin >> coins_of_second_player;
	}
	while (coins_of_second_player > coins_of_first_player * 2)
	{
		cout << "please enter number at most twice of other player,s coins :\n";
		cin >> coins_of_second_player;
	}
		
	number_of_coins -= coins_of_second_player;
	cout << "number of coins is " << number_of_coins << "\n";
}
