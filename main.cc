#include "DynamicArray.h"
#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

void testDynamicArray() {
    cout << "\n=== ТЕСТ ДИНАМИЧЕСКОГО МАССИВА ===\n";
    DynamicArray arr;
    
    cout << "Добавляем элементы: 5, 10, 15\n";
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);
    cout << "Массив: ";
    arr.printData();
    
    cout << "Добавляем в начало: 1\n";
    arr.push_front(1);
    cout << "Массив: ";
    arr.printData();
    
    cout << "Максимум: " << arr.max() << endl;
    cout << "Минимум: " << arr.min() << endl;
    cout << "Сумма: " << arr() << endl;
    cout << "Первый элемент: " << arr.front() << endl;
    cout << "Последний элемент: " << arr.back() << endl;
    
    cout << "Удаляем последний элемент\n";
    arr.pop_back();
    cout << "Массив: ";
    arr.printData();
}

void testStack() {
    cout << "\n=== ТЕСТ СТЕКА ===\n";
    Stack<int> stack(5);
    
    cout << "Добавляем элементы: 1, 2, 3\n";
    stack.push(1);
    stack.push(2);
    stack.push(3);
    
    cout << "Верхний элемент: " << stack.top() << endl;
    cout << "Извлекаем: " << stack.pop() << endl;
    cout << "Новый верхний: " << stack.top() << endl;
    cout << "Размер стека: " << stack.size() << endl;
}

void testQueue() {
    cout << "\n=== ТЕСТ ОЧЕРЕДИ ===\n";
    Queue<float> queue(5);
    
    cout << "Добавляем элементы: 1.1, 2.2, 3.3\n";
    queue.enqueue(1.1f);
    queue.enqueue(2.2f);
    queue.enqueue(3.3f);
    
    cout << "Первый в очереди: " << queue.front() << endl;
    cout << "Извлекаем: " << queue.dequeue() << endl;
    cout << "Новый первый: " << queue.front() << endl;
    cout << "Размер очереди: " << queue.size() << endl;
}

int main() {
    cout << "================================\n";
    cout << "   ЛАБОРАТОРНАЯ РАБОТА ПО C++\n";
    cout << "   Динамический массив, Стек, Очередь\n";
    cout << "================================\n";
    
    testDynamicArray();
    testStack();
    testQueue();
    
    cout << "\n================================\n";
    cout << "   ПРОГРАММА ЗАВЕРШЕНА\n";
    cout << "================================\n";
    return 0;
}#include "DynamicArray.h"
#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;
int main() {
    int choice;
    do {
        cout << "\n=== ГЛАВНОЕ МЕНЮ ===\n";
        cout << "1. Работа с массивом\n";
        cout << "2. Работа со стеком\n";
        cout << "3. Работа с очередью\n";
        cout << "0. Выход\n";
        cout << "Выберите: ";
        cin >> choice;
        if (choice == 1) {
            DynamicArray arr;
            int arrChoice;
            float val;
            do {
                cout << "\n--- МАССИВ ---\n";
                cout << "Текущий массив: ";
                arr.printData();
                cout << "1. Добавить в конец\n";
                cout << "2. Добавить в начало\n";
                cout << "3. Удалить последний\n";
                cout << "4. Найти максимум\n";
                cout << "5. Найти минимум\n";
                cout << "6. Сумма элементов\n";
                cout << "0. Назад\n";
                cout << "Выберите: ";
                cin >> arrChoice;
                switch(arrChoice) {
                    case 1:
                        cout << "Введите число: ";
                        cin >> val;
                        arr.push_back(val);
                        break;
                    case 2:
                        cout << "Введите число: ";
                        cin >> val;
                        arr.push_front(val);
                        break;
                    case 3:
                        arr.pop_back();
                        cout << "Последний удален\n";
                        break;
                    case 4:
                        if (!arr.isEmpty())
                            cout << "Максимум: " << arr.max() << endl;
                        else
                            cout << "Массив пуст\n";
                        break;
                    case 5:
                        if (!arr.isEmpty())
                            cout << "Минимум: " << arr.min() << endl;
                        else
                            cout << "Массив пуст\n";
                        break;
                    case 6:
                        cout << "Сумма: " << arr() << endl;
                        break;
                }
            } while (arrChoice != 0);
        }
        else if (choice == 2) {
            int size;
            cout << "Введите размер стека: ";
            cin >> size;
            Stack<int> stack(size);
            int stackChoice;
            int val;
            do {
                cout << "\n--- СТЕК ---\n";
                cout << "Размер: " << stack.size() << "/" << stack.getMaxSize() << endl;
                cout << "1. Добавить (push)\n";
                cout << "2. Извлечь (pop)\n";
                cout << "3. Посмотреть верхний\n";
                cout << "0. Назад\n";
                cout << "Выберите: ";
                cin >> stackChoice;
                try {
                    switch(stackChoice) {
                        case 1:
                            cout << "Введите число: ";
                            cin >> val;
                            stack.push(val);
                            cout << "Добавлено\n";
                            break;
                        case 2:
                            cout << "Извлечено: " << stack.pop() << endl;
                            break;
                        case 3:
                            cout << "Верхний: " << stack.top() << endl;
                            break;
                    }
                } catch (const exception& e) {
                    cout << "Ошибка: " << e.what() << endl;
                }
            } while (stackChoice != 0);
        } 
        else if (choice == 3) {
            int size;
            cout << "Введите размер очереди: ";
            cin >> size;
            Queue<float> queue(size);
            int queueChoice;
            float val;
            do {
                cout << "\n--- ОЧЕРЕДЬ ---\n";
                cout << "Размер: " << queue.size() << "/" << queue.getMaxSize() << endl;
                cout << "1. Добавить в конец\n";
                cout << "2. Извлечь из начала\n";
                cout << "3. Посмотреть первый\n";
                cout << "0. Назад\n";
                cout << "Выберите: ";
                cin >> queueChoice;
                try {
                    switch(queueChoice) {
                        case 1:
                            cout << "Введите число: ";
                            cin >> val;
                            queue.enqueue(val);
                            cout << "Добавлено\n";
                            break;
                        case 2:
                            cout << "Извлечено: " << queue.dequeue() << endl;
                            break;
                        case 3:
                            cout << "Первый: " << queue.front() << endl;
                            break;
                    }
                } catch (const exception& e) {
                    cout << "Ошибка: " << e.what() << endl;
                }
            } while (queueChoice != 0);
        }
    } while (choice != 0);
    cout << "Программа завершена\n";
    return 0;
}
