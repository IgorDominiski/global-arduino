# global-arduino
# 🌧️ Projeto Arduino - Sensor de Chuva com Alerta Visual e Sonoro

## 📌 Descrição do Problema

As enchentes causadas por chuvas fortes representam um grande risco em diversas regiões do Brasil. A detecção antecipada de níveis elevados de chuva pode ajudar na prevenção de danos, no alerta à população e na automação de sistemas de controle de enchentes. Este projeto propõe uma solução simples e acessível utilizando Arduino e sensores analógicos para identificar níveis de umidade, sinalizar a intensidade da chuva e emitir alertas.

---

## 💡 Visão Geral da Solução

Este projeto utiliza:

- **Sensor de Chuva**: mede a intensidade da chuva.
- **Potenciômetro**: ajusta o nível de sensibilidade do sistema.
- **LEDs**:
  - Verde = Tempo seco
  - Amarelo = Chuva fraca
  - Vermelho = Chuva forte
- **Buzzer**: emite som quando a chuva é forte.
- **Display LCD I2C**: exibe os valores lidos e o nível atual.

A sensibilidade do sistema pode ser ajustada girando o potenciômetro. O valor lido pelo sensor é comparado com o limite definido pelo potenciômetro para determinar o nível de chuva.

---

## 🛠 Componentes Utilizados

- Arduino Uno
- Sensor de chuva analógico
- Potenciômetro
- LEDs: Verde, Amarelo, Vermelho
- Buzzer
- Display LCD 20x4 com I2C
- Resistores (220Ω)
- Jumpers

---

## 🧪 Simulação no Wokwi

### ▶️ Acesse a simulação diretamente:
[🔗 Projeto no Wokwi](https://wokwi.com/projects/432129309991925761)

### 🧭 Como simular:

1. Clique no link acima.
2. Gire o potenciômetro para alterar o nível de sensibilidade.
3. Clique no sensor de chuva e arraste o cursor para alterar a leitura de umidade.
4. Observe as mudanças nos LEDs, buzzer e display LCD.

---

## 🎥 Vídeo Demonstrativo

Assista o funcionamento completo no vídeo abaixo:

[📽️ Clique aqui para assistir](https://youtu.be/2ll4jTITJ7I)

---

## 📂 Organização do Código

- `sensor_chuva.ino`: Código principal do projeto.
- `README.md`: Instruções detalhadas.

---

## 👨‍💻 Autor

- integrantes: Igor Dominiski, Murillo Akira, Murilo Reis
- Curso: Engenharia de Software
- Universidade: **[FIAP]**

