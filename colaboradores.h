//ACOSTA APUNTE DAYANA
class Persona
{
private:	
	string cedula, nombres, apellidos;
	int aa,ma,da,an,mn,dn,a,m,d;
	float peso, estatura,imc;	
	public:
  	Persona()
	{  	
	}
  	//ingresar datos 
  	void ingresar()
	{
		cout<<"Por favor ingrese sus datos"<<endl;
		cout<<"Degite su numero de cedula: \n";
		getline(cin,cedula); 
		cout<<"Escriba sus nombres:  ";
		getline(cin,nombres);
		cout<<"Escriba sus apellidos:  ";
		getline(cin,apellidos);
		cout<<"Digite su peso: ";
		cin>>peso;
		cout<<"Digite su estatura: ";
		cin>>estatura;
		cout<<"Ingresa la fecha de nacimiento (AA-MM-DD): "; 
        cin>>an>>mn>>dn;
	}
	//mostar datos 
	void mostrar()
	{
		cout<<"-----------------------------------------------------"<<endl;	
		cout<<"sus nombre son :"<<nombres<<endl;
		cout<<"sus apellidos son :"<<apellidos<<endl;
		cout<<"su numero de cedula es :"<<cedula<<endl<<endl;
		cout<<"su fecha de nacimiento es :"<<an<<"/"<<mn<<"/"<<dn<<endl<<endl;
        cout<<"su peso es :"<<peso<<endl<<endl;
        cout<<"su estatura es :"<<estatura<<endl<<endl;
		cout<<"-----------------------------------------------------"<<endl;
	}
//BRAVO MENDOZA SHADEN
	//calcular edad
	void edad(int aa,int ma,int da) 
  	{
  	    if(da>dn)
	  {
	        d=da-dn;
	  }
            else
	  {
		da=da+30;
		ma=ma-1;
		d=da-dn;
	  }
	    if(ma>mn)
	  {
		m=ma-mn;
	  }
	    else
	  {
		ma=ma+12;
		m=ma-mn;
	  }
		a=aa-an;
   	} 
	void edad2()
   	{
   	cout<<"Su edad es : "<<a<<" ANOS "<<m<<", MESES Y "<<d<<" DIAS "<<endl;
   	}	
//LOPEZ BONE FERNANDO
//LLUMIQUINGA PINCAY LUISA	
};
