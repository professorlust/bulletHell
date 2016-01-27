#ifndef _EARRAY_HPP_
#define _EARRAY_HPP_

#include <iostream>
#include <list>
#include "enemy.hpp"

class EnemyArray
{
public:
    
    EnemyArray();
    void updateArray(BulletArray &bullets,bool);
    void addEnemy(float,float,int);
    int amountEnemies();
    bool collides(sf::Vector2f);
    
    sf::Vector2f getEnemyPos(int);
    sf::Vector2f getSpritePos(int);
    
    bool isMirror(int);
    
private:
    
    std::list<Enemy> enemies;
    sf::Vector2f playerpos;
    int routineTime;
    int routineType;
    void startRoutine(int);
    void updateRoutine();
    bool routineEnded();
    bool canEnd();
};


#endif