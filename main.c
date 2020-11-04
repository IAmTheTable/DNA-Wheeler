#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define cout printf
int main(void) {

  char input[1024];
  char Convert[1024];
  char mRNA;
cout("\n\nInput the genetic code. make sure it is seperated by a star.\n Ex(AGC*TAG*TCT*TGC)\n\n");
scanf("%s", input);
for(int i = 0; i < strlen(input); i+=4){
  switch(input[i]){
    case 'A':
      switch(input[i + 1]){
        case 'U':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA, "ISO-");
            break;
            case 'C':
              strcat(&mRNA, "ISO-");
            break;
            case 'U':
              strcat(&mRNA, "ISO-");
            break;
            case 'G':
              strcat(&mRNA, "(START/MET-");
            break;
          }
        break;
        case 'C':
          switch(input[i + 2]){
            case 'G':
              strcat(&mRNA, "THR-");
            break;
            case 'A':
              strcat(&mRNA, "THR-");
            break;
            case 'C':
              strcat(&mRNA, "THR-");
            break;
            case 'U':
              strcat(&mRNA, "THR-");
            break;
          }
        break;
        case 'A':
          switch(input[i + 2]){
            case 'C':
              strcat(&mRNA, "ASP-");
            break;
            case 'U':
              strcat(&mRNA, "ASP-");
            break;
            case 'G':
              strcat(&mRNA, "LYS");
              break;
            case 'A':
              strcat(&mRNA, "LYS");
              break;
          }
        break;
        case 'G':
          switch(input[i + 2]){
            case 'G':
              strcat(&mRNA, "ARG-");
            break;
            case 'A':
              strcat(&mRNA, "ARG-"); 
            break;
            case 'C':
              strcat(&mRNA, "SER-");
            break;
            case 'U':
              strcat(&mRNA, "SER-");
            break;
          }
        break;
      }
    break;
    case 'U':
      switch(input[i + 1]){
        case 'A':
          switch(input[i + 2]){
           case 'A':
            strcat(&mRNA,"STOP)");
            break;
           case 'U':
              strcat(&mRNA,"TYRO-");
            break;
           case 'C':
              strcat(&mRNA,"TYRO-");
            break;
            case 'G':
              strcat(&mRNA,"STOP)");
            break;
          }
        break;
        case 'U':
          switch(input[i + 2]){
          case 'A':
              strcat(&mRNA,"LEU-");
          break;
          case 'U':
              strcat(&mRNA,"PHA-");
          break;
          case 'C':
              strcat(&mRNA,"TYRO-");
          break;
          case 'G':
              strcat(&mRNA,"LEU-");
          break;
          }
        break;
        case 'C':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"SER-");
           break;
            case 'U':
              strcat(&mRNA,"SER-");
            break;
            case 'C':
              strcat(&mRNA,"SER-");
            break;
            case 'G':
              strcat(&mRNA,"SER-");
            break;
          }
        break;
        case 'G':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"STOP)");
            break;
            case 'U':
              strcat(&mRNA,"CYS-");
            break;
            case 'C':
              strcat(&mRNA,"CYS-");
            break;
            case 'G':
              strcat(&mRNA,"TRY-");
            break;
          }
        break;
      }
    break;
    case 'C':
      switch(input[i + 1]){
        case 'A':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"GLU-");
            break;
            case 'U':
              strcat(&mRNA,"HIS-");
            break;
            case 'C':
              strcat(&mRNA,"HIS-");
            break;
            case 'G':
              strcat(&mRNA,"GLU-");
            break;
          }        
        break;
        case 'U':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"LEU-");
            break;
            case 'U':
              strcat(&mRNA,"LEU-");
            break;
            case 'C':
              strcat(&mRNA,"LEU-");
            break;
            case 'G':
              strcat(&mRNA,"LEU-");
            break;
          }
        break;
        case 'C':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"PRO-");
            break;
            case 'U':
              strcat(&mRNA,"PRO-");
            break;
            case 'C':
              strcat(&mRNA,"PRO-");
            break;
            case 'G':
              strcat(&mRNA,"PRO-");
            break;
          }
        break;
        case 'G':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"ARG-");
            break;
            case 'U':
              strcat(&mRNA,"ARG-");
            break;
            case 'C':
              strcat(&mRNA,"ARG-");
            break;
            case 'G':
              strcat(&mRNA,"ARG-");
            break;
          }
        break;
      }
    break;
    case 'G':
      switch(input[i + 1]){
        case 'A':
          switch(input[i + 2]){
            case 'A':
                strcat(&mRNA,"GLU-");
            break;
            case 'U':
                strcat(&mRNA,"ASP-");
            break;
            case 'C':
                strcat(&mRNA,"ASP-");
            break;
            case 'G':
                strcat(&mRNA,"GLU-");
            break;
          }
        break;
        case 'U':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"VAL-");
            break;
            case 'U':
              strcat(&mRNA,"VAL-");
            break;
            case 'C':
              strcat(&mRNA,"VAL-");
            break;
            case 'G':
              strcat(&mRNA,"VAL-");
            break;
          }
        break;
        case 'C':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"ALA-");
            break;
            case 'U':
              strcat(&mRNA,"ALA-");
            break;
            case 'C':
              strcat(&mRNA,"ALA-");
            break;
            case 'G':
              strcat(&mRNA,"ALA-");
            break;
          }
        break;
        case 'G':
          switch(input[i + 2]){
            case 'A':
              strcat(&mRNA,"GLY-");
            break;
            case 'U':
              strcat(&mRNA,"GLY-");
            break;
            case 'C':
              strcat(&mRNA,"GLY-");
            break;
            case 'G':
              strcat(&mRNA,"GLY-");
            break;
          }
        break;
      }
    break;
    case '*':
      strcat(&mRNA, "");
    break;
    default:
    cout("not a valid input\n");
    continue;
  }
}
cout("DNA Protein Sequence: %s\n", &mRNA);
cout("Thanks for using this, ya boi made it.\n");
  return 0;
}