//basaklys version 1.0
#include <stdio.h>
#include <locale.h>

int main() 
{
	//Starting Parameters
	setlocale(LC_ALL, "Turkish");
	char language;
	int number=0;
	int total=0;
	int counter=0;
	printf("Language Selection / Dil Se�imi \n");
	printf("English - E\n");
	printf("T�rk�e - T\n");
	scanf_s("%c", &language);

	//Turkish Interface
	if((language =='T') ||(language =='t'))
    {
    	printf("Ekrana ka� kez yaz�lmas�n� istiyorsun?:");
		scanf_s("%d",&number); 
		
		if(number>0)
		{
			do 
			{
    			printf("Orospu Ba�ak \n");
				number--;
				total++;
  			}
			while(0 < number);
  		
			printf("Ekrana toplam %d kez yaz�ld� \n", total);
			printf("Fakat hala yeterli de�il!");
			getchar();
	
		  return 0;
		}
		
		else
		{
    		printf("HATA:Girdi�iniz say� pozitif olmal�");
  		return 0;
		}

	}

	//English Interface	
	else if((language =='E') ||(language =='e'))
    {
    	printf("How many times would you like it to be written on screen?:");
		scanf_s("%d",&number); 

		if(number>0)
		{
			do
			{
    			printf("Ba�ak is a bitch \n");
    			number--;
    			total++;
  			}
			while(0 < number);
  		
			printf("It has written to screen a total of %d times \n", total);
			printf("But that's still not enough!");
			getchar();
 	 	return 0;
		}

		else
		{
    	printf("ERROR:You must write a positive number");
  	return 0;
		}
	
	}

	//Invalid Language
	else
    {
    	printf("ERROR:Invalid choice\nHATA:Ge�ersiz se�im");
  	return 0;
	}

}

