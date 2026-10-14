#include <iostream>
 #include <string>
 using namespace std;
 int main(){
     string fruits[] = {"apple", "orange", "watermelon", "banana", "grapes", "blueberry", "kiwi", "strawberry", "pineapple", "mango"};
     string pets[] = {"dog", "cat", "snake", "parrot", "rabbit", "frog", "owl", "elephant", "zebra", "giraffe"};
     string cp[] = {"Ipod", "Infinix", "Oppo", "Tecno", "Huawei", "Xiaomi", "Samsung", "Nokia", "Cherry Mobile", "Vivo"};
     string dessert_food[] = {"spaghetti", "macaroni", "salad", "lasagna", "mangofloat", "leche flan", "cheesecake", "turon", "biko", "tiramisu"};
     string beverages[] = {"ice mocha", "mango shake", "strawberry milk", "ice caramel", "avocado shake", "chocolate milkshake", "ube", "buko pandan", "matcha", "ice spanish latte"};
     
     int fruits_length = sizeof(fruits) / sizeof(fruits[0]);
     int pets_length = sizeof(pets) / sizeof(pets[0]);
     int cp_length = sizeof(cp) / sizeof(cp[0]);
     int dessert_food_length = sizeof(dessert_food) / sizeof(dessert_food[0]);
     int beverages_length = sizeof(beverages) / sizeof(beverages[0]);
     
     cout << "The fruits: " << fruits_length<<endl;
     cout << "The pets: " << pets_length<<endl;
     cout << "The cp: " << cp_length<<endl;
     cout << "The dessert food: " << dessert_food_length<< endl;
     cout << "The beverages: " << beverages_length<< endl;

     return 0;

 }