#include "../includes/Creature.h"


Creature::Creature(std::string name, char symbol, int health, int attack, int gold)
        : m_name{std::move(name )}, m_symbol{ symbol }, m_health{ health }, m_attack{ attack }, m_gold{ gold }
{

}

const std::string &Creature::getName() const {
    return m_name;
}

int Creature::getHealth() const {
    return m_health;
}

int Creature::getGold() const {
    return m_gold;
}

void Creature::addGold(int extra_gold) {
    m_gold += extra_gold;
}

bool Creature::isDead() const {
    return (m_health <= 0);
}


void Creature::reduceHealth(int hit_points) {
    m_health -= hit_points;
}

int Creature::getAttack() const {
    return m_attack;
}

char Creature::getSymbol() const {
    return m_symbol;
}
