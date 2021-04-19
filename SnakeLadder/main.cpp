#include <iostream>
#include <ctime>
#include "Grid.h"
#include "Dice.h"
#include "User.h"

using namespace std;
int rollDice(Dice dice)
{
    /*
     * Roll dice to give random value b/w 1 to range
     * */
    srand(time(0));
    int move = (abs(rand())%dice.getRange())+1;
    return move;
}
bool isValidMove(int move,int pos,Grid grid)
{
    /*
     * To check is the move lie inside the grid
     * */
    if((pos+move+1)>grid.getSize ()) return false;
    return true;
}
bool hasWon(int pos,Grid grid)
{
    /*To chek if current user has won or not*/
    if(pos+1==grid.getSize()) return true;
    return false;
}
int isSnakeHead(int pos,vector<Snake>snakes)
{
    for(int snakeId=0;snakeId<snakes.size();snakeId++)
    {
        if(snakes[snakeId].getHead()==pos) return snakeId;
    }
    return -1;
}
int isLadderTail(int pos,vector<Ladder>ladders)
{
    for(int ladderId=0;ladderId<ladders.size();ladderId++)
    {
        if(ladders[ladderId].getTail()==pos) return ladderId;
    }
    return -1;
}
int finalPosition(int move,int pos,Grid grid)
{
    pos+=move;
    while(true)
    {
        int snakeId=isSnakeHead(pos,grid.getSnakes());
        int ladderId=isLadderTail(pos,grid.getLadders());
        if(snakeId!=-1)
        {
            cout<<"Bitten by snake "<<snakeId<<endl;
            pos=grid.getSnakes()[snakeId].getTail();
        }
        else if(ladderId!=-1)
        {
            cout<<"Got the ladder "<<ladderId<<endl;
            pos=grid.getLadders()[ladderId].getHead();
        }
        else
        {
            return pos;
        }
    }
}
int main() {
    cout << "Hello, World!" << endl;

    Snake snake1 = Snake(0,10,5);
    Snake snake2 = Snake(1,20,5);
    Snake snake3 = Snake(2,33,18);
    Snake snake4 = Snake(3,57,25);
    Snake snake5 = Snake(4,77,57);
    vector<Snake>snakes;
    snakes.push_back(snake1);
    snakes.push_back(snake2);
    snakes.push_back(snake3);
    snakes.push_back(snake4);
    snakes.push_back(snake5);
    Ladder ladder1 = Ladder(0,55,3);
    Ladder ladder2 = Ladder(1,86,68);
    Ladder ladder3 = Ladder(2,57,44);
    Ladder ladder4 = Ladder(3,72,38);
    Ladder ladder5 = Ladder(4,32,27);
    vector<Ladder> ladders;
    ladders.push_back(ladder1);
    ladders.push_back(ladder2);
    ladders.push_back(ladder3);
    ladders.push_back(ladder4);
    ladders.push_back(ladder5);
    Grid grid = Grid(100,snakes,ladders);
    Dice dice = Dice(6);
    User user1 = User(0,0,"Dhiraj");
    User user2 = User(1,0,"Anmol");
    vector<User>users;
    users.push_back(user1);
    users.push_back(user2);
    int turn=0;
    bool gameActive=true;
    while(gameActive)
    {
        //cout<<"Press a\n";
        //char press;
        //cin>>press;
        int move= rollDice(dice);
        cout<<"User "<<turn<<" rolled the dice and got "<<move<<" final Position ";
        int finalPos=users[turn].getPos();
        if(isValidMove(move,finalPos,grid))
        {
            finalPos= finalPosition(move,finalPos,grid);
            users[turn].setPos(finalPos);
            if(hasWon(finalPos,grid))
            {
                gameActive= false;
                cout<<"User "<<turn<<" WON!\n";
            }

        }
        else
        {

            cout<<"User "<<turn<<" invalid move! final Position ";
        }
        cout<<finalPos<<endl;
        turn=(turn+1)%users.size();
    }
    return 0;
}
