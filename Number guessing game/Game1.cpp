#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
bool find( int random ,int guess){
    int temp;
    if(guess== random){
        cout<<"You guess the right Number";
        return 1;
    }

    if(random < guess){
        cout<<"Your guess is too High";
    }
    else{
        cout<<"Your guess is too Low";
    }
    cout<<endl;
     cout<<"Enter the Number:";
     cin>>temp;
     cout<<endl;
     find(random,temp);
     return 0;
}
int main()
{
	srand(time(0));
  int random = rand() % 100, guess;
  cout<<"Number Guessing Game"<<endl<<endl<<"Random Number is genrated between 0 to 100"<<endl;
  cout<<"Guess the Number:";
  cin>>guess;
  cout<<endl;

	bool ans = find(random,guess);
    cout<<endl;
    cout<<"Now to end the game enter any number: ";
    int end;
    cin>>end;
	

	return 0;
}
