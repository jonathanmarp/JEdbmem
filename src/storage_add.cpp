#include <iostream>
#include <string>
#include <vector>

#include "../header/storage.hpp"
#include "../header/table_const.hpp"
#include "../header/type.hpp"
#include "../header/getidchar.hpp"

void storage::Storage::add_integer(int value_of_int) {
    {
        table_const::STable Start_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_Start,
            .data_table = 1
        };

        storage_variable.push_back(Start_Table_Type);
    }

    table_const::STable Insert_Data = {
        .id_table   = id_table_now,
        .type_table = type::Type_Int,
        .data_table = ((double)value_of_int)
    };

    storage_variable.push_back(Insert_Data);

    {
        table_const::STable End_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_End,
            .data_table = type::Type_NULL
        };

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}

void storage::Storage::add_float(float value_of_float) {
    {
        table_const::STable Start_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_Start,
            .data_table = 1
        };

        storage_variable.push_back(Start_Table_Type);
    }

    table_const::STable Insert_Data = {
        .id_table   = id_table_now,
        .type_table = type::Type_Float,
        .data_table = ((double)value_of_float)
    };

    storage_variable.push_back(Insert_Data);

    {
        table_const::STable End_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_End,
            .data_table = type::Type_NULL
        };

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}

void storage::Storage::add_double(double value_of_double) {
    {
        table_const::STable Start_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_Start,
            .data_table = 1
        };

        storage_variable.push_back(Start_Table_Type);
    }

    table_const::STable Insert_Data = {
        .id_table   = id_table_now,
        .type_table = type::Type_Double,
        .data_table = ((double)value_of_double)
    };

    storage_variable.push_back(Insert_Data);

    {
        table_const::STable End_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_End,
            .data_table = type::Type_NULL
        };

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}

void storage::Storage::add_string(std::string value_of_string) {
    {
        table_const::STable Start_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_Start,
            .data_table = ((double)value_of_string.length())
        };

        storage_variable.push_back(Start_Table_Type);
    }

    for(unsigned int i = 0x0000; i < value_of_string.length(); i++) {
        table_const::STable Character_TEMP = {
            .id_table   = id_table_now,
            .type_table = type::Type_Char,
            .data_table = ((double)getidchar::getid(value_of_string[i]))
        };


        storage_variable.push_back(Character_TEMP);
    }

    {
        table_const::STable End_Table_Type = {
            .id_table   = id_table_now,
            .type_table = type::Type_End,
            .data_table = type::Type_NULL
        };

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}