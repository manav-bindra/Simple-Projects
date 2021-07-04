#include<cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand ( time(NULL) );
	cout<<"***WELCOME TO MATHS QUIZ***"<<endl<<endl;
	cout<<"Rules Of The Game"<<endl;
	cout<<"1) The questions are of addition, subtraction, multiplication and division."<<endl;
	cout<<"2) You have to type your answer in front of every question."<<endl;
	cout<<"3) You will be given 3 chances in total."<<endl;
	cout<<"4) Every question corresponds to 1 mark."<<endl;
	cout<<"5) Below is given the meaning of various symbols used in the questions."<<endl;
	cout<<"		+ --> Addition"<<endl;
	cout<<"		- --> Subtraction"<<endl;
	cout<<"		* --> Multiplication"<<endl;
	cout<<"		/ --> Quotient"<<endl;
	cout<<"		% --> Remainder"<<endl<<endl<<endl;
	
	int chance=3;
	int userAns;
	int correctAns;
	int score=0;
	while (chance!=0){
		int n=rand() % 100;		//0 to 99
		int m=rand() % 100;
		int ch=rand() % 5 +1;	//1 to 5
		switch(ch)
		{
			case 1:		//Multiplication
				cout<<n<<" * "<<m<<" = ";
				cin>>userAns;
				correctAns=n*m;
				break;
			case 2:		//Addition
				cout<<n<<" + "<<m<<" = ";
				cin>>userAns;
				correctAns=n+m;
				break;
			case 3:		//Subtraction
				cout<<n<<" - "<<m<<" = ";
				cin>>userAns;
				correctAns=n-m;
				break;
			case 4:		//Division
				cout<<n<<" / "<<m<<" = ";
				cin>>userAns;
				correctAns=n/m;
				break;
			case 5:		//Remainder
				cout<<n<<" % "<<m<<" = ";
				cin>>userAns;
				correctAns=n%m;
				break;
				
				
		}
		if (userAns==correctAns){
			cout<<"Right Answer!"<<endl<<endl;
			score++;
		}
		else {
			chance--;
			cout<<"Wrong Answer!"<<endl;
			cout<<"Correct Answer: "<<correctAns<<endl;
			cout<<"You now have "<<chance<<" chances to go!"<<endl<<endl;
		}
		
		
	}
	cout<<"Well Played!"<<endl;
	cout<<"Your Score: "<<score<<endl;
	
	return 0;
}
