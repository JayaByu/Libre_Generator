#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//     Letter     Rune  
#define     F     "ᚠ"    
#define     V     "ᚢ"
#define     U     "ᚢ"
#define     TH    "ᚦ"
#define     O     "ᚩ"
#define     R     "ᚱ"
#define     C     "ᚳ"
#define     K     "ᚳ"
#define     G     "ᚷ"
#define     W     "ᚹ" 
#define     H     "ᚻ"
#define     N     "ᚾ"
#define     I     "ᛁ"
#define     J     "ᛄ"
#define     EO    "ᛇ"
#define     P     "ᛈ" 
#define     X     "ᛉ" 
#define     S     "ᛋ"
#define     Z     "ᛋ"
#define     T     "ᛏ"
#define     B     "ᛒ"
#define     E     "ᛖ"
#define     L     "ᛚ"
#define     NG    "ᛝ"
#define     ING   "ᛝ"
#define     OE    "ᛟ" 
#define     D     "ᛞ"
#define     A     "ᚪ"
#define     AE    "ᚫ"
#define     Y     "ᚣ"
#define     IA    "ᛡ"
#define     IO    "ᛡ"
#define     EA    "ᛠ" 

char pattern;
int main(){
    do{
puts("       :------------------------------------------------------------------------------------------------------------------------------------------:");
puts("Letter : F : V(U) : TH : O : R : C(k) : G : W : H : N : I : J : EO : P : X : S(Z) : T : B : E : L : NG : ING : OE : D : A : AE : Y : IA : IO : EA :");
    printf("Input Letter : ");
    scanf("%s",pattern);
    if (strcmp(pattern,"F")==0||strcmp(pattern,"f")==0) {
        printf("\t\t%s\t\t\n",F);
    }else if (strcmp(pattern,"V")==0) {
        printf("\t\t%s\t\t\n",V);
    }else if (strcmp(pattern,"U")) {
        printf("\t\t%s\t\t\n",U);
    }else if (strcmp(pattern,"TH")) {
        printf("\t\t%s\t\t\n",TH);
    }else if (strcmp(pattern,"O")) {
        printf("\t\t%s\t\t\n",O);
    }else if (strcmp(pattern,"R")) {
        printf("\t\t%s\t\t\n",R);
    }else if (strcmp(pattern,"C")) {
        printf("\t\t%s\t\t\n",C);
    }else if (strcmp(pattern,"K")) {
        printf("\t\t%s\t\t\n",K);
    }else if (strcmp(pattern,"G")) {
        printf("\t\t%s\t\t\n",G);
    }else if (strcmp(pattern,"W")) {
        printf("\t\t%s\t\t\n",W);
    }else if (strcmp(pattern,"N")) {
        printf("\t\t%s\t\t\n",N);
    }else if (strcmp(pattern,"I")) {
        printf("\t\t%s\t\t\n",I);
    }else if (strcmp(pattern,"J")) {
        printf("\t\t%s\t\t\n",J);
    }else if (strcmp(pattern,"EO")) {
        printf("\t\t%s\t\t\n",EO);
    }else if (strcmp(pattern,"P")) {
        printf("\t\t%s\t\t\n",P);
    }else if (strcmp(pattern,"X")) {
        printf("\t\t%s\t\t\n",X);
    }else if (strcmp(pattern,"S")) {
        printf("\t\t%s\t\t\n",S);
    }else if (strcmp(pattern,"Z")) {
        printf("\t\t%s\t\t\n",Z);
    }else if (strcmp(pattern,"T")) {
        printf("\t\t%s\t\t\n",T);
    }else if (strcmp(pattern,"B")) {
        printf("\t\t%s\t\t\n",B);
    }else if (strcmp(pattern,"E")) {
        printf("\t\t%s\t\t\n",E);
    }else if (strcmp(pattern,"L")) {
        printf("\t\t%s\t\t\n",L);
    }else if (strcmp(pattern,"NG")) {
        printf("\t\t%s\t\t\n",NG);
    }else if (strcmp(pattern,"ING")) {
        printf("\t\t%s\t\t\n",ING);
    }else if (strcmp(pattern,"OE")) {
        printf("\t\t%s\t\t\n",OE);
    }else if (strcmp(pattern,"D")) {
        printf("\t\t%s\t\t\n",D);
    }else if (strcmp(pattern,"A")) {
        printf("\t\t%s\t\t\n",A);
    }else if (strcmp(pattern,"AE")) {
        printf("\t\t%s\t\t\n",AE);
    }else if (strcmp(pattern,"Y")) {
        printf("\t\t%s\t\t\n",Y);
    }else if (strcmp(pattern,"IA")) {
        printf("\t\t%s\t\t\n",IA);
    }else if (strcmp(pattern,"IO")) {
        printf("\t\t%s\t\t\n",IO);
    }else if (strcmp(pattern,"EA")) {
        printf("\t\t%s\t\t\n",EA);
    }
}while(pattern!=0);
}




//ᛒᚢᚿᛆ ᛌᚢᚿᛐ ᛒᛆᛦᚢ ᛚᚮᚴᚼᚢ ᚿᚵᛁᚴᚥᛂᚿᛎᛂᛚᛆ ᚢᚴᚢᛎᛁᛐᚼᚮᚴᚮᛎᛁᛌᛆ ᚢᛘᛆ ᛆᚴᚢᚴᚼᚮ ᛌᛆᛒᛂᛚᚮ
//Page15 ":ᚠᚢᛚᛗ•ᚪᛠᚣᛟᚪ:ᛚᚢᛝᚾ•ᚳᚢ•ᛒᚾᛏᚠᛝ:ᛁᚢᛁᚢ•ᛟᚫᛂᚠᚫ•ᚢᚷᛉᛇᛈᛉ•ᚣᛠᛚᚪᛉ•ᛟᛉᛡᚦᚻᛠ•ᚾᚪᚳ•ᚢᚷᚾ•ᛈᛖᚾᚦᚩᚢᛁᛡᚱ•ᛏᛁᛒᛇᚳᚠᚷ•ᚩᚦᚪ•ᛁᛈᚻᛡᛒ•ᚹᛈᚻᚱᛞᛉᛏᚢ•ᚣᛒ•ᚠᛋᛉᚢ•ᛗᛁ•ᛡᚱ•ᛝᚢᚠᚦᛝ•ᛈᛟᛒ•ᚻᚷᚻᛡᛚ•ᚩᛞᚪᚳ•ᚦᛈᛞᛋᛡᚻᛇᛚ•ᚢᛏᛋᛞ•ᚦᚢᛞᛝ•ᛚᛉᛝ•ᛏᚩᛚ•ᚪᛚ•ᚣ•ᛟᛡᛉᚣ•ᛒᚻᚫᛂᛡᛁ•ᚱᚦᛚᚠ•ᛠᚾᛝ•ᛉᛗᛒᚩᛠᛈ•"
