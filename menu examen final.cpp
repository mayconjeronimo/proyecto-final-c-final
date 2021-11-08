#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reemplazar(string& frase, string buscar, string rempl)
{
	
	int pos = frase.find(buscar);
	while(pos!=-1){
		
		frase.replace(pos,buscar.size(),rempl);
		pos=frase.find(buscar,pos+rempl.size());
	}
	
}
int main(int argc, char** argv) {
	system("cls");
	string frase,p1,p2;
	
	getline(cin,frase);
	
	cin>>p1>>p2;
	
	reemplazar(frase,p1,p2);
	
	cout<<frase<<endl;
	system("pause");
	return 0;
}
