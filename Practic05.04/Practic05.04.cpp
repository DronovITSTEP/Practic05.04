#include <iostream>
#include "Animal.h"
#include "Base.h"

using namespace std;

//class A {
//public:
//	//virtual~A() = 0;
//};
//class B : public virtual A {};
//class C : public virtual A {};
//class D : public B, public C {
//public:
//	int GetVal() {
//		return val;
//	}
//};

/*
Создать абстрактный базовый класс Employer (служащий) с
чисто виртуальной функцией Print(). Создайте три производных
класса: President, Manager, Worker. Переопределите функцию
Print() для вывода информации, соответствующей каждому типу
служащего.
*/

/*
Создать абстрактный базовый класс с виртуальной функцией – площадь.
Создать производные классы: прямоугольник, круг,
прямоугольный треугольник, трапеция со своими функциями
площади. Для проверки определить массив ссылок на абстрактный класс,
которым присваиваются адреса различных объектов.
*/
//class Base1 {
//protected:
//	int weidth = 0;
//	int height = 0;
//	int base = 0;
//public:
//	Base1(int w, int h, int b) :height{ h }, weidth{ w }, base{ b } {}
//	Base1(int w, int h) :height{ h }, weidth{ w } {}
//	Base1(int h) : height{ h } {}
//
//	virtual int Area() = 0;
//};
//class Rect :public Base1 {
//public:
//	Rect(int h, int w) : Base1(h, w) {}
//	virtual int Area() {
//		return height * weidth;
//	}
//};
//class Tri : public Rect {
//public:
//	Tri(int h, int w): Rect(h, w) {}
//	virtual int Area() {
//		return this->Rect::Area() / 2;
//	}
//};

void Test(int t){
	if (t == 2) throw "Error - t = 2";
	else if (t == 3) throw "Error - t = 3";
}

void Test() {
	try {
		throw "Hello\n";
	}
	catch (const char* s) {
		cout << "Exception! ";
		throw;// передача исключения следующему catch
	}
}

int main()
{
	/*Animal* animals[3] =
	{
		new Dog{"Bobik"},
		new Cat{"Barsik"},
		new Frog{"Tartila"}
	};

	for (int i = 0; i < 3; i++) {
		animals[i]->Speak();
	}*/

	//Derived myString{ "string 1", 9, "string 2", 9 };

	//Base* base = new Derived{ "string 1", 9, "string 2", 9 };
	//delete base;

	//Base1* b[2] = { new Rect{2,3}, new Tri{2,3} };
	//cout << b[0]->Area() << " " << b[1]->Area();

	//int a, b;

	//try {
	//	cin >> a >> b;
	//	if (b == 0) throw b;
	//	cout << a / b;
	//}
	//catch (int s) {
	//	cout << "Error! Dvide by " << s;
	//}

	//try {
	//	int* ptr = nullptr;
	//	int size;
	//	cin >> size;
	//	if (size < 1 || size > 100) throw "\nError size\n";
	//	ptr = new int[size];
	//	if (!ptr) throw "\nError memory\n";
	//	int a;
	//	cin >> a;
	//	if (a == 0) throw a;
	//}
	//catch (...) { cout << "Error"; }

	/*try {
		Test(4);
		Test(2);
	}
	catch (const char* t) {
		cout << t;
	}*/

	int* a = nullptr;
	try {
		if (!a) 
			throw "";
		*a += 5;
		cout << *a;
	}
	catch (...) {
		cout << "Error";
	}
}


