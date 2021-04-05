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
#define     AE    "ᚩ"
#define     Y     "ᚣ"
#define     IA    "ᛡ"
#define     IO    "ᛡ"
#define     EA    "ᛠ" 

char pattern[50];
int main(){
    do{
puts("       :------------------------------------------------------------------------------------------------------------------------------------------:");
puts("Letter : F : V(U) : TH : O : R : C(k) : G : W : H : N : I : J : EO : P : X : S(Z) : T : B : E : L : NG : ING : OE : D : A : AE : Y : IA : IO : EA :");
    printf("Input Letter : ");
    scanf("%s",pattern);
    if (strcmp(pattern,"F")==0||strcmp(pattern,"f")==0) {
        printf("\t\t%s\t\t\n",F);
    }else if (strcmp(pattern,"V")==0||strcmp(pattern,"v")==0) {
        printf("\t\t%s\t\t\n",V);
    }else if (strcmp(pattern,"U")==0||strcmp(pattern,"u")==0) {
        printf("\t\t%s\t\t\n",U);
    }else if (strcmp(pattern,"TH")==0||strcmp(pattern,"th")==0){
        printf("\t\t%s\t\t\n",TH);
    }else if (strcmp(pattern,"O")==0||strcmp(pattern,"o")==0) {
        printf("\t\t%s\t\t\n",O);
    }else if (strcmp(pattern,"R")==0||strcmp(pattern,"r")==0) {
        printf("\t\t%s\t\t\n",R);
    }else if (strcmp(pattern,"C")==0||strcmp(pattern,"c")==0) {
        printf("\t\t%s\t\t\n",C);
    }else if (strcmp(pattern,"K")==0||strcmp(pattern,"k")==0) {
        printf("\t\t%s\t\t\n",K);
    }else if (strcmp(pattern,"G")==0||strcmp(pattern,"g")==0) {
        printf("\t\t%s\t\t\n",G);
    }else if (strcmp(pattern,"W")==0||strcmp(pattern,"w")==0) {
        printf("\t\t%s\t\t\n",W);
    }else if (strcmp(pattern,"N")==0||strcmp(pattern,"n")==0) {
        printf("\t\t%s\t\t\n",N);
    }else if (strcmp(pattern,"I")==0||strcmp(pattern,"i")==0) {
        printf("\t\t%s\t\t\n",I);
    }else if (strcmp(pattern,"J")==0||strcmp(pattern,"j")==0) {
        printf("\t\t%s\t\t\n",J);
    }else if (strcmp(pattern,"EO")==0||strcmp(pattern,"eo")==0) {
        printf("\t\t%s\t\t\n",EO);
    }else if (strcmp(pattern,"P")==0||strcmp(pattern,"p")==0) {
        printf("\t\t%s\t\t\n",P);
    }else if (strcmp(pattern,"X")==0||strcmp(pattern,"x")==0) {
        printf("\t\t%s\t\t\n",X);
    }else if (strcmp(pattern,"S")==0||strcmp(pattern,"s")==0) {
        printf("\t\t%s\t\t\n",S);
    }else if (strcmp(pattern,"Z")==0||strcmp(pattern,"z")==0) {
        printf("\t\t%s\t\t\n",Z);
    }else if (strcmp(pattern,"T")==0||strcmp(pattern,"t")==0) {
        printf("\t\t%s\t\t\n",T);
    }else if (strcmp(pattern,"B")==0||strcmp(pattern,"b")==0) {
        printf("\t\t%s\t\t\n",B);
    }else if (strcmp(pattern,"E")==0||strcmp(pattern,"e")==0) {
        printf("\t\t%s\t\t\n",E);
    }else if (strcmp(pattern,"L")==0||strcmp(pattern,"l")==0) {
        printf("\t\t%s\t\t\n",L);
    }else if (strcmp(pattern,"NG")==0||strcmp(pattern,"ng")==0) {
        printf("\t\t%s\t\t\n",NG);
    }else if (strcmp(pattern,"ING")==0||strcmp(pattern,"ing")==0) {
        printf("\t\t%s\t\t\n",ING);
    }else if (strcmp(pattern,"OE")==0||strcmp(pattern,"oe")==0) {
        printf("\t\t%s\t\t\n",OE);
    }else if (strcmp(pattern,"D")==0||strcmp(pattern,"d")==0) {
        printf("\t\t%s\t\t\n",D);
    }else if (strcmp(pattern,"A")==0||strcmp(pattern,"a")==0) {
        printf("\t\t%s\t\t\n",A);
    }else if (strcmp(pattern,"AE")==0||strcmp(pattern,"ae")==0) {
        printf("\t\t%s\t\t\n",AE);
    }else if (strcmp(pattern,"Y")==0||strcmp(pattern,"y")==0) {
        printf("\t\t%s\t\t\n",Y);
    }else if (strcmp(pattern,"IA")==0||strcmp(pattern,"ia")==0) {
        printf("\t\t%s\t\t\n",IA);
    }else if (strcmp(pattern,"IO")==0||strcmp(pattern,"io")==0) {
        printf("\t\t%s\t\t\n",IO);
    }else if (strcmp(pattern,"EA")==0||strcmp(pattern,"ea")==0) {
        printf("\t\t%s\t\t\n",EA);
    }
}while(pattern!=0);
}



