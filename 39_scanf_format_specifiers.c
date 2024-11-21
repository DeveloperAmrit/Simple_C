#include <stdio.h>
#include <stdlib.h>

// everything here means literal everything (i.e including whitespace and \n)
// autoassume accepts exclude rejects set

int main(){
    
    char str[200];

    // taking input upto a certain chatacter
    printf("\nInput 1\n");
    scanf("%[^\n]",str);                        // accepts = {everything}, rejects = {\n} 
    while (getchar() != '\n');                  // needs this
    printf("|%s|",str);

    printf("\nInput 2\n");
    scanf("%[^$]",str);                       // accepts = {everything}, rejects = {$}
    while (getchar() != '\n'); 
    printf("|%s|",str);

    // taking input in a ASCII range
    printf("\nInput 3\n");
    scanf("%[a-z]",str);                         // accepts = {a-z}, rejects = {everything except a-z} 
    while (getchar() != '\n');                   // only lowercase alphabets means cannot take space, \n etc.
    printf("|%s|",str);

    printf("\nInput 4\n");
    scanf("%[^a-z]",str);                        // accepts = {everything} rejects = {a-z} 
    while (getchar() != '\n');                    // reads except lowercase alphabets
    printf("|%s|",str);


    // you can choose what to take input
    printf("\nInput 5\n");
    scanf("%[a-z \n]",str);                       // accepts =  {a-z, single spaces,newline} rejects = { everything except accepts}
    while( getchar() != '\n');                    // NOTE THAT DOUBLE SPACE IS ALSO TWO SINGLE SPACES SO IT IS ALSO ALLOWED => ALL SPACES ALLOWED
    printf("|%s|",str);

    // what to and what not
    printf("\nInput 6\n");
    scanf("%[a-zA-Z \n^$#]",str);                 //EXPECTATIONS : read only {a-z,A-Z,space,newline} stop when encounteres any of {$,#}
    while( getchar() != '\n');  
    printf("|%s|",str);
    
       // REALITY : considers that it can take only {a-z,A-Z,^,$,#}

       // ITS DUMB that you are saying to accept only 1 to 10, and reject only 90,98. What about 40?
       // DUMB logic so define only what you are taking or what you are not taking
    
    

    return 0;
}