 #include <stdio.h>
#include <string.h>
 void caesar(int key, char message[]){
 	int i;
 	for(i = 0; i <strlen(message); i++){
 		char c = message[i];
 		if(islower(c)){
 			message[i] = 'a' + (c - 'a' + key)%26;	
 		}else if(isupper(c)){
 			message[i] = 'A' + (c - 'A' + key)%26;
 		}
 	}
 }
 int main(void){
 	int key;
 	for(key = 1; key < 26; key++){
 		char message[94] = "Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai";
 		caesar(key, message);
 		printf("key: %i \n", key);
 		printf("%s\n", message);
 	}	
 }