#include<iostream>
#include<string>
#include<cstdint>
#include <conio.h>
using namespace std;
int calculatorone ( int won ){
  //to calculate total point for player 1
  int scoreone = 0;
  if ( won == 0 ){
    scoreone++;
    cout<<"player 1 won this match";
  }
  return scoreone;
}
int calculatortwo ( int won ){
  //to calculate total point for player 2
  int scoretwo = 0;
  if ( won == 1 ){
    scoretwo++;
     cout<<"player 2 won this match";
  }
  return scoretwo;
}
int manual ( string playerone , string playertwo ){
   if ( playerone == "ROCK" ){
      if ( playertwo == "ROCK" ){
        return -1;
      }
      else if ( playertwo == "SCISSOR" ){
        return 0;
      }
      else if ( playertwo == "PAPER" ){
        return 1;
      }
   }
   if ( playerone == "SCISSOR" ){
      if ( playertwo == "ROCK" ){
        return 1;
      }
      else if ( playertwo == "SCISSOR" ){
        return -1;
      }
      else if ( playertwo == "PAPER" ){
        return 0;
      }
    }
    if ( playerone == "PAPER" ){
      if ( playertwo == "ROCK" ){
        return 0;
      }
      else if ( playertwo == "SCISSOR" ){
        return 1;
      }
      else if ( playertwo == "PAPER" ){
        return -1;
      }
    }
     if ( playerone == "SCISSOR" ){
      if ( playertwo == "ROCK" ){
        return 1;
      }
      else if ( playertwo == "SCISSOR" ){
        return -1;
      }
      else if ( playertwo == "PAPER" ){
        return 0;
      }
    }

}
int inputone( ){
    char ch;
    int digit ;
    cout <<"Enter Your choice : ";
    ch = _getch();

    
    if (ch >= '0' && ch <= '9') {
        cout << '*';
        digit = ch - '0'; 

        //cout << "\nYou entered the digit: " << digit << std::endl;
    } else {
        cout << "\nInvalid input. Please enter a digit between 0 and 9." << std::endl;
    }
    return digit;
}
int inputtwo(){
  char ch;
    int digittwo ;
    cout <<"Enter Your choice : ";
    ch = _getch();

    
    if (ch >= '0' && ch <= '9') {
        cout << '*';
        digittwo = ch - '0'; 

        //cout << "\nYou entered the digit: " << digit << std::endl;
    } else {
        cout << "\nInvalid input. Please enter a digit between 0 and 9." << std::endl;
    }
    return digittwo;
}
void display ( ){
  cout<<endl;
  cout<<"GAME RULES :::: "<<endl;
  cout<<"Rock beat scissor "<<endl;
  cout<<"Scissor beat paper "<<endl;
  cout<<"Paper beats rock "<<endl;

}
int winner ( string usercall , string compcall  ) {
    if ( compcall == "ROCK" ){
      if ( usercall == "ROCK" ){
        return -1;
      }
      else if ( usercall == "SCISSOR" ){
        return 0;
      }
      else if ( usercall == "PAPER" ){
        return 1;
      }
    }
     if ( compcall == "SCISSOR" ){
      if ( usercall == "ROCK" ){
        return 1;
      }
      else if ( usercall == "SCISSOR" ){
        return -1;
      }
      else if ( usercall == "PAPER" ){
        return 0;
      }
    }
    if ( compcall == "PAPER" ){
      if ( usercall == "ROCK" ){
        return 0;
      }
      else if ( usercall == "SCISSOR" ){
        return 1;
      }
      else if ( usercall == "PAPER" ){
        return -1;
      }
    }
   
}
int multiplayer ( string nameone , string nametwo ){
  // string nameone , nametwo ;
  // cout<<"Enter Player 1 name : ";
  // cin>>nameone;
  // cout<<"Enter Player 2 name : ";
  // cin>>nametwo;
  int callone , calltwo ;
  cout<<"1. ROCK"<<endl;
  cout<<"2. PAPER"<<endl;
  cout<<"3. SCISSOR"<<endl;
  command1:
  cout<<nameone<<" ";
  int digit = inputone();
  cout<<endl;
  command2:
   cout<<nametwo<<" ";
  int digittwo = inputtwo();
  cout<<endl;
  cout<<nameone<<" choose option "<<digit<<endl;
  cout<<nametwo<<" choose option "<<digittwo<<endl;
  string playerone;
  if ( digit == 1 ){
   playerone = "ROCK";
  }
  else if ( digit == 2 ){
    playerone = "PAPER";
  }
  else if ( digit == 3 ){
    playerone = "SCISSOR";
  }
  else {
    cout<<"Invalid input  ########## "<<endl;
    goto command1;
}     
      string playertwo;
      if ( digittwo == 1 ){
        playertwo = "ROCK";
      }
      else if ( digittwo == 2 ){
        playertwo = "PAPER";
      }
      else if ( digittwo == 3 ){
        playertwo= "SCISSOR";
      }
      else {
        cout<<"Invalid Input #########"<<endl;
        goto command2;
      }
  int won = manual ( playerone , playertwo );
  int playerpointone = 0 ;
  int playerpointtwo = 0 ;
     if ( won == 1 ){
      cout<<endl;
        cout<<nametwo<<" You won this match"<<endl;
        return 1;
    }
    else if ( won == 0 ){
      cout<<endl;
        cout<<nameone<<" You won this match"<<endl;
        return 0;
    }
    else if ( won == -1 ){
      cout<<endl;
        cout<<" Game Draw "<<endl;
        return -1;
    } 
}

