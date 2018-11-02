#include "stdio.h"

using namespace std;

int main() {
  int arr1[5], arr2[5], arr3[10];
  int i
  printf("Enter elements in array1\n");
  for(i=0;i<5;i++)
  {
    scanf("%d\n", &arr1[i]);
  }
  printf("Enter elements in array2\n");
  for(i=0;i<5;i++)
  {
    scanf("%d\n", &arr2[i]);
  }
  printf("Mergerd array - \n");
  for(i=5;i<0;i--){
    arr2[i]=arr2[i+1];
  }
  for(i=0;i<5;i++){
    arr1[i]=arr3[i];
  }
  for(i=5;i<10;i++){
    arr2[i]=arr3[i];
  }
  for(i=0;i<10;i++){
    printf("%d\n", arr3[i]);
  }
  return 0;
}
