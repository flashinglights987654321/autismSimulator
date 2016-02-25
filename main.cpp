#include <iostream>
#include <string.h>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
   string A1;
   string Name;
   string B1;
   cout << "Name: ";
   cin >> Name;   
   cout << Name << ", do you know what autism is \n <y or n> ";
   Name = "[" + Name + "] ";
   string C1;
   cin >> C1;
   if(C1 == "y"){
   cout << "1. Low functing \n";
   cout << "2. High functing \n";
   cin >> A1;
   
   /* low functing */
   if(A1 == "1"){
    system("CLS");   
	cout << "Imagin you have the mental copasity of a 2-5 year old in your current body. \n Now do you have that in your head, \n  Now imagin not being able to communicate. \n Do you have that in your head (y or n) \n";
    cin >> B1;
	if(B1 == "y"){
		string System;
		System = "[Max]";
		system("CLS");
		cout << System << " Hi " << Name << " How are you today.";
		string UI1;
		cin >> UI1;
		UI1 = UI1 + "ie";
		cout << Name << UI1;
	} 
	else{
		system("CLS");
		system("PAUSE");
		return 0;
	}
	  
   }
   /* high functing*/
   	else if(A1 == "2"){
		string hf1yon;
		cout << "Imagin you had a special skill that you were really good at and that \n you got that image in your head? <y or n> \n Awnser here: ";
		cin >> hf1yon;
		if(hf1yon == "y"){
			cout << "You have been assigned the skill of computer programing\n";
			system("Pause");
			hf2yon = "y";
			
				if(hf2yon == "y"){
					system("CLS");
					cout << "now that you have your skill you can use \n that skill to: \n 1: Help others \n 2: Keep it to your self and not help any one\n 3: A bit of both";
					string hf3;
					cin >> hf3;
					/* Help others*/
					if(hf3 == "1"){
						
						cout << "";
					
						
					}
					/* keep to self */
					else if(hf3 == "2"){
						
						
						
					}
					/*a bit of both */
					else if(hf3 == "3"){
						
						
						
					}
					
					
				}
				
			}
			else{
				return 5;
			}
		}
}

	/* secrete */ 
	else if(A1 == "feet"){
		
		cout << "feet"; 
		/* face */
		cout << "\n //////////////////////////////////////////////// \n /////////////----------------------///////////// \n ////////----                       ----///////// \n ///////|     ----              ----    |//////// \n ///////|     |* |              |* |    |//////// \n ///////|                               |//////// \n ///////|                               |//////// \n ///////|   \                        /   |//////// \n ///////|    \______________________/    |//////// \n ////////----                       ----///////// \n /////////////----------------------///////////// \n //////////////////////////////////////////////// \n";
	}
	else if( A1 == "gabe" ){
		
		for( ; ; ){
						system("Color 0B");
			cout << "R";
						system("Color a1");
			cout << "A";
						system("Color b2");
			cout << "I";
						system("Color c3");
			cout << "N";
						system("Color d4");
			cout << "B";
						system("Color e5");
			cout << "O";
						system("Color f6");
			cout << "W \n";
			
			
		}
		
	} 

		
}
/* what is autism */
else if(C1 == "n"){
	
	cout << "autism is a mental 'Disability' that can make it harder to fit in with society because they can't comunacate as well as other people\n" ;
	
}
/* end of code */
}
