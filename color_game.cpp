#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std; // font 20
int balance = 500;
string c1[6] ={"⬜","🟪","🟦","🟥","🟨","🟩"};
string c2[6]={"⬜","🟪","🟦","🟥","🟨","🟩"};
string c3[6]={"⬜","🟪","🟦","🟥","🟨","🟩"};
int a;
int j;
int bet;
string c;
int main()
{
int r1,r2,r3;


cout<<"================================"<<endl;
cout<<"💲"<<balance<<"\t COLOR GAME"<<endl;
cout<<"================================"<<endl;
textcolor(4); cout<<"\t  [1] ";
textcolor(7); cout<<"[2] ";
textcolor(2); cout<<"[3] "<<endl;
textcolor(5); cout<<"\t  [4] ";
textcolor(1); cout<<"[5] ";
textcolor(6); cout<<"[6] "<<endl; textcolor(7);
cout<<"================================"<<endl;
if(balance != 0){

cout<<"enter color: ";
cin>>a;
switch(a){
case 1:c ="red 🟥"; j = 3; break;  
case 2: c = "white ⬜"; j = 0; break;
case 3:c ="green 🟩"; j = 5; break;
case 4: c = "purple 🟪"; j = 1; break;
case 5:c="blue 🟦"; j = 2; break;
  case 6:c= "yellow 🟨"; j = 4; break;
 default:	system("cls");	main(); break;
}

if( balance != 0){
cout<<"enter bet: ";
cin>>bet;
if(bet > balance){
	system("cls");
	main();
}
cout<<"you place bet on "<<c<<endl;
cout<<"\n=========[⬜]=[⬜]=[⬜]========="<<endl;
}
sleep(1);
system("cls");
srand(time(0));
for(int i = 1; i <= 5; i++){
cout<<"================================"<<endl;
cout<<"💲"<<balance<<"\t COLOR GAME"<<endl;
cout<<"================================"<<endl;
textcolor(4); cout<<"\t  [1] ";
textcolor(7); cout<<"[2] ";
textcolor(2); cout<<"[3] "<<endl;
textcolor(5); cout<<"\t  [4] ";
textcolor(1); cout<<"[5] ";
textcolor(6); cout<<"[6] "<<endl; textcolor(7);
cout<<"================================"<<endl;
cout<<"enter color: "<<a<<endl;
cout<<"enter bet: "<<bet<<endl;
cout<<"you place bet on "<<c<<endl;
r1=rand()%5;
r2=1+(rand()%5);
r3=1+(rand()%5);


cout<<"\n=========["<<c1[r1]<<"]"<<"=["<<c2[r2]<<  "]=["<<c3[r3]<<"]========="<<endl;
sleep(1);
system("cls");	
}

cout<<"================================"<<endl;
cout<<"💲"<<balance<<"\t COLOR GAME"<<endl;
cout<<"================================"<<endl;
textcolor(4); cout<<"\t  [1] ";
textcolor(7); cout<<"[2] ";
textcolor(2); cout<<"[3] "<<endl;
textcolor(5); cout<<"\t  [4] ";
textcolor(1); cout<<"[5] ";
textcolor(6); cout<<"[6] "<<endl; textcolor(7);
cout<<"================================"<<endl;
cout<<"enter color: "<<a<<endl;
cout<<"enter bet: "<<bet<<endl;
cout<<"you place bet on "<<c<<endl;
r1=rand()%5;
r2= rand()%5;
r3=1+(rand()%4);

cout<<"\n=========["<<c1[r1]<<"]"<<"=["<<c2[r2]<<  "]=["<<c3[r3]<<"]========="<<endl;
sleep(2);
int result;
if(j == r1){

	if( j == r2 && j == r3 ){
	  result = bet * 3;
	  textcolor(8);
	  cout<<"\t       ×3";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else if( j == r2){
	  result = bet * 2;
	  textcolor(8);
	  cout<<"\t       ×2";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else if(j == r3){
	  result = bet * 2;
	  textcolor(8);
	  cout<<"\t       ×2";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else{
	  result = bet * 1;
      textcolor(8);
	  cout<<"\t       ×1";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}		
	
}else if( j == r2){
	
		if( j == r1 && j == r3 ){
	  result = bet * 3;
	  textcolor(8);
	  cout<<"\t       ×3";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else if( j == r1){
	  result = bet * 2;
	  textcolor(8);
	  cout<<"\t       ×2";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else if(j == r3){
	  result = bet * 2;
	  textcolor(8);
	  cout<<"\t       ×2";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else{
	  result = bet * 1;
      textcolor(8);
	  cout<<"\t       ×1";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}		
	
}else if(j == r3){
	
			if( j == r1 && j == r2 ){
	  result = bet * 3;
	  textcolor(8);
	  cout<<"\t       ×3";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else if( j == r1){
	  result = bet * 2;
	  textcolor(8);
	  cout<<"\t       ×2";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else if(j == r2){
	  result = bet * 2;
	  textcolor(8);
	  cout<<"\t       ×2";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}else{
	  result = bet * 1;
      textcolor(8);
	  cout<<"\t       ×1";
	  textcolor(7);
   	cout<<"\n\t      +"<<result<<endl;
	}		

}else{
	result = bet - bet; 
	cout<<"\n\t      -"<<bet<<endl;	
}

if(result == 0){
	balance = balance - bet;
}else{
	balance = balance + result;
}
char y;	
cout<<"\ndo you want to try again? y/n: ";
cin>>y;
switch(y){
case 'y':
system("cls");
main();
break;

default:
cout<<"\n     thank you for playing!!!\n"<<endl;
cout<<"================================";
break;
}



}else{
	textcolor(4);
	cout<<"\n      you're out of balance"<<endl;
	textcolor(7);
	cout<<"\n     thank you for playing!!!\n"<<endl;
cout<<"================================"<<endl;
	textcolor(7);
}



}
