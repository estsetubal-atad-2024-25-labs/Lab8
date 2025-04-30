# Algoritmos e Tipos Abstratos de Dados

## Lab 8 - Utilização do ADT List

Este repositório foi criado a partir de:

- <https://github.com/estsetubal-atad/CProgram_Template> 

Consulte o README se tiver dúvidas sobre a sua utilização.

----

**Objetivos**:

- Utilização do ADT List, conhecida a sua especificação:

    - Uso geral: manipulação, pesquisa, seleção e ordenação.

**Referências**:

- Capítulo 6 do livro “Tipos Abstratos de Dados – Linguagem C. Bruno Silva”, disponível no Moodle;

- Slides das TP.

---

:keyboard: Faça *clone* deste repositório para elaborar os exercícios.

:exclamation: Existe um *bash script* incluído, i.e., `mem_check.sh` que permite lançar o *valgrind* de forma correta. Quando necessário, execute no terminal `$> bash mem_check.sh`.

### 1 | Inclusão do ADT List

1. É necessário incluir os ficheiros relativos ao ADT List no projeto atual. Vá até a <https://github.com/brunomnsilva/AbstractDataTypesInC/tree/master/ADTList> e copie para a pasta do projeto atual os seguintes ficheiros:

	- `list.h`
	- `listElem.h`
	- `listElem.c`
	- `listArrayList.c`

2. No `makefile` do projeto atual, adicione os ficheiros `listElem.c` e `listArrayList.c`.

3. Na função `main`, inclua o *header* `list.h` e compile (apenas) o programa para verificar que o ADT foi corretamente adicionado.


### 2 | Instanciação/destruição de uma lista

:bulb: Atente na especificação do ADT List em `list.h` e a documentação de cada função para verificar as operações suportadas pelo ADT e seu uso. Para este programa pode ignorar o conteúdo de todos os ficheiros.

4. Na função `main`, implemente os `// TODO 1: Instanciar uma lista` e `// TODO 2: destruir a lista`. 

5. Compile (`make`) com a diretiva `debug` e execute o programa através do *valgrind*, verificando que não existem *memory leaks* à saída do programa. 

	- :bulb: Insira logo `0` para não continuar a leitura de números; neste momento não são ainda tratados.

### 3 | Uso básico da lista

6. Implemente os restantes códigos em falta:

	- `TODO 3`: adicionar um número inserido pelo utilizador na lista;
	- `TODO 4`: obter o tamanho da lista (total de números introduzidos pelo utilizador);
	- `TODO 5`: apresentar o conteúdo da lista;
		- 1ª versão: utilizando a operação `listPrint`;
		- 2ª versão: percorrendo através de um ciclo `for` todas as posições da lista e usar `listGet` para obter cada número e apresentá-lo.

7. Compile e teste o programa, verificando que o tamanho e elementos apresentados (com cada versão) são os introduzidos.

### 4 | Implementação de pesquisa

8. Adicione ao `main.c` a função (de pesquisa) seguinte, implemente-a e teste-a:

	```cpp
	/**
	 * @brief Procura um número numa lista.
	*
	* Percorre a lista fornecida à procura do número especificado.  
	* Retorna o índice da primeira ocorrência do número, se encontrado.  
	* Caso contrário, retorna -1.
	*
	* @param l A lista onde será feita a procura.
	* @param num O número a procurar na lista.
	* @return O índice do número na lista, ou -1 se não for encontrado ou se a lista for NULL.
	*/
	int searchList(PtList l, int num);
	```

	- :bulb: Relembre o algoritmo de pesquisa lecionado nas TP. 
	
	- :keyboard: Quando testar, deverá solicitar um número a pesquisar ao utilizador e depois apresentar uma mensagem indicando se o número for encontrado, ou não.

### 5 | Implementação de ordenação

9. Adicione ao `main.c` a função (de ordenação) seguinte e implemente-a:

	```cpp
	/**
	 * @brief Ordena os elementos da lista por ordem crescente.
	 *
	 * Ordena a lista fornecida utilizando o algoritmo de ordenação 
	 * Selection Sort. A ordenação é feita in-place, modificando a lista original.
	 *
	 * Se a lista for NULL, não faz nada.
	 *
	 * @param l A lista a ser ordenada.
	 */
	void sortList(PtList l);
	```

10. No `main`, antes de apresentar o conteúdo da lista, ordene-a utilizando a função anterior.

### 6 | Filtragem de elementos

11. Adicione ao `main.c` a função seguinte e implemente-a:

	```cpp
	/**
	 * @brief Cria uma nova lista com os números ímpares da lista original.
	 *
	 * Percorre a lista fornecida e extrai todos os elementos ímpares,
	 * devolvendo uma nova lista com esses elementos. A lista original 
	 * não é modificada.
	 *
	 * @param l A lista de onde serão extraídos os números ímpares.
	 * @return Uma nova lista contendo apenas os números ímpares da lista original,
	 *         ou NULL em caso de erro.
	 */
	PtList oddNumbersOf(PtList l);
	```

12. Teste a função anterior, apresentando os números ímpares filtrados. :warning: Verifique a correta gestão de memória com o *valgrind*.

---

<bruno.silva@estsetubal.ips.pt>

