
# Bueiro Inteligente Autônomo

Este projeto foi desenvolvido como parte da disciplina de Edge Computing & IoT (FIAP - Global Solution 2025.1).

## Objetivo
Detectar o risco de enchentes causado por entupimento de bueiros, usando um sensor ultrassônico e um LED de alerta.

## Componentes
- Arduino UNO
- Sensor HC-SR04 (ultrassônico)
- LED
- Resistor
- Protoboard e jumpers

## Como funciona
- O sensor mede a altura da água.
- Se estiver abaixo de 10 cm, o LED acende.
- Toda a lógica ocorre localmente no Arduino (Edge Computing).

## Simulação
- Circuito montado no Wokwi.
- Código em Arduino C++.
- LED acende simulando enchente.
![image](https://github.com/user-attachments/assets/ca965f17-513b-4568-ae9d-aa1415046539)