int inputuser()
{   string person  ;
    cout<<"Enter your name : "<<endl;
    cin>>person;
    cout<<"your name is "<<person<<endl;

  int call;
  cout<<"1. ROCK"<<endl;
  cout<<"2. PAPER"<<endl;
  cout<<"3. SCISSOR"<<endl;
  command1:
  cout<<"Enter your input number  :   "<<endl;
  cin>>call;
  cout<<endl;
  string yourcall;
  if ( call == 1 ){
    yourcall = "ROCK";
  }
  else if ( call == 2 ){
    yourcall = "PAPER";
  }
  else if ( call == 3 ){
    yourcall = "SCISSOR";
  }
  else {
    cout<<"Invalid input  ########## "<<endl;
    goto command1;
  }

  int computerinput = rand()%3 +1;
  string ccall;
  if ( computerinput == 1 ){
    ccall = "ROCK";
  }
  else if ( computerinput == 2 ){
    ccall = "PAPER";
  }
  else if ( computerinput == 3 ){
    ccall = "SCISSOR";
  }
    cout<<"Computer Choose :  "<<ccall<<endl;
    int output = winner( yourcall , ccall );
   if ( output == 1 ){
        cout<<"YOU WIN    ";
        return 1;
    }
    else if ( output == 0 ){
        cout<<"Computer win "<<endl;
        return 0;
    }
    else if ( output == -1 ){
        cout<<"Game Draw "<<endl;
        return 0;
    }
}
int main (){
    cout<<"***********************************************************************************************************************"<<endl;
    cout<<"#$#$#$#$#$#$#$#$#$#$$#$#$#$#$#$#$#$#$#$#$___ROCK PAPER SCISSOR___#$#$#$#$#$#$#$#$#$#$$#$#$#$#$#$#$#$#$#$#$"<<endl;
    cout<<"_____________________________Game Mode Type__________________________________ "<<endl;
    cout<<"SINGLE USER TYPE OR MULTIPLE USER TYPE"<<endl;
    string single;
    cout<<"For single player : type -> yes else for double {no}  "<<endl;
    cin>>single;
    if ( single == "yes" ){
      string input ;
    int score = 0;
    do {
         display();
          cout<<endl;
         score += inputuser();
         cout<<endl;
         cout<<"You want to play again : ";
         cin>>input;
         cout<<endl;
    }while ( input != "no" );
    cout<<"Your Score is : "<<score<<endl;
    }
    else {
      string nameone , nametwo ;
  cout<<"Enter Player 1 name : ";
  cin>>nameone;
  cout<<"Enter Player 2 name : ";
  cin>>nametwo;
       string input ;
    int score = 0;
    int score2 = 0;
    do {
         display();
          cout<<endl;
        int ans = multiplayer(nameone , nametwo );
        if ( ans > 0 ){
          score2 ++ ;
        }
        else if ( ans == 0 ){
          ++score;
        }
         cout<<endl;
         cout<<"You want to play again : ";
         cin>>input;
         cout<<endl;
    }while ( input != "no" );
    cout<<nameone<<" Your Score is : "<<score<<endl;
    cout<<nametwo<<" Your Score is : "<<score2<<endl;
    if ( score > score2 ){
      cout<<"$$$$ "<<nameone<<" You Won the Game $$$$ "<<endl;
    }
    else if ( score2 > score ){
      cout<<"$$$$ "<<nametwo<<" You Won the Game $$$$ "<<endl;
    }
    }
    cout<<"************************************______GAMEOVER_________************************************"<<endl;

}