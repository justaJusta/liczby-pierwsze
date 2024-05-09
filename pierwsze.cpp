#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    int i, k, g, w, h;
    fstream f1;
    h=0;
    w=0;
	f1.open("liczby.txt", ios::in);
    while (!f1.eof()) {
		if(f1>>k) k=k-1;
		g=k;
		for(i=2;i<g;i++) if(k%i==0) w++;
		if(w==0) h++;
		w=0;
		cout<<k<<endl;
	}
	f1.close();
	//94, 21
	cout<<h;
	return 0;
}
