# BSTree
# Описание  проекта

Программа для работы с двоичным деревом поиска со следующим TUI:

Выберите одну из операций:
1. Вывести дерево на экран
2. Вывести список узлов дерева 
   a. Прямой обход
   b. Поперечный обход
   c. Обратный обход
3. Добавить узел в дерево
4. Удалить узел из дерева
5. Сохранить дерево в файл
6. Загрузить дерево из файла
7. Проверить наличие узла
8. Завершить работу программы

# Инструкция по сборке и запуск программы

1. git clone https://github.com/BulatovArthur/BSTree
***
`Cloning into 'BSTree'...
remote: Counting objects: 96, done.
remote: Compressing objects: 100% (75/75), done.
remote: Total 96 (delta 40), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (96/96), done.
Checking connectivity... done.`
2. cd BSTree
3. g++ sources/bstree.cpp examples/example3.cpp -Iinclude -std=c++11 -o bstree 
4. ./bstree 6 8 7 9 4 1
Operation:
1. The tree
2. Nodes of a tree
3. Add the node
4. Delete the node
5. Save the tree
6. Load the tree
7. Check the node
8. Finish



