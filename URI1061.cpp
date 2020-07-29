#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int dia, hora, minuto, segundo, d_final, h_final, m_final, s_final;
	scanf("Dia %d", &dia);
	scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
	scanf("Dia %d", &d_final);
	scanf("%d : %d : %d", &h_final, &m_final, &s_final);
	
	segundo = s_final - segundo;
	minuto = m_final - minuto;
	hora = h_final - hora;
	dia = d_final - dia;
	
	if(segundo < 0){
		segundo += 60;
		minuto--;
	}
	if(minuto < 0){
		minuto += 60;
		hora--;
	}
	if(hora < 0){
		hora += 24;
		dia--;
	}
	
	printf("%d dia(s)\n", dia);
	printf("%d hora(s)\n", hora);
	printf("%d minuto(s)\n", minuto);
	printf("%d segundo(s)\n", segundo);
	return 0;
}