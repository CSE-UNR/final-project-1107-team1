//author:Louije Jan Sison, Yunling Shi
#include <stdio.h>
#include <stdbool.h>
#define yo 63
#define ya 22
#define big 100
#define filename "madlib1.txt"
void acount(int *k);
int storef(FILE* ptr, int mac, char arr[][yo]);
void displ(int mac, char arr[][yo]);
void uinput(FILE* fptr,int mac, char arr[][yo]);
void swapstr(char arr[][yo], char arr2[][yo], int size);
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
 //swapstr(libi, 1, 0, input);
     displ(a, libi);
    
    

    // Close the file
    fclose(file);
   
    printf("%d %s\n",a , libi[2]);
    printf("%d %s",a , input[0]);
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
void swapstr(char arr[][yo], char arr2[][yo], int size) {
   

   for (int i = 1; i <= size; i++) {
       int x = i*2;

       for (int j = 1; j <= yo; j++) {
            char temp = arr1[x-1][yo];
            arr1[x-1][yo] = arr2[i-1][yo];
            arr2[i-1][yo] = temp;
        }
    }
        }
        arr2[i][j] = '\0';
    }
}
