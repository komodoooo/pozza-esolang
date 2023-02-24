#include <stdio.h>
#include <stdlib.h>
#define S 9999999
char code[S]={0};
int cds=0;
void pozza(const char *data, int l){
for(int i=0; i!=l; i++){
switch(data[i]){case '|':{
i++;while(data[i]!='|') i++;
break;}case'\\':{i++;
while(data[i]!='/'){if(data[i]!='&')
putchar(data[i]);else putchar('\n');
i++;}break;}case'@':{int cl=0, slv=0;
char lc[S/10]={0};i++;if(data[i]!='='){
while(data[i]!='^'){slv++;i++;}}else slv=-1;
while(data[i]!='@'){lc[cl]=data[i];cl++;i++;}
for(int k=0; k!=slv; k++){pozza(lc, cl);}break;
}case'.':{i++;char ti[S/1000]={0};int mv=0;
while(data[i]!='.'){ti[mv]+=data[i];mv++;i++;}
sscanf(ti, "%d", &mv);malloc(mv);break;}case '#':{
i++;char vn[S/1000]={0};int vv=0;while(data[i]!='!'){vn[vv]+=data[i];
vv++;i++;}sscanf(vn, "%d", &cds);break;}default:{if(data[i]=='?')
printf("%d", cds);else if(data[i]=='*')cds++;else if(data[i]=='_')   
cds--;break;}}}}int main(int argc, const char *argv[]){FILE*name=fopen(argv[1], "r");
int o=0, sl=1;char file;while(file!=EOF){file=getc(name);code[o]=file;if(file=='\n')sl++;
o++;}fclose(name);pozza(code, o);printf("\n\nExecution terminated, file: %s, %d lines.\n", argv[1], sl);}
