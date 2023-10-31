// 32-Abstraction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Person
{
protected:
	string FirstName;
	string MiddleName;
	string LastName;
	string Profession;

public:

	Person()
	{

	}
	Person(string firstname, string middlename, string lastname, string profession)  //constructor
	{
		FirstName = firstname;
		MiddleName = middlename;
		LastName = lastname;
		Profession = profession;
	}

	void getInformation()   //class method
	{
		cout << FirstName << endl;
		cout << MiddleName << endl;
		cout << LastName << endl;
		cout << Profession << endl;
	}

	void setFirstName(string firstname) { FirstName = firstname; }

	// Function to return value of firstname
	// variable firstname
	string getFirstName() { return FirstName; }

	void setMiddleName(string middlename) { MiddleName = middlename; }

	// Function to return value of middlename
	// variable middlename
	string getMiddleName() { return MiddleName; }

	void setLastName(string lastname) { LastName = lastname; }

	// Function to return value of lastname
	// variable lastname
	string getLasttName() { return LastName; }

	void setProfession(string profession) { Profession = profession; }

	// Function to return value of profession
	// variable profession
	string getProfession() { return Profession; }


	void kindOfPerson()
	{
		cout << "Normal Person" << endl;
	}

};





class Egyptian : public Person
{
	//public:
	//
	//    Egyptian()
	//    {
	//
	//    }
	//
	//    Egyptian(string firstname, string middlename, string lastname, string profession): 
	//        Person(firstname,middlename,lastname,profession)  //constructor
	//    { 
	//
	//    }

public:

	void kindOfPerson()
	{
		cout << "Egyptian Person" << endl;
	}

};




class American : public Person
{
	//public:
	//
	//    American()
	//    {
	//
	//    }
	//
	//    American(string firstname, string middlename, string lastname, string profession): 
	//        Person(firstname,middlename,lastname,profession)  //constructor
	//    { 
	//
	//    }

public:

	void kindOfPerson()
	{
		cout << "American Person" << endl;
	}

};





class Alien
{
protected:
	string FirstName;
	string MiddleName;
	string LastName;
	string Profession;

public:

	class Alien()
	{

	}
	class Alien(string firstname, string middlename, string lastname, string profession)  //constructor
	{
		FirstName = firstname;
		MiddleName = middlename;
		LastName = lastname;
		Profession = profession;
	}

	void getInformation()   //class method
	{
		cout << FirstName << endl;
		cout << MiddleName << endl;
		cout << LastName << endl;
		cout << Profession << endl;
	}

	void setFirstName(string firstname) { FirstName = firstname; }

	// Function to return value of firstname
	// variable firstname
	string getFirstName() { return FirstName; }

	void setMiddleName(string middlename) { MiddleName = middlename; }

	// Function to return value of middlename
	// variable middlename
	string getMiddleName() { return MiddleName; }

	void setLastName(string lastname) { LastName = lastname; }

	// Function to return value of lastname
	// variable lastname
	string getLasttName() { return LastName; }

	void setProfession(string profession) { Profession = profession; }

	// Function to return value of profession
	// variable profession
	string getProfession() { return Profession; }


	virtual void kindOfPerson() = 0;


};



class Avatar : public Alien
{
	//public:
	//
	//    Avatar()
	//    {
	//
	//    }
	//
	//    Avatar(string firstname, string middlename, string lastname, string profession): 
	//        Person(firstname,middlename,lastname,profession)  //constructor
	//    { 
	//
	//    }

public:

	void kindOfPerson()
	{
		cout << "Avatar Person" << endl;
	}

};



int main()
{
	Person p;
	p.setFirstName("Hazem");
	p.setMiddleName("Adel");
	p.setLastName("Mohamed");
	p.setProfession("Software Engineer");
	p.getInformation();

	Egyptian e;
	e.setFirstName("Hazem");
	e.setMiddleName("Adel");
	e.setLastName("Mohamed");
	e.setProfession("Network Engineer");
	e.getInformation();

	American a;
	a.setFirstName("Hazem");
	a.setMiddleName("Adel");
	a.setLastName("Mohamed");
	a.setProfession("Computer Engineer");
	a.getInformation();



	p.kindOfPerson();
	e.kindOfPerson();
	a.kindOfPerson();




	/*Alien l;
	l.setFirstName("Hazem");
	l.setMiddleName("Adel");
	l.setLastName("Mohamed");
	l.setProfession("Computer Engineer");
	l.getInformation();



	Avatar v;
	v.setFirstName("Hazem");
	v.setMiddleName("Adel");
	v.setLastName("Mohamed");
	v.setProfession("Computer Engineer");
	v.getInformation();



	l.kindOfPerson();
	v.kindOfPerson();*/

	Alien* v = new Avatar();
	v->setFirstName("Toruk");
	v->setMiddleName("Samuel");
	v->setLastName("Makto");
	v->setProfession("Warrior");
	v->getInformation();



	/*cout << p.FirstName << endl;
	cout << p.MiddleName << endl;
	cout << p.LastName << endl;
	cout << p.Profession << endl;*/

	/*Person p("Hazem", "Adel", "Mohamed", "Software Engineer");*/
	/*cout << p.FirstName << endl;
	cout << p.MiddleName << endl;
	cout << p.LastName << endl;
	cout << p.Profession << endl;*/


	system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
