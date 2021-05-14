#include <iostream>
#include "Queue.h"
#include "TravelAgency.h"
#include <Windows.h>
using namespace std;

void Show(Queue<TravelAgency>*);
void Create(Queue<TravelAgency>*);
void Delete(Queue<TravelAgency>*);
void Edit(Queue<TravelAgency>*);

int main()
{
	Queue<TravelAgency> q;
	char choice;
	while (true)
	{
		cout << "Choose an action:\n1 - Add new request\n2 - Delete one request\n3 - View all requests\n4 - Edit one request\n5 - Exit" << endl;
		cin >> choice;
		while (choice < '1' || choice > '5')
		{
			cout << "Repeat input" << endl;
			cin >> choice;
		}
		switch (choice)
		{
		case '1':
			Create(&q);
			system("pause");
			system("cls");
			break;
		case '2':
			Delete(&q);
			system("pause");
			system("cls");
			break;
		case '3':
			Show(&q);
			system("pause");
			system("cls");
			break;
		case '4':
			Edit(&q);
			system("pause");
			system("cls");
			break;
		case '5':
			return 0;
		}
	}
}

void Show(Queue<TravelAgency>* q)
{
	q->show();
}

void Create(Queue<TravelAgency>* q)
{
	string cName, tName;
	char choice;
	float cost;
	cout << "Enter your name: ";
	cin >> cName;
	cout << "Choose which class you want to fly:\n1 - Econom Class\n2 - Average Class\n3 - Business Class\n4 - Luxury Class" << endl;
	cin >> choice;
	while (choice < '1' || choice > '4')
	{
		cout << "Repeat input" << endl;
		cin >> choice;
	}
	switch (choice)
	{
	case '1':
		tName = "Econom Class";
		cost = 100;
		break;
	case '2':
		tName = "Average Class";
		cost = 300;
		break;
	case '3':
		tName = "Business Class";
		cost = 500;
		break;
	case '4':
		tName = "Luxury Class";
		cost = 1000;
		break;
	}
	TravelAgency newReq;
	newReq.Set(cName, tName, cost);
	q->push(newReq);
}

void Delete(Queue<TravelAgency>* q)
{
	int pos;
	Show(q);
	cout << "Enter position to delete: ";
	cin >> pos;
	while (!cin.good() || pos < 1 || pos > q->size())
	{
		cout << "Repeat input" << endl;
		cin >> pos;
	}
	q->erase(pos);
}

void Edit(Queue<TravelAgency>* q)
{
	Show(q);
	int pos;
	cout << "Enter position to edit: ";
	cin >> pos;
	while (!cin.good() || pos < 1 || pos > q->size())
	{
		cout << "Repeat input" << endl;
		cin >> pos;
	}
	string cName, tName;
	char choice;
	float cost;
	cout << "Enter your name: ";
	cin >> cName;
	cout << "Choose which class you want to fly:\n1 - Econom Class\n2 - Average Class\n3 - Business Class\n4 - Luxury Class" << endl;
	cin >> choice;
	while (choice < '1' || choice > '4')
	{
		cout << "Repeat input" << endl;
		cin >> choice;
	}
	switch (choice)
	{
	case '1':
		tName = "Econom Class";
		cost = 100;
		break;
	case '2':
		tName = "Average Class";
		cost = 300;
		break;
	case '3':
		tName = "Business Class";
		cost = 500;
		break;
	case '4':
		tName = "Luxury Class";
		cost = 1000;
		break;
	}
	TravelAgency newReq;
	newReq.Set(cName, tName, cost);
	q->emplace(pos, newReq);
}