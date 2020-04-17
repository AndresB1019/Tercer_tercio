#include <iostream>
#include <complex>
 
using namespace std;

template <class punto>
inline void pendiente(punto& a0,punto& b0,punto& a1,punto& b1, punto& pent)
{
	pent=(b1-b0)/(a1-a0);
}
int main (void)
{
	float x0=0,y0=0,x1=0,y1=0,pen=0; //se declaran las variables de los puntos
	//se solicita las coordenadas del primer punto
	cout<<"Digite la coordenada x del primer punto: "<<endl<<endl;
	cin>>x0;
	cout<<"Digite la coordenada y del primer punto: "<<endl<<endl;
	cin>>y0;
	
	//se solicita las coordenadas del segundo punto
	cout<<"Digite la coordenada x del primer punto: "<<endl<<endl;
	cin>>x1;
	cout<<"Digite la coordenada x del primer punto: "<<endl<<endl;
	cin>>y1;
	
	cout<<endl;
	pendiente(x0,y0,x1,y1,pen);
	cout<<"La pendiente es: "<<pen<<endl;
	
	return 0;
}