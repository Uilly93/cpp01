#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int main(){

	{
		Weapon club = Weapon("Glock 18");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Ak-47");
		bob.attack();
	}
	{
		Weapon club = Weapon("Glock 18");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		club.setType("Ak-47");
		jim.attack();
	}
	return 0;
}