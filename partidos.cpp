#include <iostream>
int matriz [5][4];

using namespace std;
void llenar();
void mostrar();
int multiplicar();
int suma();

int main(){
	llenar();
	mostrar();
	multiplicar();
	suma();
	resultado(res);
}

int suma()
{
	int i,c,res;
	for (i=1;i<=5;i++)
	{
		for (c=1;c<=4;c++)
		{
			if(c=2)
			{
				res=res+matriz[i][c];
			}
			if(c=3)
			
		}
	}
}
int multiplicar()
{
	int i,c;
	for (i=1;i<=5;i++)
	{
		for (c=1;c<=4;c++)
		{
			if(c=2)
			{
				res=res+matriz[i][c];
			}
		}
	}
	cout<<"BARCELONA=1"<<endl;
	cout<<"ATLETIC=2"<<endl;
	cout<<"REAL MADRID=3"<<endl;
	cout<<"GETAFE=4"<<endl;
	cout<<"ALAVES=5"<<endl;

}

void mostrar()
{
	int i,c;
	for (i=1;i<=5;i++)
	{
		for (c=1;c<=4;c++)
		{
		
		}
	}


}	


void llenar()
{
	int i,c,jugadas,ganadas,perdidas,empatadas;
	for (i=0;i<5;i++)
	{
			switch (i)
			{
				case 1:
					cout<<"BARCELONA"<<endl;
					break;
				case 2:
					cout<<"ATLETICO"<<endl;
					break;
				case 3:
					cout<<"REAL MADRID"<<endl;
					break;
				case 4: 
				    cout<<"GETAFE"<<endl;
				    break;
				case 5:
					cout<<"ALAVES"<<endl;
					break;
			}
		for(c=1;c<=4;c++)
		{
			switch (c)
			{
				case 1:
					cout<<"Partidos jugados: ";
					cin>>jugadas;
					if(jugadas<1)
					{
						cout<<"No puedes ingresar numeros negativos: "<<endl;
					}
					else
					{
						matriz [i][c]=jugadas;
					}
					break;
				case 2:
					cout<<"Partidos ganados: ";
					cin>>ganadas;
					if(ganadas<1)
					{
						cout<<"No puedes ingresar numeros negativos: "<<endl;
					}
					else
					{
						matriz [i][c]=ganadas;
					}
					break;
				case 3: 
				    cout<<"Partidos perdidos: ";
				    cin>>perdidas;
				    	if(perdidas<1)
					{
						cout<<"No puedes ingresar numeros negativos: "<<endl;
					}
					else
					{
						matriz [i][c]=perdidas;
					}
				case 4: 
				cout<<"Partidos empatados: ";
				cin>>empatadas;
					if(empatadas<1)
					{
						cout<<"no puedes ingresar numeros negativos: "<<endl;
					}
					else
					{
						matriz [i][c]=empatadas;
					}
					
					
			}
		}
	    cout<<"\n";	
	}
}
