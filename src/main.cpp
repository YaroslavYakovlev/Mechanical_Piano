#include <iostream>
#include <vector>
#include <algorithm>

enum Notes{
  DO = 1,
  RE = 2,
  MI = 3,
  FA = 4,
  SOL = 5,
  LYA = 6,
  SI = 7
};

int main(){
  std::cout << "Mechanical Piano" << std::endl;
  std::vector<int> vMusic;
  std::vector<int> vMusic2;
  int melody = 0;
  std::cout << "Enter melody" << std::endl;
  for(int i = 0; i < 3; i++){
    std::cin >> melody;
    do{
      // int d = melody % 10;
     vMusic.push_back(melody % 10);
      // std::cout << d << " ";
      melody /=10;
    } while (melody);
    reverse(vMusic.begin(), vMusic.end());
  }
//  for(int i = 0; i < vMusic.size();){
//     do{
//       vMusic2.push_back(vMusic[i] % 10);
//       std::cout << vMusic2[i] << " ";
//       vMusic[i] /=10;
//       i++;
//     } while (vMusic.size());
//     break;
//   }

  
  for(int i = 0; i < vMusic.size(); i++){
    std::cout << vMusic[i] << " ";
  }
  return 0;
}

  // do{
  //   int d = melody % 10;
  //   std::cout << d << " ";
  //   melody /=10;
  // } while (melody);



// Механическое пианино

// Что нужно сделать

// Создать упрощённую модель механического пианино. 
// Всего у данного пианино - 7 клавиш, соответствуют
// они семи нотам. Каждая клавиша кодируется уникальной 
// битовой маской, которая записывается в enum. 
// Вначале программы пользователь вводит мелодию. 
// Ввод осуществляется с помощью цифр на клавиатуре, 
// от 1 до 7 включительно (от ноты “до” до ноты “си”). 
// В результате из чисел может быть составлена 
// любая комбинация нот. К примеру 512 или 154. 
// После ввода комбинации, вводится следующая.  
// Всего таких комбинаций нот - 12. Как только 
// все комбинации были введены пользователем, 
// мелодия проигрывается. Для этого каждая комбинация 
// нот последовательно выводится на экран. Однако, 
// на этот раз она печатается “красиво”, т.е. все 
// ноты указываются словами, а не цифрами. 
// При этом слова разделяются пробелами.