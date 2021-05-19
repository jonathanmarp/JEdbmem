#include <iostream>
#include <string>
#include <vector>

#include "../header/storage.hpp"
#include "../include/dbmem.hpp"

// global variable
int indexing = 0;
std::vector<storage::Storage> _storage_array_;

class_of_dbmem::class_of_dbmem() {
    storage::Storage _TEMP_;
    _storage_array_.push_back(_TEMP_);

    id_of_array_ = indexing;
    indexing += 1;
}

// function add
void class_of_dbmem::add_integer(int value_of_int) {
    _storage_array_[id_of_array_].add_integer(value_of_int);
}

void class_of_dbmem::add_float(float value_of_float) {
    _storage_array_[id_of_array_].add_float(value_of_float);
}

void class_of_dbmem::add_double(double value_of_double) {
    _storage_array_[id_of_array_].add_double(value_of_double);
}

void class_of_dbmem::add_string(std::string value_of_string) {
    _storage_array_[id_of_array_].add_string(value_of_string);
}

// function for delete
void class_of_dbmem::clean_all() {
    _storage_array_[id_of_array_].clean_all();
}

void class_of_dbmem::delete_data(int id) {
    _storage_array_[id_of_array_].delete_data(id);
}

// function get data
std::string class_of_dbmem::getType(int id) {
    return _storage_array_[id_of_array_].getType(id);
}

int class_of_dbmem::getint(int id) {
    return _storage_array_[id_of_array_].getint(id);
}

float class_of_dbmem::getfloat(int id) {
    return _storage_array_[id_of_array_].getfloat(id);
}

double class_of_dbmem::getdouble(int id) {
    return _storage_array_[id_of_array_].getdouble(id);
}

std::string class_of_dbmem::getstring(int id) {
    return _storage_array_[id_of_array_].getstring(id);
}

int class_of_dbmem::length() {
    return _storage_array_[id_of_array_].length_data();
}

std::string class_of_dbmem::type(int id) {
    return _storage_array_[id_of_array_].getType(id);
}