#include <stdio.h>
int main(){
    char op;
    int i;
    printf("Enter What You Wanna Do:\n 1) Substitution Cipher       2).....\n 3).....       4).....\n");
    sscanf ("%c", &op);               //choosing function or case
    char str[500]= {"abc abc"};     //message 
    switch(op){
        case 1:     
        //substitute c
            for(i = 0; str[i] != '\0'; i++){
                str[i] = str[i] + 1;
                if(str[i] ==33){             //dealing with white spaces
                    str[i] = 32;
                } else if(str[i] == 123){    //little z to a
                    str[i] = 97;
                }else if(str[i] == 91){      //Capital Z to A
                    str[i] = 65;
                }  
            }                               //end of for loop
            printf("%s", str);              
            return 0;
        break;
        case 2:
        break;
        case 3: //insert .....
        break;
        case 4: //insert .....
        break;
        default: printf("Your Dumb Enter An Actual Operation Stupid\n");
    }
}