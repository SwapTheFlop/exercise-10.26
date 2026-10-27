#include <iostream>

int main(){
    int maxEntries { 10 };
    int* table { new int[maxEntries] };
    std::cout << "old table address = " << table << std::endl;
    
    int numEntries { maxEntries };
    for(int i = 0; i < numEntries; ++i)
    {
        table[i] = i*10;
    }
    
    maxEntries *= 2;
    int* newTable { new int[maxEntries] };
    for(int i = 0; i < numEntries; ++i)
    {
        newTable[i] = table[i];
    }
    delete[] table;
    table = newTable;

    for(int i = 0; i < maxEntries; ++i)
    {
        std::cout << "new table[" << i << "] = " << table[i] << std::endl;
    }
    delete[] table;
    return 0;
}