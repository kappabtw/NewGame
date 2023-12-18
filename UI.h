#include <iostream>
#include "mape.cpp"
#include "Person.cpp"
#include "Objects.h"

class UI
{

    virtual const std::string State() = 0;
    virtual void Dialog() = 0;
    virtual void Draw() = 0;

};

class StartGameUI: public UI
{
    public:
        const std::string State() override;
        void Draw() override;
    private:
        void Dialog() override;
};

class Maze: public UI
{
    public:
        Maze(Mape GameMape, Person GamePerson, Key GameKey, Exit GameExit);
        const std::string State() override;
        void Draw() override;
    private:
        Mape somemape;
        Person someperson{somemape};
        Key somekey{somemape};
        Exit someexit{somemape};
        std::vector<std::vector<int>> matrix;
        void Dialog() override;
        std::string voidIcon;
        std::string wallIcon;

};

class EndGameUI: public UI
{
    public:
        const std::string State() override;
        void Draw() override;
    private:
        void Dialog() override;
};