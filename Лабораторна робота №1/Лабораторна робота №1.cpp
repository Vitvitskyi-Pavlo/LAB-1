// Лабораторна робота №1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int taskone() {
	//Створюємо змінні
	int A[100]{};
	int n, i;
	int maxNegative =INT_MIN;
		int maxNegindex = -1;
  //Вводимо розмір масиву
	cout << "Input size of array :" << endl;
	cin >> n;

 //Вводимо елементи масиву A
	cout << "Enter elements of array :" << endl;
	for (i = 0; i < n; i++) {
		cin >>  A[i];
     }
	//Виводимо елементи масиву А
	cout << "Array A:" << endl;
	for (i = 0; i < n; i++) {
		cout << A[i] << endl;
	}
	//Пошук максимального від'ємного елементу та його індексу
	for (i = 0; i < n; i++) {
		if (A[i]<0 && A[i] > maxNegative) {
			maxNegative = A [i];
			maxNegindex = i;
		}
	}

	//Виведення результатів
	if (maxNegindex != -1) {
		cout << "Max negative element:" << maxNegative << endl;
		cout << "Index max negative element:" << maxNegindex << endl;
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}


int tasktwo() {
	//Створюємо змінні
	int A[100]{};
	int n,i;
	int B, A1;
	int minValue = INT_MAX;
	//Вводимо розмір масиву
	cout << "Input size of array" << endl;
	cin >> n;

	//Вводимо елементи масиву
	cout << "Enter elements of array" << endl;
	for (i = 0; i < n; i++) {
		cin >> A[i];
	}

     //Вводимо число B і А1
	cout << "Enter number A1" << endl;
	cin >> A1;

	cout << "Enter number B" << endl;
	cin >> B;
	
	//Пошук першого елемента, більшого за A1 та знаходження мінімального значення до цього елементу, меншого за B
	for (i = 0; i < n; i++) {
		if (A[i] > A1 && A[i]< B) {
		
			minValue = min(minValue, A[i]);
		}
	}
	// Виведення результату
	if (minValue != INT_MIN) {
		cout << "The minimum value among elements less than " << B << " and located to the first element bigger than" << A1 << ", equal: " << minValue << endl;
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}

int main() {

	int task;

	cout << "First task" << endl;
	cout << endl;
	cout << "Second task" << endl;
	cout << endl;

	//Вибір завдання
	cout << "Select a task(1 or 2):" << endl;
	cin >> task;

	//Виклик функції
	if (task == 1) {
		cout << "You have chosen the first task" << endl;
		taskone();
	}
	else if (task == 2) {
		cout << "You have chosen the second task" << endl;
		tasktwo();
	}
	else {
		cout << "Choose 1 or 2!" << endl;
	}
	return 0;
}




