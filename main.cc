#include "DynamicArray.h"
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
