#include <stdio.h>

int main(){
    char str[500] = {"z"};
    int key = 1;
    int i;
    for(int i=1; str[i] = 0; i++){
        str[i] = str[i] + key;
        if(str[i]>=123){
            str[i] = 97;
        }        
    }
    printf("%s", str);
  return 0;
  }
