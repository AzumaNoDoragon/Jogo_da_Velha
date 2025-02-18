# Jogo da Velha em C

Este é um simples Jogo da Velha (Tic-Tac-Toe) desenvolvido em C para ser jogado no terminal por dois jogadores. O primeiro jogador usa o símbolo "X" e o segundo, "O".

## Funcionalidades
- Interface simples no terminal
- Validação de jogadas (evita posições inválidas ou já ocupadas)
- Verificação automática de vitória ou empate
- Exibição do tabuleiro atualizado a cada jogada

## Como funciona
1. O jogo inicia mostrando o tabuleiro numerado de 0 a 8, indicando as posições disponíveis.
2. Os jogadores se alternam escolhendo a posição onde querem jogar.
3. O jogo verifica se há um vencedor ou empate após cada jogada.
4. Ao final, exibe a mensagem de vitória do jogador ou de empate.

## Estrutura do Código

- **`init()`**: Inicializa o jogo e configura o tabuleiro.
- **`show()`**: Exibe o tabuleiro no terminal.
- **`play()`**: Captura a jogada do jogador e atualiza o tabuleiro.
- **`checkWin()`**: Verifica se houve um vencedor.
- **`cls()`**: Limpa a tela para uma melhor visualização do jogo.

## Execução
Para compilar e rodar o código em sistemas Windows:
```sh
gcc jogo_da_velha.c -o jogo_da_velha.exe
jogo_da_velha.exe
