#include<stdio.h>

#include<conio.h>

#include<math.h>

int main ()

{

int prkwh,num,cont_kwh,cont,id,tot_sex,M,F,sex,kwhmes,tot_pag,macv,mecv,tot_resi,tot_comer,tot_indus,msf,msf_inf,med_geral,media,tot_m,tot_f;

char tipo, sexo;

tot_pag = 0; macv = 0; mecv = 0; tot_resi 0; tot_comer = 0 ; tot_indus= 0;

msf_inf= 0; med_geral = 0 ; tot_m = 0; tot_f = 0; tot_sex = 0;

printf("qual o numero ?");

scanf("%d",&num);

printf("Qual preco do kwh consumido");

scanf("%d",&prkwh);

printf("qual sua idade?");

scanf("%d",&id);

printf("qual a quantidade de kwh consumidos no mes");

scanf("%d",&kwhmes);

printf("sexo masculino ou feminino ? <M/F> ");

fflush(stdin);

scanf("%c",sexo);

printf("Qual o tipo ?");

printf("R - residencial");

printf("C - comercial");

printf("I - industrial");

scanf("%c",&tipo);

while (num>0)

{

switch (tipo)

{

case 'r':tot_resi = tot_resi + kwhmes;break;

case 'c':tot_comer = tot_comer + kwmes;break;

case 'i':tot_indus = tot_indus + kwhmes;break;

}

if (kwhmes>macv)

macv = kwhmes;

else

if (kwhmes<mecv)

mecv = kwhmes;

tot_pag = (kwhmes * prkwh);

switch (sexo)

{

case 'M': tot_m = tot_m+1;

if (id<35)

msf_inf = msf_inf + 1;

break;

case 'F':tot_f = tot_f+1;

break;

}

tot_sex = tot_f + tot_m;

cont_kwh = (kwhmes+kwhmes);

cont = cont+1;

media = cont_kwh/cont;

printf (" O total a pagar é: %d ",tot_pag);

}

printf (" O maior consumo verificado foi :%d",macv);

printf (" O menor consumo verificado foi :%d",mecv);

printf (" O total para o tipo residencial foi :%d",tot_resi);

printf (" O total para o tipo comercial foi :%d",tot_comer);

printf (" O total para o tipo industrial foi :%d",tot_indus);

printf (" A media de consumo dos consumo de ambos sexos foram:%d",tot_sex);

printf (" A media de consumo dos consumidores de seco masculino com idade inferior a 35 foi :%d",msf_inf);

getch();

}
