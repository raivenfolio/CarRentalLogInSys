#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


	void plateNum();

int main()
{
 plateNum();
	return 0;
	
	
}


void plateNum()
{

    srand(static_cast<unsigned int >(time(0)));

    //generate print random 3 numbers

    cout << "Plate number output: ";

     for (int i = 0; i < 3; ++i)
        {
        char randomLetter = 'A' + (rand() % 26); // range a to z
        cout << randomLetter;
        }

        cout << " ";

       
    for (int i = 0; i < 3; ++i)
    {
        int randomNumber = rand() % 10; //range 0 - 9
        cout << randomNumber;
    }

}




