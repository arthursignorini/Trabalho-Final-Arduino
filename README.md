# Documentação Lixeira Automática

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


