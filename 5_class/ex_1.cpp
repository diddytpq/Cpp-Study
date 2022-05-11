#include <iostream>

class Animal
{
    private:
    int food;
    int weight;

    public:

        void set_animal(int _food, int _weight)
        {
            food = _food;
            weight = _weight;
        }

        void give_food(int _food)
        {
            food += _food;
            weight += (food / 3);
        }

        void view_stat()
        {
            std::cout << "food : " << food << std::endl;
            std::cout << "weight : " << weight << std::endl;
        }
};


int main()
{
    Animal animal;

    animal.set_animal(100, 50);
    animal.give_food(100);
    animal.view_stat();

    return 0;
}