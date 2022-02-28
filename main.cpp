#include <iostream>
using namespace std;
class Player{
public:
virtual void Play()=0;
};
class CricketPlayer:public Player{
void Play(){
  cout<<"This Player Plays Cricket"<<endl;
}
};
int main() {
  Player *p;
  CricketPlayer obj;
  p=&obj;
  p->Play();

  
}