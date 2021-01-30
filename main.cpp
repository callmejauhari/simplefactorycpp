#include <iostream>

using std::cout;
using std::endl;

class Fruit
{

};

class Apple : public Fruit
{
public:
    Apple()
    {
        cout << "This is Apple" << endl;
    }
};

class Orange : public Fruit
{
public:
    Orange()
    {
        cout << "This is Orange" << endl;
    }
};

class FruitSimpleFactory
{
public:
    Apple *createApple()
    {
        return new Apple;
    }
    Orange *createOrange()
    {
        return new Orange;
    }
};

int main()
{
    FruitSimpleFactory fruitFactory;
    Fruit *apple = fruitFactory.createApple();
    Fruit *orange = fruitFactory.createOrange();
    return 0;
}