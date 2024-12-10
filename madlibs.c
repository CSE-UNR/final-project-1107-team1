//author:Louije Jan Sison, Yunling Shi
#include <stdio.h>
#include <stdbool.h>
#define yo 63
#define ya 22
#define big 1000
#define filename "madlib1.txt"
void count(int *k);
int storef(FILE* ptr, int mac, char arr[][yo]);
void displ(int mac, char arr[][yo]);
//user input loop
void swapstr(char str1[], char str2[]);
//straighten string
int main() {
    FILE *file;
   
    int i, h, l;
     count(&l);
 h = l*2+1;
char libi[h][yo], input[l][yo]; 
    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 0;
    }


    i = storef(file, h, libi);
     displ(i, libi);
    
     

    // Close the file
    fclose(file);
    //write user input loop
//swap user input and slice into main file
    // Print the array
    printf("(%s)\n", libi[5]);
    printf("(%d)\n", l);
    return 0;
}
void count(int *k){
char madlib[ya][yo];
int i, j;
FILE *readinput;  
readinput = fopen(filename, "r");
for(i=0;i<ya;i++){
for(j=0;j<ya;j++){
fscanf(readinput,"%c", &madlib[i][j]);
}
}
for(i=0;i<ya;i++){
for(j=0;j<ya;j++){
if(madlib[i][j-2] == 'A'){*k = *k + 1;} 
if(madlib[i][j-2] == 'N'){*k = *k + 1;}  
if(madlib[i][j-2] == 'V'){*k = *k + 1;}  
}}

 fclose(readinput);
}
int storef(FILE* ptr, int mac, char arr[][yo]){
ptr = fopen(filename, "r");
int y = 0;
while(fgets(arr[y], yo, ptr) && y < mac){y++;}
return y;
 fclose(ptr);}
void displ(int mac, char arr[][yo]){

for(int y = 0; y<mac; y++){
printf(" %s", arr[y]);
}
}
void swapstr(char str1[], char str2[]) {
    int i = 0;
    char temp[50];

    // Find the length of the shorter string
    while (str1[i] != '\0' || str2[i] != '\0') {
       i+=2;
   }

    // Swap characters
    for (int j = 0; j < i; j++) {
        temp[50] = str1[j];
        str1[j] = str2[j];
        str2[j] = temp[50];
    }
}
