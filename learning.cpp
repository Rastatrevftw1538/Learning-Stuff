#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	printf("hello world I'm Paul ");

	return 0;
}
	/*cout << "Hello World" << endl;

	const double PI = 3.1415926535;

	char myGrade = 'A';

	bool isHappy = true;

	int myAge = 39;

	float favNum = 3.141592;

	double otherfaveNum = 1.6180339887;

	cout << "Favorite Number " << favNum << endl;

	cout << "Size of int " << sizeof(myAge) << endl;

	int largestInt = 2147483647;

	cout << "Largest int " << largestInt << endl;

	+, -, *, /, %, ++, --,

	int five = 5;

	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	cout << (float) 4/5 << endl; */
	
	// &&("and"), ||("or"), !("not")//

	/*int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if((age >= 1)&& (age < 16)){

		cout << "You can't drive"<< endl;

	} 
	else if (! isNotIntoxicated){

		cout << "You can't drive" << endl;
	}
	else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam)>5))){

		cout << "You can't drive" << endl;

	}
	else{
		cout << "You can drive"<<endl;*/

	/*int greetingOption = 2;

	switch(greetingOption){

		case 1:
			cout << "Bonjour"<<endl;
			break;
		case 2:
			cout << "Hola"<<endl;
			break;
		case 3:
			cout << "Hallo"<<endl;
			break;

		default :
			cout<<"Hello"<<endl;

	}*/

	/*variable = (condition) ? true : false

	int largestNum = (5>2) ? 5 : 2;

*/

	/*int myFavNums[5]; 

	int badNums[5] = {4, 13, 14, 24, 34};

	cout << "Bad Number 1: " << badNums[0] << endl;

	char myName[5][7] = {{'T', 'r', 'e', 'v', 'o','r'},
						{'C', 'a', 'r', 'd', 'o', 'z', 'a'}};

	cout << "2nd letter in 2nd array " << myName[1][1] <<endl;

	myName[0][2] = 'e';

	cout << "New Value "<< myName[0][2] << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << i <<endl;
	}

	for(int j = 0; j < 6; j++){
		for(int k = 0; k < 7; k++){
			cout << myName[j][k];
		}
		cout << endl;
	}
	*/

	/*int randNum = (rand() % 100) + 1;

	while(randNum != 100){

		cout << randNum << ", ";

		randNum = (rand() % 100 + 1);
	}

	cout << endl;
*/

	/*int index = 1;

	while(index <= 10){

		cout << index << endl;

		index++;
	}*/

	/*string numberGuessed;
	int intNumberGuessed = 0;

	do {

		cout << "Guess between 1 and 10: ";

		getline(cin, numberGuessed);

		intNumberGuessed = stoi(numberGuessed);

		cout << intNumberGuessed << endl;

	}
	while(intNumberGuessed != 4);

		cout << "You Win"<< endl;*/

	/*char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};

	string birthdayString = " Birthday";

	cout << happyArray + birthdayString << endl;
	string yourName;
	cout<< "What is your name ";
	getline(cin, yourName);

	cout << "hello " << yourName << endl;

	double eulerConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;

	cout << "What is Euler's COnstant? ";
	getline(cin, eulerGuess);

	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulerConstant){

		cout << "You are right"<< endl;
	}
	else; {
		cout<< "You are wrong"<< endl;
	}

	cout << "Size of string "<< eulerGuess.size() << endl;
	cout << "Is string empty "<< eulerGuess.empty()<< endl;
	cout << eulerGuess.append("was your guess")<< endl;*/

	/*string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString)<<endl;
	cout << dogString.compare(dogString)<<endl;
	cout << catString.compare(dogString)<<endl;*/

	/*string yourName = "Trevor Cardoza";
	cout<<"Hello "<< yourName<< endl;

	string wholeName = yourName.assign(yourName);
	cout<<wholeName<<endl;

	string firstName = wholeName.assign(wholeName, 0, 6);
	cout<<firstName<<endl;

	int lastNameIndex = yourName.find("Cardoza",0);
	cout << "Index for last name " << lastNameIndex <<endl;*/
