#include <iostream>
 #include <string>
 using namespace std;
 int main(){
     string fruits[] = {"apple", "orange", "watermelon", "banana", "grapes", "blueberry", "kiwi", "strawberry", "pineapple", "mango"};
     string pets[] = {"dog", "cat", "snake", "parrot", "rabbit", "frog", "owl", "elephant", "zebra", "giraffe"};
     string cp[] = {"Iphone", "Infinix", "Oppo", "Tecno", "Huawei", "Xiaomi", "Samsung", "Nokia", "Cherry Mobile", "Vivo"};
     string dessert_food[] = {"spaghetti", "macaroni", "salad", "lasagna", "mangofloat", "leche flan", "cheesecake", "turon", "biko", "tiramisu"};
     string beverages[] = {"ice mocha", "mango shake", "strawberry milk", "ice caramel", "avocado shake", "chocolate milkshake", "ube", "buko pandan", "matcha", "ice spanish latte"};
     
     cout << "Before, element in index 1: " << fruits[1] << endl;
     cout << "Before, element in index 2: " << fruits[2] << endl;
     fruits[1] = "mango";
     fruits[2] = "grape";
     cout << "After, element in index 1: " << fruits[1] << endl;
     cout << "After, element in index 2: " << fruits[2] << endl;
     cout << "Before, element in index 1: " << pets[1] << endl;
     cout << "Before, element in index 2: " << pets[2] << endl;
     pets[1] = "bird";
     pets[2] = "rabbit";
     cout << "After, element in index 1: " << pets[1] << endl;
     cout << "After, element in index 2: " << pets[2] << endl;
     cout << "Before, element in index 1: " << cp[1] << endl;
     cout << "Before, element in index 2: " << cp[2] << endl;
     cp[1] = "Realme";
     cp[2] = "Xiaomi";
     cout << "After, element in index 1: " << cp[1] << endl;
     cout << "After, element in index 2: " << cp[2] << endl;
     cout << "Before, element in index 1: " << dessert_food[1] << endl;
     cout << "Before, element in index 2: " << dessert_food[2] << endl;
     dessert_food[1] = "halo-halo";
     dessert_food[2] = "cake";
     cout << "After, element in index 1: " << dessert_food[1] << endl;
     cout << "After, element in index 2: " << dessert_food[2] << endl;
     cout << "Before, element in index 1: " << beverages[1] << endl;
     cout << "Before, element in index 2: " << beverages[2] << endl;
     beverages[1] = "gulaman";
     beverages[2] = "calamasi juice";
     cout << "After, element in index 1: " << beverages[1] << endl;
     cout << "After, element in index 2: " << beverages[2] << endl;
     
     return 0;
 }
