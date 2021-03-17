#include "../includes/Monster.h"

namespace MersenneEngine{
    std::random_device rd;
    std::mt19937 mersenne { rd() };
}

Monster::Monster(Monster::Type type)
        :Creature( getDefaultCreature(type) )
{

}

int getRandomNumber(int min, int max) {
    std::uniform_int_distribution<> die{min, max};
    return die(MersenneEngine::mersenne);
}

Monster Monster::getRandomMonster() {
    int number { getRandomNumber(0, static_cast<int>(Type::MAX_TYPE)-1) };
    return Monster(static_cast<Type>(number));
}
