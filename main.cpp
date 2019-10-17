#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


void main()
{
	const int Size=101;
	char Ar[Size];
	int S, X, Flag=0;
	cout<<"\nEnter a Word to Check Whether it is Pallindrome or Not: ";
	cin.getline(Ar, Size);
	
	S= strlen(Ar);
	if (S%2==0)
		X=S/2;
	else
		X=(S-1)/2;
	for(int i=0, j=S; i<X-1; i++, j-- )
	{
		if (Ar[i]==Ar[j])
			Flag=1;
		else
			Flag=0;
	}
	if (Flag==1)
	{
		cout<<"\nGiven String is Pallindrome\n";
	}
	else
	{
		cout<<"Given String is not Pallindrome";
	}
	getch();
}