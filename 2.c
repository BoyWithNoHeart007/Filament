#include<stdio.h>
#include<string.h>

main(){
      
    char a[100];
    int i, n;
    int z = 0;
    
    printf("Enter a string:");
    scanf("%s", a);
    
    n = strlen(a);
    
    for(i=0; i<n; i++){
        
		if(a[i] != a[n-i-1]){
          
		    z = 1;
            
           }
        }
    
    if (z) {
       
	    printf("%s is not a palindrome", a);
    
	}    
    else {
     
	    printf("%s is palindrome", a);
    
	}
 
}
