#include<iostream>
using namespace std;
void calculator();
void KMandM();
void MandCM();
int Mtable()
		{int i,m,m1;
		cout<<"MULTIPLICATION TABLE\n";
		cout<<"enter the digit to get multiplication table: ";
		cin>>m1;
		cout<<"\n";
		for(i=1;i<=10;i++)
		{
			m=i*m1;
			cout<<m1<<"X"<<i<<"="<<m<<"\n";}
		}	
void FARandCEL();
void KMHandMPH();
 
int main()
		{   string name;
    		int option; 
			cout<<"HAI WELCOME TO UNIVERSAL CONVERTER AND CALULATOR"<<"\n";
			cout<<"\nPLEASE ENTER YOUR NAME:";
    		cin>>name;
    		cout<<"\n WELCOME "<<name<<" TO UNIVERSAL CALCULATOR AND COVERTER\n"<<"\n";
    		cout<<"\n"<<"CHOOSE YOUR OPTION\n";
    		cout<< "1: CALCULATOR\n";
			cout<< "2: KM and M CONVERTER\n";
			cout<< "3: CM and METRE CONVERTER\n";
			cout<< "4: MULTIPLICATION TABLE GENERATOR\n";
			cout<< "5 :FAHRENHEIT and CELCIUS CONVERTER\n";
			cout<< "6 :KMPH and MPH CONVERTER\n";
			cin>>option;
	
	switch(option){
		case 1:
			calculator(); 
			break;
		case 2:
			KMandM(); 
			break;
		case 3:
		    MandCM();
		    break;
		case 4:
		    Mtable();
		    break;
		case 5:
		    FARandCEL();
		    break;
	    case 6:
		    KMHandMPH();
		    break;
		default:
			cout<<"Wrong option";
			break;
	}
	 	 }
	void calculator()
			{
			char select;
			float num1, num2, answer;
	
			cout<<"choose your option "<<"\n";
			cout<< "+: Addition "<<"\n";
			cout<< "-: subtraction"<<"\n";
			cout<< "x: Multiplication "<<"\n";
			cout<< "/: Division "<<"\n";
			cin>>select;
			switch(select){
		case '+':
			cout<<" Addition"<<"\n";
			cout<<"Enter First number: " <<"\n";
			cin>>num1;
			cout<<"Enter second number: "<<"\n";
			cin>>num2;
			answer = num1 + num2;
			cout<<"the Answer is: "<<answer<<"\n";
			break;
		case '-':
			cout<<" Subtraction"<<"\n";
			cout<<"Enter First number: " <<"\n";
			cin>>num1;
			cout<<"Enter second number: "<<"\n";
			cin>>num2;
			answer = num1 - num2;
			cout<<"the Answer is : "<<answer<<"\n";
			break;
		case 'x':
			cout<<" Multiplication"<<"\n";
			cout<<"Enter First number: " <<"\n";
			cin>>num1;
			cout<<"Enter second number: "<<"\n";
			cin>>num2;
			answer = num1 * num2;
			cout<<"the Answer is : "<<answer<<"\n";
			break;
		case '/':
			cout<<" Division"<<"\n";
			cout<<"Enter First number: " <<"\n";
			cin>>num1;
			cout<<"Enter second number: "<<"\n";
			cin>>num2;
			answer = num1/num2;
			cout<<"the Answer is : "<<answer<<"\n";
			break;
		default:
			break;
	             }
	}
	void KMandM()
	{
	int choice;
	float km,m;
	cout<<"choose your option "<<"\n";
	cout<< "1: KILOMETRE to METRE "<<"\n";
	cout<< "2: METRE to KILOMETER"<<"\n";
	cin>>choice;
	switch(choice){
		case 1:
		 cout<<"KILOMETRE to METRE"<<"\n";
		 cout<<"\nEnter kilometre: ";
		 cin>>km;
		 m=km*1000;
		 cout<<km<<"KM="<< m<<" METRES\n";
		 break;
		case 2:
		 cout<<"METRE to KILOMETRE"<<"\n";
		 cout<<"\nEnter metre: ";
		 cin>>km;
		 km=m/1000;
		 cout<<m<<" M="<<km<<" KILOMETRES\n";
		 break;
        default:
         break;
                   }
     }
     void MandCM()
	{
	int choice;
	float m,cm;
	cout<<"choose your option "<<"\n";
	cout<< "1: METRE to CENTIMETRE "<<"\n";
	cout<< "2: CENTIMETRE to METER"<<"\n";
	cin>>choice;
	switch(choice){
		case 1:
		 cout<<"METRE to CENTIMETRE"<<"\n";
		 cout<<"\nEnter metre: ";
		 cin>>m;
		 cm=m*100;
		 cout<<m<<" M="<< cm<<" CENTIMETRES\n";
		 break;
		case 2:
		 cout<<"CENTIMETRE to METRE"<<"\n";
		 cout<<"\nEnte centimetre: ";
		 cin>>cm;
		 m=cm/100;
		 cout<<cm<<" CM="<< m<<"METRES\n";
		 break;
        default:
         break;
                   }
     }
    
     void FARandCEL()
	{
	int choice;
	float far,cel;
	cout<<"choose your option "<<"\n";
	cout<< "1: FARENHEIT to CELCUIS "<<"\n";
	cout<< "2: CELCIUS to FARENHEIT"<<"\n";
	cin>>choice;
	switch(choice){
		case 1:
		 cout<<"FARENHEIT to CELCUIS"<<"\n";
		 cout<<"\nEnter farenheit: ";
		 cin>>far;
		 cel=(far-32)/1.800;
		 cout<<far<<"F="<<cel<<"C\n";
		 break;
		case 2:
		 cout<<"CELCUIS to FARENHEIT"<<"\n";
		 cout<<"\nEnter celcuis: ";
		 cin>>cel;
		 far=(cel*1.800)+32;
		 cout<<cel<<"C="<<far<<"F\n";
		 break;
        default:
         break;
                   }
     }
    void KMHandMPH()
	{
	int choice;
	float kmh,mph;
	cout<<"choose your option "<<"\n";
	cout<< "1: KMPH to MPH "<<"\n";
	cout<< "2: MPH to KMH"<<"\n";
	cin>>choice;
	switch(choice){
		case 1:
		 cout<<" KMPH to MPH"<<"\n";
		 cout<<"\nEnter KMPH: ";
		 cin>>kmh;
		 mph=kmh/1.609344;
		 cout<<kmh<<"KMPH="<<mph<<"MPH\n";
		 break;
		case 2:
		 cout<<"MPH to KMH"<<"\n";
		 cout<<"\nEnter MPH: ";
		 cin>>mph;
		 kmh=mph*1.609344;
		 cout<<mph<<"MPH="<<kmh<<"KMPH\n";
		 break;
        default:
         break;
                   }
     }     
     
