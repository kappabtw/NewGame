#include "UI.cpp"
class GameLoop
{
    public:
        GameLoop(Mape GameMape, Person GamePerson, Key GameKey, Exit GameExit, Maze GameMaze);
        void StartGame();
    private:

        class CommandParser
        {
            public:
                CommandParser(Mape GameMape, Person GamePerson, Key GameKey, Exit GameExit, Maze GameMaze);
                void MovePlayer();
                const bool PlayerOnExit();
            private:
                class ButtomPress
                {
                    public:
                        const std::string KeyPressed();
                };
                class PlayerCollision
                {
                    public: 
                        PlayerCollision(Mape GameMape, Person GamePerson, Exit GameExit);
                        const bool CanMove(std::string coord, int value_change);
                    private:
                        std::vector<std::vector<int>> matrix;
                        Mape somemape;
                        Person someperson{somemape};
                        Exit someexit{somemape};
                };
                ButtomPress Press;
                StartGameUI StartUI;
                Mape somemape;
                Person someperson{somemape};
                Key somekey{somemape};
                Exit someexit{somemape};
                PlayerCollision Collision{somemape, someperson, someexit};
                Maze somemaze{somemape,someperson,somekey,someexit};
            
        };

        CommandParser *Command;

};