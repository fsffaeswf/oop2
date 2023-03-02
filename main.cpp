#include <iostream>
#include <vector>
using namespace std;
class  PC
{
	string proc;
	string videoc;
public:
	PC() {
		proc = " ";
		videoc = " ";
	}
	PC(string fproc,string fvideoc) {
		proc = fproc;
		videoc = fvideoc;
	}
	void print() {
		cout << "Proc:" << proc << endl << "Videoc:" << videoc << endl;
	}
};

int main() {
	vector <PC> pr(2);
	vector <PC> vid(2);
	string proc[]{ "amd","intel" };
	string videoc[]{ "rtx 3090","rtx 3060" };
	for (int i = 0; i < 2; i++) {
		int index_pr = rand() % 2;
		int vid_pr = rand() % 2;
		PC c1(proc[index_pr],videoc[vid_pr]);
		vid.push_back(c1);
		//vid[i].print();
		vid.at(i).print();
	}
	
}