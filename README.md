# Projeto Semáforo com Raspberry Pi Pico W

## Descrição
Este projeto implementa um sistema de controle de LEDs simulando um semáforo utilizando a placa Raspberry Pi Pico W. O código acende sequencialmente três LEDs (vermelho, verde e azul) em intervalos de 3 segundos, utilizando um temporizador repetitivo. O funcionamento é baseado na biblioteca `pico/stdlib.h` para manipulação de GPIOs e `hardware/timer.h` para controle do temporizador.

## Funcionamento
- Inicializa os pinos dos LEDs como saída.
- Alterna os LEDs a cada 3 segundos seguindo a ordem: vermelho -> verde -> azul.
- Exibe uma mensagem no console indicando a mudança de estado do semáforo.
- Utiliza um temporizador para controlar automaticamente a transição entre os estados.

## Dependências
- Raspberry Pi Pico W SDK
- Compilador compatível com C/C++ para o Raspberry Pi Pico W

## Como Compilar e Executar
1. Configure o ambiente do Raspberry Pi Pico W SDK.
2. Compile o código utilizando CMake.
3. Carregue o binário na placa Raspberry Pi Pico W.
4. Conecte-se ao console serial para visualizar as mensagens.

## Autor
Nome: Theógenes Gabriel Araújo de Andrade

## Vídeo Demonstrativo
Link: [Adicione aqui o link do vídeo demonstrativo]

