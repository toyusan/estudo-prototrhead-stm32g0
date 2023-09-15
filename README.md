# Projeto STM32G0 - Controle de LED com Protothreads

Este é um projeto de exemplo que demonstra o controle de LEDs em um microcontrolador STM32G0 usando protothreads. O código fonte está escrito em linguagem C e é destinado a ser usado com o microcontrolador STM32G070KBTX.

## Requisitos

- Microcontrolador STM32G0 (placa de desenvolvimento STM32G0x0-EVAL recomendada).
- Ambiente de desenvolvimento STM32CubeIDE ou STM32CubeMX.
- Ferramenta de programação para carregar o firmware no microcontrolador (por exemplo, ST-Link ou J-Link).

## Configuração

1. Clone este repositório para o seu ambiente de desenvolvimento: 
2. Abra o projeto em seu ambiente de desenvolvimento STM32CubeIDE ou STM32CubeMX.
3. Configuração do Hardware:
	- Conecte o microcontrolador STM32G0 à placa de desenvolvimento.
	- Certifique-se de que os LEDs estão devidamente conectados aos pinos configurados no código.

## Uso

1. Compile o código e faça o carregamento no microcontrolador usando sua ferramenta de programação.
2. Execute o código no microcontrolador.
3. Observe o comportamento dos LEDs conforme configurado no código-fonte do arquivo "led.c".

## Arquivo "main.c"

O arquivo "main.c" é o ponto de entrada do programa e coordena a inicialização do sistema, a configuração dos LEDs e a execução dos protothreads. Aqui estão os principais componentes do arquivo "main.c":

- Inicialização do sistema, configuração do clock e inicialização de periféricos.
- Chamada das funções de abertura (open) e fechamento (close) dos LEDs.
- Criação e execução dos protothreads para controlar os LEDs.

Você pode personalizar o arquivo "main.c" para adicionar mais funcionalidades ou protothreads adicionais, se necessário.

## Arquivo "led.c"

O arquivo "led.c" contém a lógica de controle dos LEDs usando protothreads. Ele define como os LEDs devem piscar em diferentes padrões. Aqui está uma visão geral dos protothreads utilizados:

- `blinkLed01`: Piscar o LED 01 em um intervalo de 500 ms.
- `blinkLed02`: Piscar o LED 02 em um intervalo de 250 ms.
- `blinkLed03`: Piscar o LED 03 em um intervalo de 125 ms.
- `blinkLed07`: Piscar o LED 07 em um intervalo de 1000 ms.

Você pode ajustar esses padrões de piscar conforme necessário para o seu estudo.

## Contribuição

Sinta-se à vontade para contribuir com melhorias ou correções para este projeto. Basta abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a Licença MIT - consulte o arquivo [LICENSE](LICENSE) para obter detalhes.

## Autores

- [Airton Toyofuku](https://github.com/toyusan) - Desenvolvedor Principal


