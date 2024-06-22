# Trabalho Final-Arduino

# Introdução

Objetivo do Projeto:

O objetivo deste projeto é desenvolver uma lixeira automática que abre a tampa quando detecta a proximidade de um objeto ou pessoa. Este sistema visa promover a higiene e conveniência no descarte de lixo.

Justificativa:

A lixeira automática visa reduzir a necessidade de contato físico com a tampa, diminuindo a propagação de germes e melhorando a higiene em ambientes domésticos e públicos.

# Planejamento

Definição dos Requisitos:

Funcionais: Detectar a proximidade de um objeto, abrir a tampa automaticamente, fechar a tampa após um determinado tempo.

Não funcionais: Operação silenciosa, baixo consumo de energia, robustez do sistema.

# Ferramentas e Materiais:

Componentes: Arduino Uno, sensor de proximidade (ultrassônico), servo motor, resistores, fios de conexão, breadboard.

# Montagem do Hardware
3.1. Esquema de Circuito
Inclua um diagrama esquemático do circuito. Você pode usar softwares como Fritzing para criar o diagrama.

arduino
Copiar código
[Imagem ou descrição detalhada do circuito]
3.2. Montagem Passo a Passo
Descreva o processo de montagem:

Conecte o sensor de proximidade ao Arduino:
VCC ao 5V
GND ao GND
Trig ao pino digital 9
Echo ao pino digital 10
Conecte o servo motor ao Arduino:
Sinal ao pino digital 11
VCC ao 5V
GND ao GND
Certifique-se de que todas as conexões estão firmes e corretas.
4. Desenvolvimento do Software
4.1. Algoritmo
Explique a lógica do algoritmo:
"O algoritmo principal detecta a presença de um objeto a uma distância inferior a 30 cm utilizando o sensor ultrassônico. Quando um objeto é detectado, o servo motor gira para abrir a tampa. Após um atraso de 5 segundos, o servo motor retorna à posição inicial para fechar a tampa."

4.2. Código
Inclua o código comentado:

cpp
Copiar código
#include <Servo.h>

Servo myservo;  // cria o objeto servo para controlar o motor
int trigPin = 9;    // define o pino Trig do sensor
int echoPin = 10;   // define o pino Echo do sensor
int servoPin = 11;  // define o pino do servo motor
long duration;      // variável para o tempo de viagem do som
int distance;       // variável para a distância calculada

void setup() {
  myservo.attach(servoPin);  // conecta o servo ao pino 11
  pinMode(trigPin, OUTPUT);  // define o trigPin como saída
  pinMode(echoPin, INPUT);   // define o echoPin como entrada
  Serial.begin(9600);        // inicia a comunicação serial
}

void loop() {
  digitalWrite(trigPin, LOW);  // limpa o trigPin
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // define o trigPin como HIGH por 10 microssegundos
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);  // lê o tempo de viagem do pulso em microsegundos
  distance = duration * 0.034 / 2;    // calcula a distância em centímetros
  
  if (distance < 30) {  // se a distância for menor que 30 cm
    myservo.write(90);  // abre a tampa (90 graus)
    delay(5000);        // espera 5 segundos
    myservo.write(0);   // fecha a tampa (0 graus)
  }
  
  delay(200);  // pequena pausa para estabilização
}
5. Resultados
5.1. Testes Realizados
Descreva os testes que foram realizados para garantir o funcionamento correto do sistema:

Teste de detecção de proximidade.
Teste de abertura e fechamento da tampa.
5.2. Resultados Obtidos
Apresente os resultados:
"Durante os testes, a lixeira abriu corretamente a tampa quando um objeto foi detectado a uma distância inferior a 30 cm e fechou a tampa após 5 segundos. O sistema funcionou de maneira consistente e conforme o esperado."

6. Conclusão
6.1. Avaliação do Projeto
Faça uma avaliação crítica do projeto:
"O projeto foi bem-sucedido em criar uma lixeira automática funcional. O sistema atendeu aos requisitos iniciais de operação sem contato e eficiência no consumo de energia."

6.2. Possíveis Melhorias
Sugira melhorias para projetos futuros:

Implementação de um sensor infravermelho para melhorar a detecção.
Uso de um motor DC com encoder para maior precisão no controle da tampa.
Integração com uma fonte de energia renovável para operação sustentável.
7. Referências
Liste todas as fontes e referências usadas na realização do projeto:

Documentação do Arduino: https://www.arduino.cc/
Tutoriais de sensores ultrassônicos e servo motores.
8. Anexos
Inclua qualquer material adicional relevante, como diagramas de circuito detalhados, fotos da montagem final, e outros documentos úteis.

