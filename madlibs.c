//author:Louije Jan Sison, Yunling Shi
#include <stdio.h>
#include <stdbool.h>
#define yo 63
#define ya 22
#define big 1000
#define filename "madlib1.txt"
void acount(int *k);
int storef(FILE* ptr, int mac, char arr[][yo]);
void displ(int mac, char arr[][yo]);
void uinput(FILE* fptr,int mac, char arr[][yo]);
//swap
//straighten string
int main() {
    FILE *file;
   
    int i, h, l, a, j, x;
     acount(&l);
 h = l*2+1;
char libi[h][yo], input[l][yo], buffer[h][yo]; 
    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 0;
    }
    
a = storef(file, h, libi);
uinput(file, h, input);
     displ(a, libi);
    
     

    // Close the file
    fclose(file);
   
    printf("%d(%s)\n",a , libi[5]);
    printf("(%d)\n", a);
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
void displ(int mac, char arr[][yo]){

for(int y = 0; y<mac; y++){
printf("%d %s",y+1 , arr[y]);
}
}
void uinput(FILE* fptr,int mac, char arr[][yo]){
char buffer[mac][yo];
int y = 0;
for(int i=0;i<ya;i++){
for(int j=0;j<ya;j++){
fscanf(fptr, "%c", &buffer[i][j]);
}
}
for(int i=0;i<ya;i++){
for(int j=0;j<ya;j++){
if(buffer[i][j-2] == 'A'){
printf("Enter an adjective: ");
scanf("%s", arr[y]);
}
if(buffer[i][j-2] == 'N'){

printf("Enter a noun: ");
scanf("%s", arr[y]);
}
if(buffer[i][j-2] == 'V'){

printf("Enter a verb: ");
scanf("%s", arr[y]);
}
}
}
}
