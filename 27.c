#include <stdio.h>
#include <math.h>
int main(void)
{
float chico,juca,anos;
chico=150;
juca=110;
anos=0;
while(juca<chico){
chico = chico + 2;
juca = juca + 3;
anos = anos + 1;
}
printf("seram necessario %0.2f anos\n",anos);
system("pause");

}
