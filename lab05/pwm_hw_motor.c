// Ajustando o PWM por HARDWARE na Raspberry Pi

#include <stdio.h>
#include <wiringPi.h>

#define pino_PWM0 18                    // o PWM sera acionado na GPIO18

int main() {                            // este programa deve ser rodado com 'sudo'
   int dc, ciclos2;
   wiringPiSetupGpio();                 // usa a numeracao da GPIO
   pinMode(pino_PWM0, PWM_OUTPUT);      // configura a GPIO18 com o PWM por hardware

   pwmSetMode(PWM_MODE_MS);             // usando frequencia fixa
   pwmSetRange(3495);                    // passos do duty cycle (max=4096)
   pwmSetClock(21);                     // fornece uma frequencia de 10kHz (max=4096)
   printf("Iniciando...\n");
	
   for ( ciclos = 0; ciclos < 4; ciclos ++) { // variando o duty cycle
        for ( dc = 0; dc < 128; dc ++) {
        pwmWrite ( pino_PWM0 , dc ) ;
        usleep (10000) ;
	printf ("%d", dc);
	}

    
         
   printf("Fim.\n");
   return 0;                            // a saida PWM permanece ligada apos o termino do programa
}
