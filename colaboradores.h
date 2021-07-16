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
	//calcular indice de masa corporal.
	void IMC(float imc)
 	{
 		imc = peso/(estatura*estatura); 
 		cout<<"---||INDICE DE MASA CORPORAL||--- \n";
		cout<< "Tu indice de masa corporal es : " << imc << endl<<endl;
    	if (imc<20)
    	{
    		cout<<"Peso inferior al normal, tienes que subir de peso " << "\n\n";
		}
     	else
   	if (18.5<imc&&imc<=24.9)
 		{
  		  cout<< "Peso normal ¡FELICIDADES! tines el peso correcto" << "\n\n" ;
		}
      	else
   	if (25<imc&&imc<29.0)
    	{
    		cout<< "Peso superior al normal, tomar medidas al respecto." << "\n\n"; 
		}
  	 	else
    	{
    		cout<< "Obesidad, Le recomendamos comer sano, hacer ejercicio y acudir a un profesional." << "\n\n"; 	
		}
 	}
//LLUMIQUINGA PINCAY LUISA
	//guardar archivo txt.
	void guardar()
	{
 		ofstream work;
 		work.open("trabajo.txt",ios::out);
 		if (work.fail())
		{
 			cout<<"Error";
 			exit(1);
	 	}
	    work<<"CEDULA: "<<cedula<<endl;
		work<<"NOMBRES: "<<nombres<<endl;
		work<<"APELLIDOS: "<<apellidos<<endl;
		work<<"PESO: "<<peso<<endl;
		work<<"ESTATURA: "<<estatura<<endl;
		work<<"AA: "<<an<<endl;
		work<<"MM: "<<mn<<endl;
		work<<"DD: "<<dn<<endl; 
		cout<<"||----GUARDAR ARCHIVO----||"<<endl<<endl;
		cout<<"SUS DATOS SE GUARDAON CON EXITO \n\n";
		work.close();
 	}
};
