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
	printf("Language Selection / Dil Seçimi \n");
	printf("English - E\n");
	printf("Türkçe - T\n");
	scanf_s("%c", &language);

	//Turkish Interface
	if((language =='T') ||(language =='t'))
    {
    	printf("Ekrana kaç kez yazýlmasýný istiyorsun?:");
		scanf_s("%d",&number); 
		
		if(number>0)
		{
			do 
			{
    			printf("Orospu Baþak \n");
				number--;
				total++;
  			}
			while(0 < number);
  		
			printf("Ekrana toplam %d kez yazýldý \n", total);
			printf("Fakat hala yeterli deðil!");
			getchar();
	
		  return 0;
		}
		
		else
		{
    		printf("HATA:Girdiðiniz sayý pozitif olmalý");
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
    			printf("Baþak is a bitch \n");
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
    	printf("ERROR:Invalid choice\nHATA:Geçersiz seçim");
  	return 0;
	}

}

