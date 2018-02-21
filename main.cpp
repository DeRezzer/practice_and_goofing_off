#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main(){
    int first[3] = {20,54,675};
    int second[6] = {54,24,7,8,9,99};

    printArray(second, 6);
    printArray(first, 3);
    return 0;
 }

 void printArray(int theArray[], int sizeOfArray){

    for (int x = 0; x < sizeOfArray; x++){
        cout << theArray[x] << endl;
    }

}
