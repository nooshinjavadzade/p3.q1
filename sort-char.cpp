#include <iostream>
#include <string>
#include <string.h>
using namespace std;
bool x(string input[100], int i, int k) {
    while (input[i][k] == ' ' || input[i][k] == '_' || input[i][k] == '-' || input[i][k] == '!' || input[i][k] == '@' || input[i][k] == ')' || input[i][k] == '(' || input[i][k] == '%' || (input[i][k] < 58 && input[i][k] > 47)) {
        return false;
    }
    return true;
}

int sort(string arr[200][20], string input[100], int size) {
    for (int i = 0; i < size; i++) {
        int k = 0;
        while (!x(input, i, k)) {
            k++;
        }

        char firstChar = tolower(input[i][k]);
        int index2 = 0;
        for (int j = 97; j < 123; j++) {
            if (j == firstChar) {
                arr[j][index2] = input[i];
                index2++;   
            }
        }
    }
}
   
void chap_first(string alephba[10][10],int k,int i){
   int m = 0;
   while (alephba[i][k][m]== ' ')
   {
      m++;
   }
   if (alephba[i][k][m]== '_')
   {
      cout<<alephba[i][k]<<endl;
   }
}
int main(){
   int size;
   string input[100];
   scanf("%d\n",&size);
   for (int i = 0; i < size; i++)
   {
      getline(cin ,input[i]);
   }
   string alephba[10][10];
   return 0;
}