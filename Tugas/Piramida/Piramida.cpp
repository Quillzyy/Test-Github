#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    system("CLS");
    //Half Pyramid

    int pilih;
    int rows, space;
    
    cout << "Pilihan : " << endl;
    cout << "1. Half Pyramid Stars" << endl;
    cout << "2. Half Pyramid Numbers" << endl;
    cout << "3. Half Pyramid Alphabets" << endl;
    cout << "4. Inverted Half Pyramid Stars" << endl;
    cout << "5. Inverted Half Pyramid Numbers" << endl;
    cout << "6. Pyramid Stars" << endl;
    cout << "7. Pyramid Numbers" << endl;
    cout << "8. Inverted Pyramid Stars" << endl;
    cout << "9. Pascal's Triangle" << endl;
    cout << "10. Floyd's Triangle" << endl;

    for(;;){
        cout << endl << "Pilihan anda : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:{
            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = 1; i <= rows; ++i){
                for(int j = 1; j <= i; ++j){
                    cout << "* ";
            }
            cout << "\n";
            }
            break;
        }
        
        case 2:{
            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = 1; i <= rows; ++i){
                for(int j = 1; j <= i; ++j){
                    cout << j << " ";
                }
                cout << "\n";
            }
            break;
        }

        case 3:{
            char input, alphabet = 'A';

            cout << "Enter the uppercase character you want to print in the last row: ";
            cin >> input;

            for(int i = 1; i <= (input-'A'+1); ++i){
                for(int j = 1; j <= i; ++j){
                    cout << alphabet << " ";
                }
                ++alphabet;
                cout << endl;
            }
            break;
        }

        case 4:{
            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = rows; i >= 1; --i){
                for(int j = 1; j <= i; ++j){
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        
        case 5:{
            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = rows; i >= 1; --i){
                for(int j = 1; j <= i; ++j){
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        }

        case 6:
            cout <<"Enter number of rows: ";
            cin >> rows;

            for(int i = 1, k = 0; i <= rows; ++i, k = 0){
                for(space = 1; space <= rows-i; ++space){
                    cout << "  ";
                }

                while(k != 2*i-1){
                    cout << "* ";
                    ++k;
                }
                cout << endl;
            }    
            break;

        case 7:{
            int count = 0, count1 = 0, k = 0;

            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = 1; i <= rows; ++i){
                for(int space = 1; space <= rows-i; ++space){
                    cout << "  ";
                    ++count;
                }

                while(k != 2*i-1){
                    if (count <= rows-1){
                        cout << i+k << " ";
                        ++count;
                    }
                    else{
                        ++count1;
                        cout << i+k-2*count1 << " ";
                    }
                    ++k;
                }
                count1 = count = k = 0;

                cout << endl;
            }
            break;
        }

        case 8:
            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = rows; i >= 1; --i){
                for(int space = 0; space < rows-i; ++space)
                    cout << "  ";

                for(int j = i; j <= 2*i-1; ++j)
                    cout << "* ";

                for(int j = 0; j < i-1; ++j)
                    cout << "* ";

                cout << endl;
            }
            break;

        case 9:{
            int coef = 1;

            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = 0; i < rows; i++){
                for(int space = 1; space <= rows-i; space++)
                    cout <<"  ";

                for(int j = 0; j <= i; j++){
                    if (j == 0 || i == 0)
                        coef = 1;
                    else
                        coef = coef*(i-j+1)/j;

                    cout << coef << "   ";
                }
                cout << endl;
            }
            break;
        }

        case 10:{
            int number = 1;

            cout << "Enter number of rows: ";
            cin >> rows;

            for(int i = 1; i <= rows; i++) {
                for(int j = 1; j <= i; ++j) {
                    cout << number << " ";
                    ++number;
                }
                cout << endl;
            }
            break;
        }
        
        default:
            continue;
        }

    break;
    }
    system("pause");
    system("CLS");
    return 0;
}