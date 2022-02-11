#include<iostream>
#include<conio.h>
int x=0;
using namespace std;
class Quiz
{
	public:
	void header()
{
	
	cout<<"\t\t\t\t\t......... QUIZ GAME .......... "<<endl;
}
void footer()
{
	cout<<"\t\t\t\t\t...... RESULTS ......"<<endl;
}
void user()
{
	char ch1[100];
	cout<<"\t Please Enter Your Name : ";
	cin>>ch1;
	cout<<" \t Welcome "<<ch1<<endl;
}
void results()
{
	if(x==100)
	cout<<" \t Outstanding Performence";
	if(x==90)
	cout<<" \t You are extremely intelligent Your Score is 90";
	if(x==80)
	cout<<" \t You are intelligent Your Score is 80";
	if(50==x||x==70||x==60)
	cout<<" \t You are average Your Score is "<<x<<"Better luck next time";
	else if(x<=40)
	cout<<" \t No use........ Not even 5 questions right";	
}
 
};
int main()
{
	char ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	Quiz obj1,obj2,obj3,obj4;
	obj1.user();
	obj2.header();
	cout<<"\t Q1. A collection of generic class and function is called as. \n\t a.Standard Template Library (STL) \n\t b.Header file \n\t c.Function template "<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q2. Which of the following is the correct identifier? \n\t a.$var_name \n\t b.VAR_123 \n\t c.varname@"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
 
	}
else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q3. Which of the following is the correct syntax to print the message in C++ language? \n\t a.cout <<"Hello world!"; \n\t b.Cout << Hello world! ; \n\t c.Out <<"Hello world!;"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q4. Which of the following is the address operator? \n\t a.@ \n\t b.# \n\t c.& "<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q5.Which of the following is the original creator of the C++ language? \n\t a.Bjarne Stroustrup\n\t b.Dennis Ritchie \n\t c.Ken Thompson"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
    else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q6. The C++ language is ______ object-oriented language. \n\t a.Pure Object oriented\n\t b.Semi Object-oriented or Partial Object-oriented \n\t c.Not Object oriented"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
    else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<" \t Q7. C++ is a ___ type of language. \n\t a.High-level Language \n\t b.Low-level language \n\t c.Middle-level language"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q8. Which of the following refers to characteristics of an array? \n\t a.An array is a set of distinct data items \n\t b.An array is a set of similar data items\n\t c.None of the above"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q9. Which type of memory is used by an Array in C++ programming language?\n\t a.Contiguous\n\t b.None-contiguous \n\t c.Both A and B "<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q10. Which of the following is not a kind of inheritance? \n\t a.Distributed \n\t b.Multiple \n\t c.Multi-level"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj3.footer();
	obj4.results();
	getch();
 	return 0;
}