//ᚠ (Fehu) ᚢ(Uruz) ᚦ(Thunriaz ) ᚩ(Ansuzz) ᚱ(Raido) <(Kaunan) X(Gebo) ᚹ(Wunjo) ᚻ(Hagalaz) 
//ᚾ (Nauthiz) ᛁ(Isa) ᛇ(Elhwaz) ᛈ(Pertho) ᛉ(Algiz) ᛋ(Sowlio) ᛏ(Tiwas) ᛒ(Berkanan) ᛖ(Ehwaz) 
//ᛚ (Laukaz) ᛝ(Ingwaz) ᛞ(Dagaz) ᛟ(Othalan)
//ᛒᚢᚿᛆ ᛌᚢᚿᛐ ᛒᛆᛦᚢ ᛚᚮᚴᚼᚢ ᚿᚵᛁᚴᚥᛂᚿᛎᛂᛚᛆ ᚢᚴᚢᛎᛁᛐᚼᚮᚴᚮᛎᛁᛌᛆ ᚢᛘᛆ ᛆᚴᚢᚴᚼᚮ ᛌᛆᛒᛂᛚᚮ
//Page15 ":ᚠᚢᛚᛗ•ᚪᛠᚣᛟᚪ:ᛚᚢᛝᚾ•ᚳᚢ•ᛒᚾᛏᚠᛝ:ᛁᚢᛁᚢ•ᛟᚫᛂᚠᚫ•ᚢᚷᛉᛇᛈᛉ•ᚣᛠᛚᚪᛉ•ᛟᛉᛡᚦᚻᛠ•ᚾᚪᚳ•ᚢᚷᚾ•ᛈᛖᚾᚦᚩᚢᛁᛡᚱ•ᛏᛁᛒᛇᚳᚠᚷ•ᚩᚦᚪ•ᛁᛈᚻᛡᛒ•ᚹᛈᚻᚱᛞᛉᛏᚢ•ᚣᛒ•ᚠᛋᛉᚢ•ᛗᛁ•ᛡᚱ•ᛝᚢᚠᚦᛝ•ᛈᛟᛒ•ᚻᚷᚻᛡᛚ•ᚩᛞᚪᚳ•ᚦᛈᛞᛋᛡᚻᛇᛚ•ᚢᛏᛋᛞ•ᚦᚢᛞᛝ•ᛚᛉᛝ•ᛏᚩᛚ•ᚪᛚ•ᚣ•ᛟᛡᛉᚣ•ᛒᚻᚫᛂᛡᛁ•ᚱᚦᛚᚠ•ᛠᚾᛝ•ᛉᛗᛒᚩᛠᛈ•"
