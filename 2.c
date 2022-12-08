#include<string.h>
#include<stdio.h>

main(){
      
    char a[100];
    int i;// n;
    int z;
    
    
    printf("Enter a string:");
    scanf("%s", a);  //ravi
    
    z = strrev(a);

    
//    printf("%s",z);
    
    i = strcmp(z,a);
    
    if(i == 0){
    	
    	printf("%s is palindrome", a);
    	
	}
	
	else{
		
		printf("%s is not a palindrome", a);
		
	}

 
}
