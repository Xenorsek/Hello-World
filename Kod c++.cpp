#include <iostream>
using namespace std;
int main()
{
int liczba_do_zadania = 7;
if(liczba_do_zadania==5){
	cout<<"Liczba wynosi 5"<<endl;
}
else if(liczba_do_zadania==7)
{
	cout<<"liczba to 7"<<endl;
}
else
{
	cout<<"liczba to cos innego niz 5 i 7 "<<endl;
}
	for(int i=0;i<5;i++){
		for(int j=0;j=<i;j++){
			cout << "*";
		}
		cout << endl;
	}
return 0;
}
