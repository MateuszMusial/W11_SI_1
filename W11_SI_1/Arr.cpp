#include "Arr.h"

void Arr::push_back(int item)
{
    if (count < sizeof(staticArray) / sizeof(int)) {
        staticArray[count] = item;
       
        std::cout << "Elements in your array: " << std::endl;
        for (int i = 0; i <= count;i++) {
            std::cout << staticArray[i] << std::endl;
        }
        count++;
    }
    else{
        
        if (count == sizeof(staticArray) / sizeof(int)) {
           
            for (int i = 0;i < 6;i++) {
                arr[i] = staticArray[i];
                arr[count] = item;
            }
            count++;  
            std::cout << "Elements in your array: " << std::endl;
            for (int i = 0; i < count;i++) {
                std::cout << arr[i] << std::endl;
            }
        }
        else {
            arr[count] = item;
            count++;
            std::cout << "Elements in your array: " << std::endl;
            for (int i = 0; i <= count;i++) {
                std::cout << arr[i] << std::endl;
            }
        }
    }
}

int Arr::getItem(int index)
{
    return staticArray[index];
}

void Arr::setValue(int index, int value)
{
    staticArray[index] = value;
}
