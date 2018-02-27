#include <iostream>
#include <string>

using namespace std;

class MartinClass{
   public:
      void setName (string x){
         name = x;		//by using public functions we can get access to a private variable.
      }				
      string getName (){
         return name;
      }
   private:
      string name; //since this variable is private in this class we cannot access it directly from main().

};

int main (){

   MartinClass myObject;		
   myObject.setName("Cool Guy McWilliam");
   cout << myObject.getName() << endl;

   return 0;
}
