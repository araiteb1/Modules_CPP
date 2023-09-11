#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Enargy_points = 50;
    this->Hit_points = 100;
    this->attack_damage = 20;
}
ScavTrap::~ScavTrap()
{

}
void ScavTrap::guardGate()
{
    std::cout << "that ScavTrap is now in Gate keeper mode." << std::endl;
}