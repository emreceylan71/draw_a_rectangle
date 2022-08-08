
#include <iostream>
using namespace std;

int main()
{

	int begin1, vertical1, wide2,length3;
	cout << "Enter a position where rectengle begin horizontally" << endl;
	cin >> begin1;
	cout << "Enter a position where rectengle begin vertically" << endl;
	cin >> vertical1;
	cout << "Enter a rectangle wide" << endl;
	cin >> wide2;
	cout << "Enter a rectange length" << endl;
	cin >> length3;
	
	for (int i = 1; i <= vertical1; i++) {// this for loop doing vertical begin
		cout << "\n";
	  }

	  for(int i=0;i<length3;i++){
		  
		  cout << "\n";// this line makes it go down to a bottom line in each loop and determines the length.

		  for (int i = 1; i <= begin1; i++) {// this for loop doing horizontal begin
			  cout << " ";
		  }


	     for (int i=0; i < wide2; i++) {// it makes the wide
		cout << "*";
         }


	  }
	
}

