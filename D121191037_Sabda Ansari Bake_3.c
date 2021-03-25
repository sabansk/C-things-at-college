#include <stdio.h>    
#include <string.h>   
#include <stdlib.h>

void showHangman(int);

int main(void)
{
    char hangmanWord[100] = "avengers", tempWord[100];       
    char hangmanOutput[100];                    
    int wrongTry = 6 , matchFound = 0;          
    int counter = 0 , position = 0, winner, length , i;
    char alphabetFromUser;

    system("cls");                                          
    length = strlen(hangmanWord);              

    printf("\n\n Selamat datang di Permainan Hangman\n\n\n");  
    printf("\n\n Anda akan memperoleh 5 kesempatan menebak");
    printf("\n\n Tebaklah dengan benar dan selamatkan hangman");
    printf("\n\n\tTekan ENTER untuk melanjutkan ");

    getchar();

    system("cls");

        printf("\n\t||===== ");                
	    printf("\n\t||    | "); 
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");

    printf("\n\n     Jawabannya memiliki %d karakter \n\n",length);  
    for( i = 0; i < length ; i++)
    {
        hangmanOutput[i] = '_';
        hangmanOutput[length] = '\0';
    }

    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",hangmanOutput[i]);        

    }
    while(wrongTry != 0)                      
    {
        matchFound = 0;
        printf("\n\n   silahkan pikirkan jawabannya terlebih dahulu.. lalu masukkan jawabannya di bawah. jangan lupa gunakan huruf kecil ya.");
        printf("\n\n\t masukkan hurufnya satu-satu.. ==> ");

	    fflush(stdin);

	    scanf("%c",&alphabetFromUser);           
    if(alphabetFromUser < 'a' || alphabetFromUser > 'z') 
    {
        system("cls");
        printf("\n\n\t Salah inputan gan...");
        matchFound = 2;
    }
    fflush(stdin);
    if (matchFound != 2)
    {
        for(counter=0;counter<length;counter++)    
	    {
		    if(alphabetFromUser==hangmanWord[counter])
		     {
		       matchFound = 1;
                     }
            }

	   if(matchFound == 0)                     
	    {
     	      printf("\n\t Aduh! salah huruf! Nyawamu jadi %d deh..",--wrongTry);
	          getchar();
              showHangman(wrongTry);
              getchar();
	    }

	   else
	   {
	     for(counter = 0; counter < length; counter++)
             {
     	         matchFound = 0;
                 if(alphabetFromUser == hangmanWord[counter])
	          {
     		     position = counter ;
     		     matchFound = 1;
	          }
    	      if(matchFound == 1)
	          {
                 for(i = 0 ; i < length ; i++)
                 {
                      if( i == position)
                  	  {
                          hangmanOutput[i] = alphabetFromUser; 
                      }
                      else if( hangmanOutput[i] >= 'a' && hangmanOutput[i] <= 'z' ) 
                      {
                          continue;
                  	  }

                      else
                      {
                          hangmanOutput[i] = '_';           
                      }
                }
                tempWord[position] = alphabetFromUser;      
                tempWord[length] = '\0';                    
                winner = strcmp(tempWord,hangmanWord);      
                if(winner == 0)                            
                {
                    printf("\n\n\t \t Selamat, Jawaban anda benar!");
                    printf("\n\n\t Jawabannya adalah :  %s ",hangmanWord);
                    getchar();
                    return 0;
                }
	       }
	    }
      }
     }

    printf("\n\n\t");
    for(i = 0 ; i < length ; i++)
      {
          printf(" ");
          printf("%c",hangmanOutput[i]);                
      }

    getchar();
    }

      if(wrongTry <= 0)                                
      {
          printf("\n\n\t Jawaban yang benar adalah %s ",hangmanWord);
          printf("\n\n\t Sayang sekali..");
	      printf("\n\n\t Coba lagi nanti.");

      }
getchar();
return 0;
}



void showHangman(int choice)                            
 {

     switch(choice)
     {

     case 0:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
     case 1:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
     case 2:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 3:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 4:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 5:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
      }
      return;
 }