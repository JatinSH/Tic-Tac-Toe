#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
char tictac[]={'1','2','3','4','5','6','7','8','9'};
char X,O;
void box()
{
	cout<<"\n\t\t\t\t   |   |   \n";
	cout<<"\t\t\t\t "<<tictac[0]<<" | "<<tictac[1]<<" | "<<tictac[2]<<"\n";
	cout<<"\t\t\t\t___|___|___\n";
	cout<<"\t\t\t\t   |   |   \n";
	cout<<"\t\t\t\t "<<tictac[3]<<" | "<<tictac[4]<<" | "<<tictac[5]<<"\n";
	cout<<"\t\t\t\t___|___|___\n";
	cout<<"\t\t\t\t   |   |   \n";
	cout<<"\t\t\t\t "<<tictac[6]<<" | "<<tictac[7]<<" | "<<tictac[8]<<"\n";
	cout<<"\t\t\t\t   |   |   \n";

}
void dummybox()
{
	cout<<"\n\t\t\t\t   |   |   \n";
	cout<<"\t\t\t\t O"<<" | "<<tictac[1]<<" | X"<<"\n";
	cout<<"\t\t\t\t___|___|___\n";
	cout<<"\t\t\t\t   |   |   \n";
	cout<<"\t\t\t\t "<<tictac[3]<<" | O"<<" | "<<tictac[5]<<"\n";
	cout<<"\t\t\t\t___|___|___\n";
	cout<<"\t\t\t\t   |   |   \n";
	cout<<"\t\t\t\t "<<tictac[6]<<" | "<<tictac[7]<<" | X"<<"\n";
	cout<<"\t\t\t\t   |   |   \n";

}
int winner()
{
	if(tictac[0]==tictac[1]&&tictac[1]==tictac[2]&&tictac[2]==O)
		return 1;
	else if(tictac[3]==tictac[4]&&tictac[4]==tictac[5]&&tictac[5]==O)
		return 1;
	else if(tictac[6]==tictac[7]&&tictac[7]==tictac[8]&&tictac[8]==O)
		return 1;
	else if(tictac[0]==tictac[3]&&tictac[3]==tictac[6]&&tictac[6]==O)
		return 1;
	else if(tictac[1]==tictac[4]&&tictac[4]==tictac[7]&&tictac[7]==O)
		return 1;
	else if(tictac[2]==tictac[5]&&tictac[5]==tictac[8]&&tictac[8]==O)
		return 1;
	else if(tictac[0]==tictac[4]&&tictac[4]==tictac[8]&&tictac[8]==O)
		return 1;
	else if(tictac[2]==tictac[4]&&tictac[4]==tictac[6]&&tictac[6]==O)
		return 1;
	else if(tictac[0]==tictac[1]&&tictac[1]==tictac[2]&&tictac[2]==X)
		return 2;
	else if(tictac[3]==tictac[4]&&tictac[4]==tictac[5]&&tictac[5]==X)
		return 2;
	else if(tictac[6]==tictac[7]&&tictac[7]==tictac[8]&&tictac[8]==X)
		return 2;
	else if(tictac[0]==tictac[3]&&tictac[3]==tictac[6]&&tictac[6]==X)
		return 2;
	else if(tictac[1]==tictac[4]&&tictac[4]==tictac[7]&&tictac[7]==X)
		return 2;
	else if(tictac[2]==tictac[5]&&tictac[5]==tictac[8]&&tictac[8]==X)
		return 2;
	else if(tictac[0]==tictac[4]&&tictac[4]==tictac[8]&&tictac[8]==X)
		return 2;
	else if(tictac[2]==tictac[4]&&tictac[4]==tictac[6]&&tictac[6]==X)
		return 2;
	else
		return 0;
}
int main()
{
	textcolor(0+BLINK);
	textbackground(7);
	clrscr();
	gotoxy(5,5);
	cout<<"\n\n\n\n\n";
	for(int i=0;i<35;++i)
	{
		cout<<" TIC\b\b\b";
	}
	cout<<"\n";
	for(int J=0;J<35;++J)
	{
		cout<<" TAC\b\b\b";
	}
	cout<<"\n";
	for(int j=0;j<34;++j)
	{
		cout<<"  TOE!!\b\b\b\b\b\b";
	}
	getch();
	clrscr();
	gotoxy(30,10);
	cout<<"PLEASE WAIT!";
	delay(2000);
	textcolor(0);
	clrscr();
	char answer;
	do
	 {
		char player1[20],player2[20],first[20],second[20];
		char start,choiceof1,terminate,begin;
		int o,x,a;
		cout<<"\t\t\t     TIC TAC TOE GAME!!\n\n";
		cout<<"Player 1,Enter your name : \n\n";
		gets(player1);
		cout<<"\n\nPlayer 2,Enter your name : \n\n";
		gets(player2);
		cout<<"\n\n"<<player1<<", choose one from O or X: \n\n";
		cin>>choiceof1;
		if(choiceof1=='O'||choiceof1=='o'||choiceof1=='0')
		{
			O='O';
			X='X';
		}
		else if(choiceof1=='X'||choiceof1=='x')
		{
			O='X';
			X='O';
		}
		else
		{
			cout<<"WRONG CHOICE!\nPress any key: ";
			getch();
			return 0;
		}

		cout<<"\n\n"<<player1<<", your symbol is "<<O;
		cout<<"\n\n"<<player2<<", your symbol is "<<X;
		cout<<"\n\n\t\t LETS START THE GAME!\n\n\t\tPress any key: ";
		getch();
		textbackground(CYAN);
		textcolor(BLACK);
		clrscr();
		cout<<"\t\t\t     TIC TAC TOE GAME!!\n\n";
		box();
		cout<<"\n\nINSTRUCTIONS : \n\nThe box shown above is the Tic Tac Toe Layout.\n";
		cout<<"There are numbers assigned to every position.\n";
		cout<<"When you want to enter your symbol,just enter the number of the position";
		cout<<" of the place you want.";
		cout<<"\nPress any key!\n";
		getch();
		clrscr();
		cout<<"If a position has been filled by either O or X, then you STRICTLY";
		cout<<" CANNOT enter the position numbers of those places.\n For example:\n\n";
		cout<<"\t\t";
		dummybox();
		cout<<"\n\nHere, now you cannot enter numbers 1,3,5 and 9 when it is your turn!";
		cout<<"\nPress any key to start the game!";
		getch();
		textbackground(6);
		textcolor(WHITE);
		clrscr();
		cout<<"\t\t\t     TIC TAC TOE GAME!!\n\n";
		box();
		cout<<"Who wants to start first? "<<player1<<" or "<<player2<<"?\n";
		gets(first);
		if(!strcmp(first,player1))
		{
			strcpy(second,player2);
			for(int i=0;i<5;++i)
			{
				cout<<first<<", Enter your move : ";
				cin>>o;
				tictac[o-1]=O;
				clrscr();
				cout<<"\t\t\t     TIC TAC TOE GAME!!\n\n";
				box();
				a=winner();
				if(a>0)
					break;
				if(i<4)
				{
					cout<<second<<", Enter your move : ";
					cin>>x;
					tictac[x-1]=X;


					clrscr();
					cout<<"\t\t\t     TIC TAC TOE GAME!!\n\n";
					box();
				}
				a=winner();
				if(a>0)
				break;
			}
		}
		else
		{
			strcpy(second,player1);
			for(int j=0;j<5;++j)
			{
				cout<<first<<", Enter your move : ";
				cin>>x;
				tictac[x-1]=X;
				clrscr();
				cout<<"\t\t\t     TIC TAC TOE GAME!!\n\n";
				box();
				a=winner();
				if(a>0)
				break;
				if(j<4)
				{
					cout<<second<<", Enter your move : ";
					cin>>o;
					tictac[o-1]=O;
					clrscr();
					cout<<"\t\t\t     TIC TAC TOE GAME!!\n\n";
					box();
				}
				a=winner();
				if(a>0)
					break;
			}
		}
		if(a==1)
		{
			cout<<"\n\n"<<player1<<" WINS!!!";
		}
		else if(a==2)
		{
			cout<<"\n\n"<<player2<<" WINS!!!";
		}
		else
		{
			cout<<"\n\nDRAW!!";
		}
		cout<<"\n\n\t\tTHANK YOU FOR PLAYING!!\n";
		cout<<"Do you want to play again? Press y for yes, else press any key to exit:";
		cin>>answer;
		clrscr();
		tictac[0]='1';
		tictac[1]='2';
		tictac[2]='3';
		tictac[3]='4';
		tictac[4]='5';
		tictac[5]='6';
		tictac[6]='7';

		tictac[7]='8';
		tictac[8]='9';

	       }while(answer=='y'||answer=='Y');
}
