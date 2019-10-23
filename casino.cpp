#include<iostream>
#include<cstdlib>
#include<ctime>
#include<strings.h>
using std :: cout;
using std :: rand;
using namespace std;

int poolAmount = 0;

void firstGame(){
	char play = 'y';
	while(play == 'y' && poolAmount >= 1000){
	
		cout<<"-----------------\n\n";
		cout<<"===== 1-36 =====\n\n";
		
		int amt = 0;
		do{
			cout<<"Please enter your Bet Amount(Should be less than pool amount):\n";
			cin>>amt;	
		}while(amt > poolAmount);
	
		poolAmount -= amt;
		
		int randomNum = rand()%36+1;
		int guessNo = 0;
		
		do{
			cout<<"Please enter a number between 1 - 36:\n";
			cin>>guessNo;
		}while(guessNo<1 && guessNo>36);
		
		cout<<"Number genearted is: "<<randomNum<<"\n";
		
		if(guessNo == randomNum){
			cout<<"\n\"You have won "<<2*amt<<"\"\n";
			poolAmount += 2*amt;
		}else{
			cout<<"\n\"Better luck next time!\"\n\n";
		}
		
		if(poolAmount< 1000)
			break;
		
		cout<<"=== Your pool amount is Rs."<<poolAmount<<" ===\n\n";
		cout<<"Continue the same game?y/n\n\n";
		cin>>play;
	
	}
}

void secondGame(){
	char play = 'y';
	while(play == 'y' && poolAmount >= 1000){
	
		cout<<"-----------------\n\n";
		cout<<"===== Odd or Even =====\n\n";
		
		int amt = 0;
		do{
			cout<<"Please enter your Bet Amount(Should be less than pool amount):\n";
			cin>>amt;	
		}while(amt > poolAmount);
		
		poolAmount -= amt;
		
		cout<<"Enter 1 for odd and 2 for even\n";
		int oE = 0;
		cin>>oE;
		
		int randomNum = rand()%36+1;
		
		cout<<"Number genearted is: "<<randomNum<<"\n";
		
		if(randomNum % oE == 0){
			cout<<"\n\"You have won "<<2*amt<<"\"\n";
			poolAmount += 2*amt;
		}else{
			cout<<"\n\"Better luck next time!\"\n\n";
		}
		
		if(poolAmount< 1000)
			break;
			
		cout<<"=== Your pool amount is Rs."<<poolAmount<<" ===\n\n";
		cout<<"Continue the same game?y/n\n\n";
		cin>>play;
	
	}
}

void thirdGame(){
	char play = 'y';
	while(play == 'y' && poolAmount >= 1000){
	
		cout<<"-----------------\n\n";
		cout<<"===== Which half? =====\n\n";
		
		int amt = 0;
		do{
			cout<<"Please enter your Bet Amount(Should be less than pool amount):\n";
			cin>>amt;	
		}while(amt > poolAmount);
		
		poolAmount -= amt;
		
		
		int randomNum = rand()%36;
		int compHalf = 0;
		
		int half = 0;
		cout<<"For first half enter 1 and for second half enter 2\n";
		cin>>half;
		
		compHalf = randomNum / 18;
		
		cout<<"Number genearted is: "<<randomNum+1<<"\n";
		
		if(half == compHalf+1){
			cout<<"\n\"You have won "<<2*amt<<"\"\n";
			poolAmount += 2*amt;
		}else{
			cout<<"\n\"Better luck next time!\"\n\n";
		}
		
		if(poolAmount< 1000)
			break;
		
		cout<<"=== Your pool amount is Rs."<<poolAmount<<" ===\n\n";
		cout<<"Continue the same game?y/n\n\n";
		cin>>play;
	
	}
}

void fourthGame(){
	char play = 'y';
	while(play == 'y' && poolAmount >= 1000){
	
		cout<<"-----------------\n\n";
		cout<<"===== Which quarter? =====\n\n";
		
		int amt = 0;
		do{
			cout<<"Please enter your Bet Amount(Should be less than pool amount):\n";
			cin>>amt;	
		}while(amt > poolAmount);
		
		poolAmount -= amt;
		
		int randomNum = rand()%36;
		int compQ = 0;
		
		int quarter = 0;
		cout<<"Please enter your quarter number, there are 9 quarter so enter any number from 1 t 9\n";
		cin>>quarter;
		
		compQ = randomNum / 4;
		
		cout<<"Number genearted is: "<<randomNum+1<<"\n";
		
		if(quarter == compQ+1){
			cout<<"\n\"You have won "<<2*amt<<"\"\n";
			poolAmount += 2*amt;
		}else{
			cout<<"\n\"Better luck next time!\"\n\n";
		}
		
		if(poolAmount< 1000)
			break;
		
		cout<<"=== Your pool amount is Rs."<<poolAmount<<" ===\n\n";
		cout<<"Continue the same game?y/n\n\n";
		cin>>play;
	
	}
}


int main(){
	char play = 'y';
	int gameNo = 0;
	
	cout<<"===== Welcome To CASINO ROYALE =====\n";
	do{
		cout<<"Please enter pool amount(It should be greater the Rs.1000):\n";
		cin>>poolAmount;
	}while(poolAmount < 1000);

	
	while(play == 'y' && poolAmount >= 1000){
		cout<<"Please select a game to play\n";
		cout<<"1)1-36\n";
		cout<<"2)Chit-Pat(odd or even)\n";
		cout<<"3)Which half\n";
		cout<<"4)Which quarter\n";
		cout<<"5)exit\n";
		
		cin>>gameNo;
		
		srand(time(NULL));
		
		switch(gameNo){
			case 1: firstGame();break;
			case 2: secondGame();break;
			case 3: thirdGame();break;
			case 4: fourthGame();break;
			case 5:exit(0);
			default:break;
		}
		
		if(poolAmount< 1000)
			break;
		
		cout<<"-----------------\n";
		cout<<"Do you want to play another game?y/n\n";
		cin>>play;
	}
	
	if(poolAmount < 1000){
		cout<<"\n===== You cannot continue as the pool amount is less than 1000 =====\n";
	}else{
	
		cout<<"\n===== You have won total Rs."<<poolAmount<<"=====\n";
	}
	
		cout<<"||||| Thank you for playing the game |||||";
	
	return 0;
}




