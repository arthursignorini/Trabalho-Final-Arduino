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

Esquema de Circuito:

<img src="Lixeira Auto.png" alt="Esquema do Circuito" />

# Desenvolvimento do Software

Algoritmo:

O algoritmo principal detecta a presença de um objeto a uma distância inferior a 50 cm utilizando o sensor ultrassônico. Quando um objeto é detectado, o servo motor gira para abrir a tampa. Após um atraso de 3 segundos, o servo motor retorna à posição inicial para fechar a tampa.

Código:

<a href="Codigo.cpp">Pasta do código do arduino</a>


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

