#include <iostream>
#include "../tests/test_circle.cpp"
#include "../tests/test_rectangle.cpp"
#include "../tests/test_square.cpp"
//#include "../tests/test_triangle.cpp"

int main(){
    std::cout<<"----------------------------------------\n";
    check_circle_area();
    check_circle_perimeter();
    check_rectangle_area();
    check_rectangle_perimeter();
    check_square_area();
    check_square_perimeter();
    //check_triangle_area();
    //check_triangle_perimeter();
    std::cout<<"------------------------------------------\n";

    return 0; 
}