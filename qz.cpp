#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<fstream.h>
#include<string.h>

class Quiz
{
private:
	char answer;
	char handle[20];
	int score;
public:
	Quiz();
	void Intro();
	void Order();
	void q1();
	void q2();
	void q3();
	void q4();
	void q5();
	void q6();
	void q7();
	void q8();
	void q9();
	void q10();
	void Saveinfo();
};

Quiz::Quiz()
{
	score=0;
}

void Quiz::Intro()
{

	cout<<" ________________________________________________________ "<<endl;
	cout<<"| Welcome to the (in)Famous Zombie Movie Quiz            |"<<endl;
	cout<<"|--------------------------------------------------------|"<<endl;
	cout<<"|  * Type letter answers when prompted                   |"<<endl;
	cout<<"|  * Try to answer the questions correctly               |"<<endl;
	cout<<"|                                                        |"<<endl;
	cout<<"|                                                        |"<<endl;
	cout<<"|                                                        |"<<endl;
	cout<<"|                                                        |"<<endl;
	cout<<"|                                                        |"<<endl;
	cout<<"| Good luck                                              |"<<endl;
	cout<<"|________________________________________________________|"<<endl;
	cout<<endl;
	system("pause");
	system("cls");

}

void Quiz::Order()
{
	int order[10]={1,2,3,4,5,6,7,8,9,10};

	for (int x=0;x<100;x++)
	{
		int temp=0;

		int a=rand()%9+1;
		int b=rand()%9+1;

		temp=order[a];
		order[a]=order[b];
		order[b]=temp;
	}

	for (int q=0;q<10;q++)
	{
		if (q=1)
			q1();
		else if (q=2)
			q2();
		else if (q=3)
			q3();
		else if (q=4)
			q4();
		else if (q=5)
			q5();
		else if (q=6)
			q6();
		else if (q=7)
			q7();
		else if (q=8)
			q8();
		else if (q=9)
			q9();
		else if (q=10)
			q10();

		system("pause");
		system("cls");
	}

	cout<<"You got "<<score<<" out of 10 correct"<<endl;
	cout<<"Please enter your name for the high scores"<<endl;
	cin>>handle;
	system("cls");

}

void Quiz::q1()
{
	cout<<"What was the first movie in which zombies wanted brains?"<<endl;
	cout<<"<A> Dawn of the Dead     <B> Resident Evil"<<endl;
	cout<<"<C> Return of the Dead   <D> Zombiw Halocaust"<<endl;
	cin>>answer;

	if (answer=='C' || answer=='c')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q2()
{
	cout<<"Which of these was the first zombie movie?"<<endl;
	cout<<"<A> Dawn of the Dead <B> Redneck Zombies"<<endl;
	cout<<"<C> Day of the Dead  <D> Night of the Living Dead"<<endl;
	cin>>answer;

	if (answer=='D' || answer=='d')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q3()
{
	cout<<"Which french zombie movie included a zombie vs. shark scene?"<<endl;
	cout<<"<A> Zombi 2            <B> 28 Days Later"<<endl;
	cout<<"<C> Land of the Dead   <D> Fido"<<endl;
	cin>>answer;

	if (answer=='A' || answer=='a')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q4()
{
	cout<<"In which movie were zombies used as pets?"<<endl;
	cout<<"<A> 28 Weeks Later   <B> Return of the Living Dead 3"<<endl;
	cout<<"<C> Resident Evil    <D> Fido"<<endl;
	cin>>answer;

	if (answer=='D' || answer=='d')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q5()
{
	cout<<"In which movie was zombie gas made into a drug?"<<endl;
	cout<<"<A> Day of the Dead   <B> Return of the Living Dead 5"<<endl;
	cout<<"<C> Day of the Dead 2 <D> Zombi 3"<<endl;
	cin>>answer;

	if (answer=='B' || answer=='b')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q6()
{
	cout<<"Which zombie movie was directed by Peter Jackson?"<<endl;
	cout<<"<A> Planet Terror   <B> Flight of the Living Dead"<<endl;
	cout<<"<C> Braindead       <D> Land of the Dead"<<endl;
	cin>>answer;

	if (answer=='C' || answer=='c')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q7()
{
	cout<<"In which movies do nuns get eaten?"<<endl;
	cout<<"<A> Flight of the Living Dead   <B> Fido"<<endl;
	cout<<"<C> Resident Evil: Apocalypse   <D> Resident Evil"<<endl;
	cin>>answer;

	if (answer=='A' || answer=='a')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q8()
{
	cout<<"In which movie is there a girl in the garden?"<<endl;
	cout<<"<A> Shaun of the Dead           <B> Fido"<<endl;
	cout<<"<C> Dawn of the Dead (Remake)   <D> Zombi 2"<<endl;
	cin>>answer;

	if (answer=='A' || answer=='a')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q9()
{
	cout<<"Which upcoming zombie movie is being filmed by Eli Roth?"<<endl;
	cout<<"<A> Zombie Island <B> Brains: The Movie"<<endl;
	cout<<"<C> Cell          <D> Zombie Burger"<<endl;
	cin>>answer;

	if (answer=='C' || answer=='c')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q10()
{
	cout<<"Which of these movies has fast zombies?"<<endl;
	cout<<"<A> 28 Days later <B> Land of the Dead"<<endl;
	cout<<"<C> Zombi 2       <D> Resident Evil"<<endl;
	cin>>answer;

	if (answer=='A' || answer=='a')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::Saveinfo()
{
	/*
	ofstream.outputfile;
	outputfile.open("Highscores");
	outputfile<<handle<<endl;
	outputfile<<score<<endl;
	outputfile.close();
	*/
}

int main()
{
	srand(time(0));
	Quiz thisquiz;

	thisquiz.Intro();
	thisquiz.Order();	
	thisquiz.Saveinfo();

	return 0;
}