//Game of Rock , Paper, Scissors, Spock

#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;
  int cp = 0;
  int up=0;

for (int i=0;i<5;i++){
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n"; 


std::cout << "shoot! ";

std::cin>>user;

if (user==1 && computer==1 ) {
 std::cout<<"\nTIE! Computer chose ✊ like you!\n";
}else if (user==2 && computer==2 ) {
 std::cout<<"\nTIE! Computer chose ✋ like you!\n";
}else if (user==3 && computer==3 ) {
 std::cout<<"\nTIE! Computer chose ✌️ like you!\n";
}else if (user==4 && computer==4) {
 std::cout<<"\nTIE! Computer chose 🦎 like you!\n";
}else if (user==5 && computer==5 ) {
 std::cout<<"\nTIE! Computer chose 🖖 like you!\n";
}else if (user==1 && computer==2 ){
 std::cout<<"\nPaper covers Rock. You WIN!\n";
 up += 1;
}else if (user==2 && computer==1 ){
 std::cout<<"\nPaper covers Rock.Computer WINS!\n";
 cp +=1;
}else if (user==1 && computer==3 ){
 std::cout<<"\nRock crushes Scissors.You WIN\n!";
 up +=1;
}else if (user==3 && computer==1 ){
 std::cout<<"\nRock crushes Scissors.Computer WINS!\n";
 cp +=1;
}else if (user==2 && computer==3 ){
 std::cout<<"\nScissors cuts Paper.Computer WINS!\n";
 cp +=1;
}else if (user==3 && computer==2 ){
 std::cout<<"\nScissors cuts Paper.You WIN!\n";
 up +=1;
}else if (user==1 && computer==4 ){
 std::cout<<"\nRock crushes Lizard..You WIN!\n";
 up +=1;
}else if (user==4 && computer==1 ){
 std::cout<<"\nRock crushes Lizard.Computer WINS!\n";
 cp +=1;
}else if (user==5 && computer==1 ){
 std::cout<<"\nSpock vaporizes Rock.You WIN!\n";
 up +=1;
}else if (user==1 && computer==5 ){
 std::cout<<"\nSpock vaporizes Rock.Computer WINS!\n";
 cp +=1;
}else if (user==2 && computer==4 ){
 std::cout<<"\nLizard eats Paper.Computer WINS!\n";
 cp +=1;
}else if (user==4 && computer==2 ){
 std::cout<<"\nLizard eats Paper.You WIN!\n";
 up +=1;
}else if (user==2 && computer==5 ){
 std::cout<<"\nPaper disproves Spock.Computer WINS!\n";
 cp +=1;
}else if (user==2 && computer==5 ){
 std::cout<<"\nPaper disproves Spock.You WIN!\n";
 up +=1;
}else if (user==4 && computer==3 ){
 std::cout<<"\nScissors decapitate Lizard.Computer WINS!\n";
 cp +=1;
}else if (user==3 && computer==4 ){
 std::cout<<"\nScissors decapitate Lizard.You WIN!\n";
 up +=1;
}else if (user==3 && computer==5 ){
 std::cout<<"\nSpock smashes Scissors.Computer WINS!\n";
 cp +=1;
}else if (user==5 && computer==3 ){
 std::cout<<"\nSpock smashes Scissors.You WIN!\n";
 up +=1;
}else if (user==5 && computer==4 ){
 std::cout<<"\nLizard poisons Spock.You WIN!\n";
 up +=1;
}else if (user==4 && computer==5 ){
 std::cout<<"\nLizard poisons Spock.You WIN!\n";
 up +=1;
}else {
  std::cout<<"\nEnter valid option!";
  break;
}

}
//end of loop
if (up>cp){
  std::cout<<"\n*****YOU WIN THE GAME!*****\n";
}
else if(up<cp){
  std::cout<<"\n*****COMPUTER WINS THE GAME!*****\n";
}
else {
  std::cout<<"\n*****IT'S A TIE!*****\n";
}
}

