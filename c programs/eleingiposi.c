#include<stdio.h>                                                                
                                                                                
void main()                                                                     
{                                                                               
  int i, n, term, *ptr, array[10];                                              
  printf("\nEnter number of elements: ");                                       
  scanf("%d", &n);                                                              
                                                                                
  printf("\nEnter array elements: ");                                           
  for(i=0;i<n;i++)                                                              
  {                                                                             
    scanf("%d", &array[i]);                                                     
  }                                 
  printf("\nArray element by term: ");
  scanf("%d", &term);

  ptr=array;
  printf("%d term element in array: %d", term, *(ptr+(term-1)));

}
                                                                      
