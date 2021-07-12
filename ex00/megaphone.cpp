#include <iostream>

int main(int argc, char **argv){

    int i;
    char c;
    int j;

    i = 1;
    if (argc == 1 )
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    else 
    {
        while(i < argc)
        {
            j = 0;
            while(argv[i][j])
            {
                c = toupper(argv[i][j]);
                std::cout << c;
                j++;
            }
            i++;
        }  
        std::cout << "\n";   
    }
    return (0);
}