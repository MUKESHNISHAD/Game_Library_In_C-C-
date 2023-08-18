#include<iostream>
#include<conio.h>
using namespace std;
int p=1;
class A
{	public:
		char name[10];
		char add[10];
		int roll;
		int dob;
	   void input(void);
	   void show (void);
};
void A :: input(void)
{
 cout<<"\n\nSTUDENT NAME--- ";
 cin>>name;
 cout<<"\nSTUDENT ADRESS--- ";
 cin>>add;
 cout<<"\nSTUDENT ROLL.NO--- ";
 cin>>roll;
 cout<<"\nSTUDENT DOB (DATE OF BIRTH)--- ";
 cin>>dob;
}
void A :: show (void)
{ cout<<"\n\nTHE "<<p<<" NO TH STUDENT DATA'S I HAVE  ";
 cout<<"\nSTUDENT NAME IS______"<<name;
 cout<<"\nSTUDENT ADRESS IS____"<<add;
 cout<<"\nSTUDENT ROLL.NO IS__"<<roll;
 cout<<"\nSTUDENT DOB (DATE OF BIRTH) IS__"<<dob;
++p;
}
int main()
{   int choise;
	cout<<"ENTER YOUR CHOISE :-\n"<<endl;
	cout<<"1.INSERT THE INFORMATION AND SHOW OR NOT\n";
	cout<<"2.OUT THIS PROGRAM\n";
	cin>>choise;    
	if(choise>2 || choise==0)
	{
		cout<<"Please Choose Given Option Only\nRetry..";
		return 0;
	}
	if(choise==2)
	{
	  cout<<"THANK YOU\n";
	}
	else
	{
	cout<<"How Many Student Collect Information\n";
	int no,i=0,co=1;
	cin>>no;
	A o[no];
	while(i!=no)
	{   
    	cout<<"\nENTER THE  "<<co<<" NO TH STUDENT DATA";
		o[i].input();
		i++;
		co++;
		if(i==no)
		{
			cout<<"\n\n                             DONE";
		}
	}
	char ch;
	if(no>0){
	cout<<"\n\n\nYOU WANTS TO SHOW YOUR DATA - Y / N\n";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
	i=0;
	while(i!=no)
	{   o[i].show();
		i++;
	}
    }
	}
    cout<<"\n\n\n                                  THANKS YOU...\n";
	} 
	getch();
 return 0;
}
