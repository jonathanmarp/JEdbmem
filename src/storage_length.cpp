#include <iostream>
#include <string>
#include <vector>

#include "../header/storage.hpp"
#include "../header/table_const.hpp"
#include "../header/type.hpp"
#include "../header/getidchar.hpp"

int storage::Storage::length_data() {
    int count = 0;

    if(((int)storage_variable.size()) != 0) {
        count    = 1;
        int temp = 0;

        for(int i = 0x0000; i < ((int)storage_variable.size()); i++) {
            if(storage_variable[i].id_table != temp) {
                temp  = storage_variable[i].id_table;
                count += 1;
            }
        }
    }

    return count;
}