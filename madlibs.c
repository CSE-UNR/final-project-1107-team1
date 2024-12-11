//author:Louije Jan Sison, Yunling Shi, Arnav
#include <stdio.h>
#include <stdbool.h>
#define yo 63
#define ya 22
#define big 1000
#define filename "madlib1.txt"
void acount(int *k);
int storef(FILE* ptr, int mac, char arr[][yo]);
void displ(char arr[][yo]);
void uinput(FILE* fptr,int mac, char arr[][yo]);
void swapstr(int row1, int row2, char arr[][yo], char arr2[][yo]);
//straighten string
int main() {
    FILE *file;
   
    int i, h, l, a, j, x;
     acount(&l);
 h = l*2+1;
 //x = l*2;
char libi[h][yo], input[l][yo], buffer[h][yo]; 
    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 0;
    }
    
a = storef(file, h, libi);
uinput(file, h, input);
 

 for(j=1;j<=l;j++){
 x=j*2;

 swapstr(x-1, j-1, libi,input);
 }
     displ(a, libi);
    
    

    // Close the file
    fclose(file);
   
   
    return 0;
}
void acount(int *k){
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
void displ(char arr[][yo]){

for(int y = 0; y<mac; y++){
printf("%s" , arr[y]);
}
}
void uinput(FILE* fptr,int mac, char arr[][yo]){
char buffer[mac][yo];
int y = 0;
while(fgets(buffer[y], yo, fptr) && y < mac){y++;}
//return y;
//fscanf(fptr, "%c", &buffer[i][j]);


for(int i=0;i<mac;i++){

if(buffer[i][yo] == 'A'){
printf("Enter an adjective: ");
scanf("%s", arr[i]);
}
if(buffer[i][yo] == 'N'){

printf("Enter a noun: ");
scanf("%s", arr[i]);
}
if(buffer[i][yo] == 'V'){

printf("Enter a verb: ");
scanf("%s", arr[i]);
}
}
}
void swapstr(int row1, int row2, char arr[][yo], char arr2[][yo]) {
    char temp[100];

int y, i;


    
    for ( y = 0; arr[row1][y] != '\0'; y++) {
        temp[y] = arr[row1][y];
  }
    temp[y] = '\0';

    
    for ( y = 0; arr2[row2][y] != '\0'; y++) {
        arr[row1][y] = arr2[row2][y];
    }
    arr[row1][y] = '\0';

  
    for ( y = 0; temp[y] != '\0'; y++) {
        arr2[row2][y] = temp[y];
    }
    arr2[row2][y] = '\0';

}
