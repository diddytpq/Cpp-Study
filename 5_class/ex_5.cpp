#include <iostream>
#include <string.h>

class Marine{
    int hp;
    int x_pos, y_pos;
    int damage;
    bool is_dead;
    char* name;

    public:
    Marine();
    Marine(int x, int y);
    Marine(int x, int y, const char* marine_name);
    ~Marine();

    int attack();
    void be_attacked(int damage_earn);
    void move(int x, int y);

    void show_status();
};

Marine::Marine()
{
    hp = 50;
    x_pos = y_pos = 0;
    damage = 5;
    is_dead = false;
    name = NULL;
}

Marine::Marine(int x, int y)
{
    x_pos = x;
    y_pos = y;
    hp = 50;
    damage = 5;
    is_dead = false;
    name = NULL;

}
    
Marine::Marine(int x, int y, const char* marine_name)
{
    name = new char[strlen(marine_name) + 1];
    strcpy(name, marine_name);

    x_pos = x;
    y_pos = y;
    hp = 50;
    damage = 5;
    is_dead = false;
}

void Marine::move(int x, int y)
{
    x_pos = x;
    y_pos = y; 
}
int Marine::attack() {return damage;}

void Marine::be_attacked(int damage_earn)
{
    hp -= damage_earn;
    if (hp <= 0){
        is_dead = true;
    }
}

void Marine::show_status()
{
    std::cout << name << std::endl;
    std::cout << " pos : " << x_pos << "," << y_pos << std::endl;
    std::cout << " HP : " << hp << std::endl;

}

Marine::~Marine()
{
    if (name != NULL)
    {
        delete[] name;
    }
}
// int main()
// {
//     Marine marine_1;
//     Marine marine_2(2,3);

//     marine_1.show_status();
//     marine_2.show_status();

//     return 0;
// }

int main()
{
    Marine* marines[100];

    marines[0] = new Marine(2,3,"marine_1");
    marines[1] = new Marine(3,5,"marine_2");

    marines[0]->show_status();
    marines[1]->show_status();

    std::cout << "attack marine_1 to marine_2" << std::endl;

    marines[1]->be_attacked(marines[0]->attack());

    marines[0]->show_status();
    marines[1]->show_status();

    delete marines[0];
    delete marines[1];

    return 0;
}