#include<iostream>
#include<string>
#include<cstdint>
using namespace std;
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
int inputuser()
{ int call;
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
    string name ;
    cout<<"Enter your name : ";
    getline(cin, name );
    cout<<name<<endl;
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
    cout<<"************************************______GAMEOVER_________************************************"<<endl;
}