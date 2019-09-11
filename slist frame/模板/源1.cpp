#include"slist.h"
#include"Ô´.cpp"
int main(){
	seqlist<int> a(10);
	for (int i = 0; i < 10; i++){
		a[i] = i + 1;
	}

	for (int i = 0; i < a.size(); i++){
		cout << a[i]<< endl;
	}
	//a.push_back(3);
	//cout << a[0] << endl;
	a.pr();//´òÓ¡
	system("pause");
	return 0;
}