#include <iostream>
#include <fstream>

using namespace std;

void print_menu();
void create_dataset();

string read_file_name();
int measure_file_size(string);

void load_dataset(string , double array1[], int );
void show_dataset(double [], int);

int main()
{
    string select;
    print_menu();
    string file_name;
    int file_size;

    while(true)
    {
        cout << "Enter A Choose from the menu :";
        cin >> select;
        cout << endl;
        if(select == "1")
        {
            create_dataset();
        }
        else if(select == "2")
        {
            file_name = read_file_name();
            file_size = measure_file_size(file_name);

            double loaded_data[file_size];
            load_dataset(file_name, loaded_data, file_size);
        }
        else if(select == "3")
        {
            show_dataset(loaded_data,file_size);
        }
        else if(select == "E" || select == "e")
        {
            return 0;
        }
        else
        {
            cout << "Enter A Correct Character " << endl;
            continue;
        }
    }

    return 0;
}

void print_menu()
{
    cout << "1-Enter a new data set" << endl;
    cout << "2-Load a data set" << endl;
    cout << "3-Display a data set" << endl;
    cout << "E-End The Program" << endl << endl;
}

void create_dataset()
{
    string file_name;
    cout << "Enter The File Name :";
    cin >> file_name;

    ofstream c_file; /// Refer to Create file.

    c_file.open(file_name.c_str());


    int num_of_nums = 0;

    cout << "Enter The Number of Numbers :";
    cin >> num_of_nums;

    for(int i=0 ; i< num_of_nums ; ++i)
    {
        double data = 0;
        cout << "Enter The " << i+1 << " Number :";
        cin >> data;
        c_file << data;
        c_file << endl;
    }
    c_file.close();
}

string read_file_name()
{
    string file_name;

    cout << "Enter The File Name to Load Data :";
    cin >> file_name;

    return file_name;
}

int measure_file_size(string file_name)
{
    ifstream measure_file_size;
    int counter = 0;
    string read_line;

    measure_file_size.open(file_name.c_str());

    while(!(measure_file_size.eof())) // Determine The size of the array.
    {
        getline(measure_file_size, read_line);
        counter++ ;
    }

    return counter;
}

void load_dataset(string file_name,double array1[],int file_size)
{
    ifstream o_file; /// Refer To Open file
    o_file.open(file_name.c_str());

    for(int i =0 ; i < file_size ; ++i)
    {
        getline(o_file,array1[i]);
    }
}

void show_dataset(double loaded_array,int size)
{

}

