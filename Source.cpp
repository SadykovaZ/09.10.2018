#include <iostream>
#include<string>
#include<fstream>
#include <direct.h>
#include<io.h>
#include<iomanip>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "Rus");
	//����� ������ ������ ����������
	//struct _finddata_t c_file;
	//long hFile;
	//int size = 0;
	///*Find first *.* file in current directory*/
	//if ((hFile = _findfirst("*.*", &c_file)) == -1L) /*���������� text.txt � ��� text.txt */
	//	printf("No * files in current directory!\n");
	//else
	//{
	//	printf("Listing of files\n\n");
	//	if (!(c_file.attrib&_A_SUBDIR))
	//		cout << setw(30) << c_file.name << " " << setw(20) << c_file.size << endl;
	//	size++;
	//	//Find the rest of the .txt files
	//	while (_findnext(hFile, &c_file)==0)
	//	{
	//		if(!(c_file.attrib&_A_SUBDIR))
	//			cout << setw(30) << c_file.name << " " << setw(20) << c_file.size << endl;
	//		size++;
	//	}
	//	_findclose(hFile);
	//}
	//cout << size << endl;
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "1. ���� ������ S. ���� S �������� ���������� ������ �����, �� ������� ������ ���� � ���� ������ � ������� TRUE. ���� ���� � ������ S ������� ������, �� ������� FALSE" << endl;
		struct _finddata_t c_file;
		long hFile;
		int size = 0;
		ofstream o;
		fstream in_file("in.txt", ios::in);
		char str[20];
		cin >>str;

		if ((hFile = _findfirst(str, &c_file)) == -1L) /*���������� text.txt � ��� text.txt */
		{
			o.open(str);
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
		
		
	}
	system("pause");
}