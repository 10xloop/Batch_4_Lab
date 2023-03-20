#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
     int a=0,count=0;
    while(str[a]!=0)
    {
if(str[a]==letter)
count++;
a++;
    }
    return count;
    return 0;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    char * ptr=(dna_seq->sequence);        
    // String ptr=dna_seq->sequence;
   // printf("%s",ptr);               // For Debuging 
    printf("\n\nI am in Structure to Function with Pointer\n\n");
     int a=0,count_a=0,count_g=0,count_c=0,count_t=0;
    while(ptr[a]!=0)
    {
if(ptr[a]=='A')
count_a++;
if(ptr[a]=='G')
count_g++;
if(ptr[a]=='C')
count_c++;

if(ptr[a]=='T')
count_t++;

a++;
    }

dna_seq->A_count=count_a;
dna_seq->G_count=count_g;
dna_seq->C_count=count_c;
dna_seq->T_count=count_t;
   
}
