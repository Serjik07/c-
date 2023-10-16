#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input_image.jpg", std::ios::binary);
    int i;
    std::cout << "Enter number(0,10)//Narek xorhurd em tali qich gres: ";
    std::cin >> i;
    for (int j = 0; j < i; j++)
    {
        std::ofstream outputFile("output_image" + std::to_string(j) + ".jpg",std::ios::binary);  
        if(inputFile.is_open() && outputFile.is_open())
        {
            outputFile << inputFile.rdbuf();

            inputFile.close();
            outputFile.close();

        }

    
    std::cout << "Image file copied successfully." << std::endl;

    }
    

    

    return 0;
}












// int main() 
// { 
//     ofstream file("esim.txt",ios_base::app);
    
//     if(file.is_open()) 
//     {
//         file << "Valod papi";
//         file.close() ;
//     }

//     // ifstream file("esim.txt");

//     // if(file.is_open())
//     // {
//     //     // string info;
//     //     // file >> info;
//     //     char info[100];
//     //     file.getline(info,100);
//     //     cout << info << endl;
//     //     file.close();
//     // }

//     return 0;
// }
