// Gumballs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                    GumBalls"<<endl<<"                                             by:"<<endl<<"                                                   DAII Chakib";
cout<<endl<<endl<<endl;
cout<<endl<<endl<<endl<<endl;	
cout<<endl<<endl;
cout<<endl<<endl<<endl<<"                                                  press any key to continue ^_^";
getch();


int iGumballs,iUserguess,iGuesses;
while(true)
{system("cls");
cin.clear();
iGuesses=0;
srand(static_cast<unsigned int>(time(0)));
iGumballs=rand()%1000+1;
cout<<"how many Gumballs are in the Gumball jar ? you Guess!! "<<endl;
do{cout<<"Enter your Guess"<<endl;
cin>>iUserguess;
if(iUserguess>iGumballs)cout<<"Too High  "<<endl<<endl;
else if(iUserguess<iGumballs)cout<<"Too Low  "<<endl<<endl;
iGuesses++;
}while(iUserguess!=iGumballs);
cout<<"You Guess the right amount of gumballs !! High Five ! "<<endl<<endl<<"You took "<<iGuesses<<" Guesses"<<endl<<endl;
system("pause");
}
	return 0;
}

