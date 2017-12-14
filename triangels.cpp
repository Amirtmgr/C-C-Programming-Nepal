#include <stdio.h>

int main(void) {
	//index for looping
  int i,j;
  
  //height of the triangle
  int height =4;

	//lopping through the row.
  for(i=1;i<=height;i++){
  
  	//printing first tirangle
    for(j=1;j<=height-i ;j++){
        printf(" ");
    }
    
    //printing second triangle
    for(j=1;j<=i;j++){
        printf("#");
    }

    //printing space between triangle
    printf(" ");
    
    
    //printing the third traingle
    for(j=1;j<=i;j++){    
        printf("#");
    }
    
		//prints new line
    printf("\n");
}

	return 0;
}
