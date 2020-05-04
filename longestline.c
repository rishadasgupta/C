/*
 * Author: Risha Dasgupta
 *Purpost: Reads given input file and returhs the length of the longest line
 */


#include <stdio.h>

int main(){
  int count = 0, copy = 0, max = 0;
  char c;
  while((c = getchar()) != EOF)
    {
      //counting length of each line
      if(c != '\n')
	{
	  count++;
	}	
      else if(count != 0) 
	{
	  copy = count;
	  count = 0;
	}
      //finding the longest line
      if(copy >count && max >= copy)
	{
	  max = copy;
	}
      else if(count != 0)
	{
	  max = count;
	}
    
      
    }
  if(count == 0)
    {
      max = copy;
      
    }
  printf("The length of the longest line is: %d \n",max);
}
