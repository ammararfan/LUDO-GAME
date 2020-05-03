#include "Player.h"
void Player::SetName(string n)
{
	Name = n;
}
void Player::SetColor(Color c)
{
	C = c;
}
void Player::SetTeamNum(int n)
{
	Team = n;
}
string Player::GetName()
{
	return Name;
}
Color Player::GetColor()
{
	return C;
}
int Player::GeteamNum()
{
	return 0;
}