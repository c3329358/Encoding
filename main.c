/********************************************************************************************************
This code block is able to encrypt and decrypt a message using a known key
The code uses a Rotation Cipher (Ceasar) and a Substitution Cipher
The input can be both upper and lower case with the output being only in upper case letters
punctuation does not get encrypted, only letters, with numerical values remaining the same.
********************************************************************************************************/


/************************************HOW TO RUN*******************************
To run use the terminal and run cd /projects/Encoding ----> ./a.out
Then first enter the message you either want to encrypt or decrypt. When finished hit enter.
Then enter what operation you would like to do (1-4) with the numbers correlating to the operations shown in the termail.
When u enter a number hit enter and it will proceed to either encrypt or decrypt with the message being printed in the terminal.
******************************************************************************/
#include <stdio.h>
int main(){
    int op, x = 1;                                      //the x variable is just something i put in the default line of code for the case switch statements
    int i, key = 1;                                     //key is known for Rotation Cipher
    char str[1024];
    printf("Enter message: ");                          
    scanf("%[^\n]s", &str);                             //scans message and gives it to the string (str) variable
    printf("Enter operation you would like to execute\n1 = Rotation Cipher Encrypt      2 = Rotation Cipher Decrypt\n3 = Substitution Cipher Encrypt        4 = Substitution Cipher Decrypt \n");
    scanf("%d", &op);                                   //scans the entered operation number and gives it to the op variable
    switch(op){
        
/*************************************** ROTATION CIPHER ENCRYPT ********************************************/        
        case 1:
        for(i = 0; str[i] != '\0'; i++){                //if the string character fits for the condition 97 <= str[i] <= 122
            if(str[i]<=122){                            //changes lowercase letters to upercase                 
                if(str[i] >= 97){
                    str[i] = str[i] - 32;               //minuses the difference to make it uppercase
                }
            }
            if(str[i] <= 90){                           //this set of if statements makes it so that it only encrypts letters and keeps numerical values and punctuation the same
                if(str[i] >= 65){                       
                    str[i] = str[i] + key;          
                    if(str[i] == 91){                   //Capital Z to A
                        str[i] = 65;
                    }
                }
            }                                       
        }                                               //end of encryption loop
        printf("%s", str);                              //prints the encrypted message
        break;

/***************************************** ROTATION CIPHER DECRYPT ******************************************/
        case 2:
        for(i = 0; str[i] != '\0'; i++){                
            if(str[i]>= 97){                            //if the string character fits for the condition 97 <= str[i] <= 122
                if(str[i]<= 122){                       //changes lower case letter to upper case
                    str[i] = str[i] - 32;               //minuses the difference to make it uppercase
                }  
            }
            if(str[i] >= 65){                       
                str[i] = str[i] - key;                  //minuses the scaned ascii code with the key                  
                if(str[i] ==31){                        //dealing with white spaces
                    str[i] = 32;                        //sets white spaces to themselves
                }
                if(str[i] == 64){                       //Capital Z to A
                    str[i] = 91;
                }
            }
        }                                               //end of decrpytion
        printf("%s", str);                              //prints full decrypted message
        break;
/****************************************** SUBSTITUTION CIPHER ENCRYPT **************************************/
        case 3:
        for(i=0; str[i]!='\0';i++){
            if(str[i] >= 97){                           //turns lower case letters into upper case
                if(str[i] <=122){
                    str[i] = str[i] - 32;
                }
            }
            switch(str[i]){
                case 'A': str[i] = 81;
                break;
                case 'B': str[i] = 65;
                break;
                case 'C': str[i] =90;
                break;
                case 'D': str[i] =88;
                break;
                case 'E': str[i] =83;
                break;
                case 'F': str[i] =87;
                break;
                case 'G': str[i] =69;
                break;
                case 'H': str[i] =68;
                break;
                case 'I': str[i] =67;
                break;
                case 'J': str[i] =86;
                break;
                case 'K': str[i] =70;
                break;
                case 'L': str[i] =82;
                break;
                case 'M': str[i] =84;
                break;
                case 'N': str[i] =71;
                break;
                case 'O': str[i] =66;
                break;
                case 'P': str[i] =78;
                break;
                case 'Q': str[i] =72;
                break;
                case 'R': str[i] =89;
                break;
                case 'S': str[i] =85;
                break;
                case 'T':str[i] =74;
                break;
                case 'U':str[i] =77;
                break;
                case 'V':str[i] =75;
                break;
                case 'W':str[i] =73;
                break;
                case 'X':str[i] =79;
                break;
                case 'Y':str[i] =76;
                break;
                case 'Z':str[i] =80;
                break;
                default: x++;                   //not necassary, just fills the default line with a command and doesnt change anything with the string
            }                                   //end of switch statement
        }                                       //end of encryption     
        printf("%s", str);                      //prints encrypted message
        break;
        
/************************************************** SUBSTITUTION CIPHER DECRYPT ******************************/
        case 4: 
        for(i=0; str[i]!='\0';i++){
            if(str[i] >= 97){                   //turns lower case letters into upper case
                if(str[i] <=122){
                    str[i] = str[i] - 32;
                }
            }
            switch(str[i]){
                case 81: str[i] = 'A';
                break;
                case 65: str[i] = 'B';
                break;
                case 90: str[i] ='C';
                break;
                case 88: str[i] ='D';
                break;
                case 83: str[i] ='E';
                break;
                case 87: str[i] ='F';
                break;
                case 69: str[i] ='G';
                break;
                case 68: str[i] ='H';
                break;
                case 67: str[i] ='I';
                break;
                case 86: str[i] ='J';
                break;
                case 70: str[i] ='K';
                break;
                case 82: str[i] ='L';
                break;
                case 84: str[i] ='M';
                break;
                case 71: str[i] ='N';
                break;
                case 66: str[i] ='O';
                break;
                case 78: str[i] ='P';
                break;
                case 72: str[i] ='Q';
                break;
                case 89: str[i] ='R';
                break;
                case 85: str[i] ='S';
                break;
                case 74:str[i] ='T';
                break;
                case 77:str[i] ='U';
                break;
                case 75:str[i] ='V';
                break;
                case 73:str[i] ='W';
                break;
                case 79:str[i] ='X';
                break;
                case 76:str[i] ='Y';
                break;
                case 80:str[i] ='Z';
                break;
                default: x++;                       //not necassary, just fills the default line with a command and doesnt change anything with the string
            }
        }
        printf("%s", str);
        break;
    }
}
