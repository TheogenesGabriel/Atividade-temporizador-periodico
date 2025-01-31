#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define red 11
#define green 12
#define blue 13

volatile uint prox = 1;

void init_leds(){
    gpio_init(red);
    gpio_init(green);
    gpio_init(blue);

    gpio_set_dir(red, GPIO_OUT);
    gpio_set_dir(green, GPIO_OUT);
    gpio_set_dir(blue, GPIO_OUT);
}

void pisca_led(int a , int b , int c){
    gpio_put(red, a);
    gpio_put(green, b);
    gpio_put(blue, c);
}

// Função de callback para alternar os LEDs
bool repeating_timer_callback(struct repeating_timer *t) {
    switch (prox) {
        case 1:
            pisca_led(1, 0, 0);
            prox++;
            break;
        case 2:
            pisca_led(0, 1, 0);
            prox++;
            break;
        case 3:
            pisca_led(0, 0, 1);
            prox = 1;
            break;
    }
    return true; // Retorna true para continuar o temporizador
}


int main(){   
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    stdio_init_all();
    init_leds();

    pisca_led(1, 0, 0);
    prox++;

    while(true){
        sleep_ms(1000);
        printf("Mudança no semaforo a cada 3s\n");
    }
}
