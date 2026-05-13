#include <iostream>
#include <ctime>


void filling_an_array(float*** array, int size) {

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            for (int z = 0; z < size; z++) {

                std::cout << array[i][j][z] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

int main() {

    std::cout << "Task 1" << std::endl;

    std::cout << "Enter char: " << std::endl;
    char* a = new char;

    std::cin >> *a;
    std::cout << "Char: " << *a << std::endl;

    delete a;

    std::cout << "Enter short: " << std::endl;
    short* b = new short;

    std::cin >> *b;
    std::cout << "Short: " << *b << std::endl;

    delete b;

    std::cout << "Enter int: " << std::endl;
    int* c = new int;

    std::cin >> *c;
    std::cout << "Int: " << *c << std::endl;

    delete c;

    std::cout << "Enter long: " << std::endl;
    long* d = new long;

    std::cin >> *d;
    std::cout << "Long: " << *d << std::endl;

    delete d;

    std::cout << "Enter float: " << std::endl;
    float* e = new float;

    std::cin >> *e;
    std::cout << "Float: " << *e << std::endl;

    delete e;

    std::cout << "Enter double: " << std::endl;
    double* f = new double;

    std::cin >> *f;
    std::cout << "Double: " << *f << std::endl;
    
    delete f;

    std::cout << std::endl;

    std::cout << "Task 2" << std::endl;

    double* Int = new double;

    std::cin >> *Int;

    double& doub = *Int;

    std::cout << doub << std::endl;

    delete Int;

    std::cout << std::endl;

    std::cout << "Task 3" << std::endl;

    int num;

    std::cin >> num;

    int* array = new int[num];

    for (int i = 0; i < num; i++) {
        array[i] = num - 1 - i;
    }

    std::cout << "Array: " << std::endl;

    for (int i = 0; i < num; i++) {
        std::cout << array[i] << " ";
    }

    delete[] array;

    std::cout << std::endl << std::endl;

    std::cout << "Task 4" << std::endl;

    srand(time(0));

    int num1;

    std::cout << "Enter random number 1: " << std::endl;
    std::cin >> num1;

    float*** third_line = new float**[num1];

    for (int i = 0; i < num1; i++) {

        third_line[i] = new float*[num1];

        for (int j = 0; j < num1; j++) {

            third_line[i][j] = new float[num1];
        }
    }

    for (int i = 0; i < num1; i++) {

        for (int j = 0; j < num1; j++) {

            for (int z = 0; z < num1; z++) {

                third_line[i][j][z] = rand() % 100;
            }
        }
    }

    filling_an_array(third_line, num1);

    for (int i = 0; i < num1; i++) {

        for (int j = 0; j < num1; j++) {

            delete[] third_line[i][j];
        }

        delete[] third_line[i];
    }

    delete[] third_line;

    return 0;
}