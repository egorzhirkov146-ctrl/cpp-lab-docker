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
    cout << "   Динамический массив, Стек, Очередь\n";
    
    testDynamicArray();
    testStack();
    testQueue();
    
    cout << "   ПРОГРАММА ЗАВЕРШЕНА\n";
    return 0;
}
