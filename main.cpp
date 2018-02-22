#include <iostream>
#include <string>

using namespace std;

void initiative_array(int theArray[], int sizeOfArray);

int main()
{
    int number_creatures = 0;
    cout << "How many Creatures are in this encounter: " << endl;
    cin >> number_creatures;

    for (int i = 0; i < number_creatures; i++){
    char name_one[25];
    int initiative = 0;

    cout << "Please enter the creature or character name: " << endl;
    cin >> name_one;

    cout << "Enter creature or character initiative score: " << endl;
    cin >> initiative;
    cout << "" << endl;

    cout << name_one << " " << initiative << endl;
    }

    //int second [10] ={1,2,3,4,5,6,7,8,9,10};

    //initiative_array(first, 10);
    //initiative_array(second, 10);
    return 0;
}

void initiative_array (int theArray[], int sizeOfArray){
   for (int i = 0; i < sizeOfArray; i++){
       cout << theArray[i];
   }
}
