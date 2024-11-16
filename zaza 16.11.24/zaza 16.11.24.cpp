#include <iostream> 
using namespace std;


class Person
{
protected:
	string Subject;
	string hospital;
	double salary;
	string name;
	int age;
public:
	Person() = default;
	Person(const char* n, int a)
	{
		name.append(n);
		age = a;
	}
	void input()
	{
		cout << "name:";
		cin >> name;

	}
	void output()
	{
		cout << "Name: " << name << " " << "Age: " << age << endl;
	}

private:

};

class Student :public Person
{
	string Academy;

public:
	Student() :Person() {}
	Student(const char* n, int a, const char* Ac) :Person(n, a)
	{
		Academy.append(Ac);
	}
	void input()//переопределение 
	{
		Person::input();
		cout << "Academy: ";
		cin >> Academy;
	}
	void Output()
	{
		Person::output();
		cout << "Academy: " << Academy << endl;
	}
};

class Teacher :public Person
{
	string School;
	string Subject;
public:
	Teacher() :Person() {}
	Teacher(const char* n, int a, const char* Sch, const char* Sub) :Person(n, a)
	{
		School.append(Sch);
		Subject.append(Sub);
	}
	void input()//переопределение 
	{
		Person::input();
		cout << "School: ";
		cin >> School;
		cout << "Subject: ";
		cin >> Subject;
	}
	void Output()
	{
		Person::output();
		cout << "School: " << School << "Subject: " << Subject << endl;
	}
};

class Doctor :public Person
{
	string hospital;
	double salary;
public:
	Doctor() :Person() {}
	Doctor(const char* n, int a, const char* Hos, double Sal) :Person(n, a) 

	{

	}
	void input()//переопределение 
	{
		Person::input();
		cout << "School: ";
		cin >> hospital;
		cout << "Subject: ";
		cin >> salary;
	}
	void Output()
	{
		Person::output();
		cout << "School: " << hospital << "Subject: " << salary << endl;
	}
};

class Director :public Person
{
	string School;
	double salary;
public:
	Director() :Person() {}
	Director(const char* n, int a, const char* Sch, double Sal) :Person(n, a)

	{

	}
	void input()//переопределение 
	{
		Person::input();
		cout << "School: ";
		cin >> School;
		cout << "Subject: ";
		cin >> salary;
	}
	void Output()
	{
		Person::output();
		cout << "School: " << School << "Subject: " << salary << endl;
	}
};


int main()
{
	Student obj1("Nataliya", 22, "ITStep Academy");
	Teacher obj2("Tolik", 30, "ITSTEP SCHOOL", "Math");
	Doctor obj3("Dr. Smith", 40, "City Hospital", 52000.50);
	Director obj4("Igor", 42, "ITSTEP SCHOOL", 46000);

	obj1.output();
	obj2.output();
	obj3.output();
	obj4.output();
	obj1.input();
	obj1.output();
	/*
	obj2.input();
	obj2.output();
	obj3.input();
	obj3.output();
	obj4.input();
	obj4.output();
	*/
	
}