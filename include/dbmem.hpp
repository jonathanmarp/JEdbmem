#ifndef BDMEM_HPP
#define BDMEM_HPP

#ifdef __cplusplus
    #include <iostream>
    #include <string>
#endif

class class_of_dbmem {
    private:
        int id_of_array_ = 0;
    public:
        class_of_dbmem();
    public:
        /* function add */
        void add_integer(int value_of_int);
        void add_float(float value_of_float);
        void add_double(double value_of_double);
        void add_string(std::string value_of_string);
    public:
        /* function for delete */
        void clean_all();
        void delete_data(int id);
    public:
        /* function get data */
        std::string getType(int id);
        int getint(int id);
        float getfloat(int id);
        double getdouble(int id);
        std::string getstring(int id);
    public:
        int length();
        std::string type(int id);
    
};

typedef class class_of_dbmem Dbmem;

#endif // BDMEM_HPP