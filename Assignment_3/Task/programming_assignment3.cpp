#include <iostream>
#include <string>
using namespace std;

struct data
{
	string name;
	int nim;
	string gender;
	int *p;   //pointer (but not used, just to show that it can be put in the struct)
};
int main ()
{
	struct data mahasiswa [10];
	int i = 0;
	char input = 1;



	cout << "Do you want to add any new student? (YES=1 | NO=0)" << endl;
	cin >> input;
	while (input == '1') {
		cout << "Enter name of student" << endl;
		cin >> mahasiswa[i].name;
		cout << "Enter NIM" << endl;
		cin >> mahasiswa[i].nim;
		cout << "Enter gender of student (MALE | FEMALE)" <<endl;
		cin >> mahasiswa[i].gender;
		while (mahasiswa[i].gender!= "MALE" && mahasiswa[i].gender!= "FEMALE") {
			cout << "Error input, please enter MALE OR FEMALE" <<endl;
			cin >> mahasiswa[i].gender;
		}
		
		cout << "--------------" << endl;
		cout << "Name: " << mahasiswa[i].name << endl;
		cout << "--------------" << endl;
		cout << "NIM: " << mahasiswa[i].nim << endl;
		cout << "--------------" << endl;
		cout << "Gender: " << mahasiswa[i].gender << endl;
		cout << "--------------" << endl;




		cout << "Do you want to continue? (YES = 1 | NO = 0)" << endl;
		cin >> input;
		i = i + 1;



	}
    cout << "No new student will be added (END)";


}
