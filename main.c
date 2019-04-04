#include <stdio.h>
int main(){
    char op;
    int i;
    char str[500]= {"szbo tnfmmt ljoeb cbe mnbp"};     //message 
    op = 2;                        //choosing function or case
    switch(op){
        case 1:     
        //substitute cipher         WORKS
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
        //substitute decrypt    Works
        for(i = 0; str[i] != '\0'; i++){
            str[i] = str[i] - 1;
            if(str[i] ==31){             //dealing with white spaces
                str[i] = 32;
            } else if(str[i] == 96){    //little a to z
                str[i] = 122;
            }else if(str[i] == 64){      //Capital A to Z
                str[i] = 90;
            }  
        }                               //end of for loop
            printf("%s", str);              
            return 0;
        break;
        case 3: //insert .....
        break;
        case 4: //insert .....
        break;
        default: printf("Your Dumb Enter An Actual Operation Stupid\n");
        
    }
}