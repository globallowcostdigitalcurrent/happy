#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

typedef struct 
	{
		int day;
		int month;
		int year;
	}birthday;
	
typedef struct 
	{
		char name[50];
		birthday birth;
		float salary;
	}Employee;


int main()
{
	
	int n; // n la so nhan vien
	cout << "Nhap so luong nhan vien: ";
	cin >> n;

	Employee *nv;
	nv= new Employee[n];
	
	//nhap ten nhan vien tuoi va luong 
	for(int i=0;i<n;i++)
	{
		cout <<endl<< "Ho & Ten nhan vien thu "<< i+1 <<": ";
		cin >> nv[i].name;
		cout << "Luong: ";
		cin >> nv[i].salary;
		cout << "Ngay sinh: ";
		cin >> nv[i].birth.day;
		cout <<endl<< "Thang: ";
		cin >> nv[i].birth.month;
		cout <<endl<< "Nam: ";
		cin >> nv[i].birth.year;
	};
	
	
	//xuat ten tuoi va luong cua nhan vien >18 tuoi
	for(int i=0;i<n;i++)
	{
		int age[i];
		if(age[i]>18)
		{
			cout << endl << "Nhan vien: "  << nv[i].name << endl << "Tuoi: " << age[i] << endl <<"Luong " << nv[i].salary << " Vnd";
		};
	};
	//cout << "Nhan vien: "  << a1.name <<" " << a1.age << "Tuoi " << endl <<"Luong " << a1.salary << " Vnd";
	
	return 0;
}