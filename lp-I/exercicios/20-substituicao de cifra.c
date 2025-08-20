/*Escreva um algoritmo que implemente a cifra de substituição para criptografar e descriptografar uma mensagem.

A cifra de substituição é um método de criptografia onde cada letra da mensagem original é substituída por outra letra de acordo com um padrão pré-definido.

Crie duas funções, encriptar e decriptar, que recebam como parâmetro uma mensagem de texto e um número inteiro chamado "chave" que representará o deslocamento das letras.

Na função encriptar, criptografe a mensagem original substituindo cada letra por outra letra que esteja "chave" posições à frente no alfabeto. Por exemplo, se a chave for 3, a letra "a" será substituída por "d", "b" por "e", e assim por diante.

Na função decriptar, descriptografe a mensagem original fazendo o inverso do processo de criptografia. Ou seja, substitua cada letra por outra letra que esteja "chave" posições atrás no alfabeto.

Você pode considerar apenas letras maiúsculas e minúsculas para a cifra de substituição. Os caracteres que não forem letras devem ser mantidos inalterados.

No método main, solicite ao usuário uma mensagem de texto e a chave de criptografia. Em seguida, chame a função encrypt para criptografar a mensagem e a função decrypt para descriptografar a mensagem. Imprima a mensagem criptografada e a mensagem descriptografada na linha seguinte.*/