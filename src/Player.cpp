#include "../includes/Player.h"

Player::Player(const std::string &name)
        : Creature(name, '@', 10, 1, 0)
{

}

int Player::getMLevel() const {
    return m_level;
}

void Player::levelUp() {
    ++m_attack;
    ++m_level;
}

bool Player::hasWon() const{
    return (m_level >= 20);
}
