#include <iostream>
#include<stdlib.h>
#include<dos.h>
#include<cstdio>
using namespace std;
class game{

char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 char *player1;
 char *player2;

public:

int k=1;
 void filled()
 {
     cout<<"!!already filled!!enter empty boxes\n";
      if(k==1||k==3||k==5||k==7||k==9){
            player11();}
     else
     player22();

 }
int gameover1()
{
      for(int i=0;i<3;i++){
             if(a[i][0]==a[i][1]&&a[i][0]==a[i][2]||a[0][i]==a[1][i]&&a[0][i]==a[2][i]||a[2][0]==a[2][1]&&a[2][0]==a[2][2])
                return 1;
                else if(a[1][0]==a[1][1]&&a[1][0]==a[1][2])
                    return 1;
                else if(a[0][1]==a[1][1]&&a[0][1]==a[2][1])
                    return 1;
                else if(a[0][2]==a[1][2]&&a[0][2]==a[2][2])
                    return 1;
                else if(a[0][0]==a[1][1]&&a[0][0]==a[2][2])
                    return 1;
                    else if(a[0][2]==a[1][1]&&a[0][2]==a[2][0])
                        return 1;
             else
                return 0;
    }

}
    void gamedraw()
    {
           if(k==10){
            cout<<"\n\n\n\t\t\t\tOPPS!!!! GAME DRAW !!!!!TRY AGAIN!!!!\n";
             cout<<"\n\n\t\t\t\t\t\t copyright@c2020manoj nepali::\n\n\n";
                exit(0);

            }
    }



    void display(){
         cout<<"\n\n\n\t\t\t\t\t\t     WELCOME TO TIC TAC TOE GAME!!!!!!\n";
         cout<<"\t\t\t\t\t\t======================================================\n";
         cout<<"\t\t\t\t\t\t                      **DEVELOPED BY MANOJ NEPALI!!!!\n";
         cout<<"\t\t condition::\n";
         cout<<"\t=============================\n";
     cout<<"\t\t player[1]::X\n";
     cout<<"\t\t player[2]::O\n";

    cout<<"\t\t\t\t\t\t\t ________________________________\n";
    cout<<"\t\t\t\t\t\t\t|          |          |          |\n";
    cout<<"\t\t\t\t\t\t\t|    "<<a[0][0]<<"     |     "<<a[0][1]<<"    |     "<<a[0][2]<<"    |\n";
    cout<<"\t\t\t\t\t\t\t|          |          |          | \n";
    cout<<"\t\t\t\t\t\t\t|__________|__________|__________|\n";
    cout<<"\t\t\t\t\t\t\t|          |          |          |\n";
    cout<<"\t\t\t\t\t\t\t|    "<<a[1][0]<<"     |     "<<a[1][1]<<"    |     "<<a[1][2]<<"    |\n";
    cout<<"\t\t\t\t\t\t\t|          |          |          |\n";
    cout<<"\t\t\t\t\t\t\t|__________|__________|__________|\n";
    cout<<"\t\t\t\t\t\t\t|          |          |          |\n";
    cout<<"\t\t\t\t\t\t\t|    "<<a[2][0]<<"     |     "<<a[2][1]<<"    |     "<<a[2][2]<<"    |\n";
    cout<<"\t\t\t\t\t\t\t|          |          |          |\n";
    cout<<"\t\t\t\t\t\t\t|__________|__________|__________|\n";



     if(k==1||k==3||k==5||k==7||k==9){
              if(gameover1()==1)
        {
            cout<<"\n\n\t\t\t**************************************\n";
            cout<<"\t\t\tplayer[2] is winner!!! congratulations:\n";
            cout<<"\t\t\t***************************************\n";
             cout<<"\n\n\t\t\t\t\t\t\t copyright@c2020manoj nepali::\n\n\n";
           exit(0);}

     player11();
     }

     else if(k==2||k==4||k==6||k==8){
     if(gameover1()==1){
                    cout<<"\t\t\t******************************************\n";
            cout<<"\t\t\t\tplayer[1] is winner!!! congratulations:\n";
            cout<<"\t\t\t*******************************************\n";
            cout<<"\n\n\n\t\t\t\t\t\t\t copyright@c2020manoj nepali::\n\n\n";
           exit(0);}
        player22();}

    else
        gamedraw();
    }



void player11()
    {
        cout<<"\t\t\tplayer[1]::X:::";
        player1=new char;
        cin>>player1;
        switch(*player1){
   case '1':
        if(a[0][0]=='x'||a[0][0]=='o'){
            filled();
        }
        else
       a[0][0]='x';
      break;
   case '2':
       if(a[0][1]=='x'||a[0][1]=='o'){

            filled();
        }
        else
    a[0][1]='x';break;
     case '3':
         if(a[0][2]=='x'||a[0][2]=='o'){
            filled();
        }
        else
        a[0][2]='x';break;
         case '4':
             if(a[1][0]=='x'||a[1][0]=='o'){
                    filled();

        }
        else
       a[1][0]='x';break;
        case '5':
            if(a[1][1]=='x'||a[1][1]=='o'){
                    filled();

        }
        else
        a[1][1]='x';break;
         case '6':
             if(a[1][2]=='x'||a[1][2]=='o'){
                    filled();

        }
        else
       a[1][2]='x';break;
        case '7':
            if(a[2][0]=='x'||a[2][0]=='o'){
                    filled();

        }
        else
        a[2][0]='x';break;
         case '8':
             if(a[2][1]=='x'||a[2][1]=='o'){
                    filled();

        }
        else
       a[2][1]='x';break;
        case '9':
            if(a[2][2]=='x'||a[2][2]=='o'){
                    filled();

        }
        else
        a[2][2]='x';break;
        default:
            cout<<"\t\t\t!!invalid symbol!!please reenter\n";
            delete player1;
            player11();
             break;
        }
        k++;

        system("cls");
        display();

    }

void player22(){

         cout<<"\t\t\tplayer[2]::O:::";
         player2=new char;

        cin>>player2;


        switch(*player2){
   case '1':
       if(a[0][0]=='x'||a[0][0]=='o'){
            cout<<"\t\t\t";
            filled();

        }
        else
       a[0][0]='o';break;
   case '2':
       if(a[0][1]=='x'||a[0][1]=='o'){
            filled();

        }
        else
    a[0][1]='o';break;
     case '3':
         if(a[0][2]=='x'||a[0][2]=='o')
            filled();

            else

        a[0][2]='o';break;
         case '4':
             if(a[1][0]=='x'||a[1][0]=='o')
                filled();

            else
       a[1][0]='o';break;
        case '5':
                         if(a[1][1]=='x'||a[1][1]=='o')
                            filled();

            else
        a[1][1]='o';break;
         case '6':
                          if(a[1][2]=='x'||a[1][2]=='o')
                            filled();

            else
       a[1][2]='o';break;
        case '7':
            if(a[2][0]=='x'||a[2][0]=='o')
                filled();

            else
        a[2][0]='o';break;
         case '8':
            if(a[2][1]=='x'||a[2][1]=='o')
                filled();

            else
       a[2][1]='o';break;
        case '9':
            if(a[2][2]=='x'||a[2][2]=='o')
                filled();

            else
        a[2][2]='o';break;
        default:
            cout<<"\t\t\t!!invalid symbol!!please re-enter\n";
            delete player2;
            player22();
            break;
        }
            k++;



        system("cls");
        display();
        }

};
    int main()
    {
        game g1;
        system("color A");
        g1.display();

         return 0;

    }






