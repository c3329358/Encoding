#include <stdio.h>

int main(){
    int key, i;
    char str[500];
    printf("Enter Thingo\n");
    scanf("%s", &str);
    key = 1;
    for(i = 1; str[i] == 0; i++){
        str[i] = str[i] + key;
        if(str[i] == 123){          //little z to a
            str[i] = 97;
        } else if(str[i] == 91){      //Capital Z to A
            str[i] == 65;
        } else if(str[i]==32){              //dealing with white spaces
            str[i] = str[i];
        }          
        }
    printf("%s", str);
    return 0;
}

