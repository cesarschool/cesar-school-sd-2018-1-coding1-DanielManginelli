#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    int majorChar = 0;
    int minorChar = 0;
    
    int isFound = 0;
    
    while (majorChar < length){
        
        while (minorChar < length){
            
            if (minorChar == majorChar){
                
                minorChar++;
                
            } else {
                
                if (sentence[minorChar] == sentence[majorChar]){
                    
                    minorChar = length;
                    isFound = 1;
                    
                } else {
                    
                    minorChar++;
                    
                }
                
            }
            
        }
        
        minorChar = 0;
        
        if (isFound == 1){
            
            majorChar++;
            isFound = 0;
            
        } else {
            
            printf("%c", sentence[majorChar]);
            printf("\nfirstNonRepeatingChar::END\n");
            return sentence[majorChar];
            
        } 
        
    }
    
    printf("-1");
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
