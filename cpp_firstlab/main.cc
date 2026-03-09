#include "DynamicArray.h"
#include "stack.h"
#include "queue.h"
#include <iostream>

int main() {
    std::cout << "=== Тестирование DynamicArray ===" << std::endl;
    DynamicArray arr;
    
    arr.push_back(10.5);
    arr.push_back(20.3);
    arr.push_back(5.7);
    arr.push_front(1.2);
    
    std::cout << "Массив: ";
    arr.printData();
    
    std::cout << "Максимум: " << arr.max() << std::endl;
    std::cout << "Минимум: " << arr.min() << std::endl;
    std::cout << "Сумма: " << arr() << std::endl;
    
    std::cout << "\n=== Тестирование Stack ===" << std::endl;
    Stack<int> stack(5);
    
    for(int i = 1; i <= 3; i++) {
        stack.push(i * 10);
        std::cout << "Добавлено: " << i*10 << std::endl;
    }
    
    std::cout << "Верхний элемент: " << stack.top() << std::endl;
    std::cout << "Извлекаем: " << stack.pop() << std::endl;
    
    std::cout << "\n=== Тестирование Queue ===" << std::endl;
    Queue<float> queue(5);
    
    queue.enqueue(1.1);
    queue.enqueue(2.2);
    queue.enqueue(3.3);
    
    std::cout << "Первый в очереди: " << queue.front() << std::endl;
    std::cout << "Извлекаем: " << queue.dequeue() << std::endl;
    std::cout << "Теперь первый: " << queue.front() << std::endl;
    
    return 0;
}
