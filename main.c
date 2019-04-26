#include <stdio.h>
int main(){
    int op;
    int i, key = 1;
    char str[500]; 
    printf("Enter operation you would like to execute\n 1 = rotation cipher encrypt         2 = rotaiton cipher decrypt\n3 = substitution cipher encrypt            4 = rotation cipher decrrypt\n");
    scanf("%d", &op);
    printf("Enter message: ");
    scanf("%s", &str);
    switch(op){
        
/***************************************ROTATION CIPHER ENCRYPT********************************************/        
        case 1:
            for(i = 0; str[i] != '\0'; i++){
                str[i] = str[i] + key;
                if(str[i] ==33){                //dealing with white spaces
                    str[i] = 32;
                }if(str[i] == 123){       //little z to a
                    str[i] = 97;
                }if(str[i] == 91){         //Capital Z to A
                    str[i] = 65;
                }  
            }                                   //end of for loop
            printf("%s\n", str);              
            return 0;
            break;

/*****************************************ROTATION CIPHER DECRYPT******************************************/
        case 2:
        //rotation decrypt    Works
        for(i = 0; str[i] != '\0'; i++){
            str[i] = str[i] - key;
            if(str[i] ==31){             //dealing with white spaces
                str[i] = 32;
            } else if(str[i] == 96){    //little a to z
                str[i] = 122;
            }else if(str[i] == 64){      //Capital A to Z
                str[i] = 90;
            }  
        }                               //end of for loop
            printf("%s", str);              
            break;
            
/******************************************SUBSTITUTION CIPHER ENCRYPT**************************************/
        case 3:
        for(i=0; str[i]!='\0';i++){
        switch(str[i]){
    //Turns Lower case letters into upercased and encrypts
            case 'a': str[i] = 81;
            break;
            case 'b': str[i] = 65;
            break;
            case 'c': str[i] =90;
            break;
            case 'd': str[i] =88;
            break;
            case 'e': str[i] =83;
            break;
            case 'f': str[i] =87;
            break;
            case 'g': str[i] =69;
            break;
            case 'h': str[i] =68;
            break;
            case 'i': str[i] =67;
            break;
            case 'j': str[i] =86;
            break;
            case 'k': str[i] =70;
            break;
            case 'l': str[i] =82;
            break;
            case 'm': str[i] =84;
            break;
            case 'n': str[i] =71;
            break;
            case 'o': str[i] =66;
            break;
            case 'p': str[i] =78;
            break;
            case 'q': str[i] =72;
            break;
            case 'r': str[i] =89;
            break;
            case 's': str[i] =85;
            break;
            case 't':str[i] =74;
            break;
            case 'u':str[i] =77;
            break;
            case 'v':str[i] =75;
            break;
            case 'w':str[i] =73;
            break;
            case 'x':str[i] =79;
            break;
            case 'y':str[i] =76;
            break;
            case 'z':str[i] =80;
            break;
            case 32: str[i] =32;
            break;
    //Uppercase Letters
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
            default: printf("error in %d\n", i);
            }
        }
        printf("%s", str); 
        case 4: //insert .....
        break;
        default: printf("Operation Number Error\n");
    }
}