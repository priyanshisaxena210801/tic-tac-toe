#include<stdio.h>
#include<stdlib.h>
char sqr[10]={'o','1','2','3','4','5','6','7','8','9'};
int win();
void draw();
int main()
{
  int player=1,i,choice;
  char mark;//X,O
  do
  {
    draw();
    player=(player%2)?1:2;
    printf("Player %d ---Enter your choice----",player);
    scanf("%d",&choice);
    mark=(player%2)?'X':'O';
    if(choice==1 && sqr[1]=='1')
      sqr[1]=mark;
    else if(choice==2 && sqr[2]=='2')
      sqr[2]=mark;
    else if(choice==3 && sqr[3]=='3')
      sqr[3]=mark;
    else if(choice==4 && sqr[4]=='4')
      sqr[4]=mark;
    else if(choice==5 && sqr[5]=='5')
      sqr[5]=mark;
    else if(choice==6 && sqr[6]=='6')
      sqr[6]=mark;
    else if(choice==7 && sqr[7]=='7')
      sqr[7]=mark;
    else if(choice==8 && sqr[8]=='8')
      sqr[8]=mark;
    else if(choice==9 && sqr[9]=='9')
      sqr[9]=mark;
    else
    {
      printf("\n ----Invalid choice----\n");
      player--;
    }
    i=win();
    player++;
  }while(i==-1);
    draw();
  if(i==1)
  {
    printf("==>------VICTORY------ %dPLAYER:",--player);
  }
  else{
    printf("==>------ DRAW------ ");
  }
  return 0;
}
int win()
{
  if(sqr[1]==sqr[2]&&sqr[2]==sqr[3])
    return 1;
  else if(sqr[4]==sqr[5]&&sqr[5]==sqr[6])
    return 1;
  else if(sqr[7]==sqr[8]&&sqr[8]==sqr[9])
    return 1;
  else if(sqr[1]==sqr[4]&&sqr[4]==sqr[7])
    return 1;
  else if(sqr[2]==sqr[5]&&sqr[5]==sqr[8])
    return 1;
  else if(sqr[3]==sqr[6]&&sqr[6]==sqr[9])
    return 1;
  else if(sqr[1]==sqr[5]&&sqr[5]==sqr[9])
    return 1;
  else if(sqr[3]==sqr[5]&&sqr[5]==sqr[7])
    return 1;
  else if(sqr[1]!='1'&& sqr[2]!='2' &&sqr[3]!='3'&&sqr[4]!='4'&&sqr[5]!='5'&&sqr[6]!='6'&&sqr[7]!='7'&&sqr[8]!='8'&&sqr[9]!='9')
    return 0;
  else
    return -1;
}
void draw(){
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",sqr[1],sqr[2],sqr[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",sqr[4],sqr[5],sqr[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",sqr[7],sqr[8],sqr[9]);
	printf("     |     |     \n");	
}
