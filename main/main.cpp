#include <iostream>
#include <string>

#include "../user/User.cpp"

using namespace std;

int main()
{
    // std::string str = "this is string";
    string str("ss");
    int size = str.size();

    double array[3] = {0.1, 0.2, 0.3};

    User u1;

    u1.age = 12;
    u1.name = "xiang wen shan";
    u1.email = "id512@126.com";
    std::cout << "Hello, World!" << u1.name <<" age is " << u1.name << std::endl;
    cout << "print str = " << str << endl;
    for (int i = 0; i < sizeof(array); i++)
    {

        printf("this is print %d %f\n", i, array[i]);
    }

    return 0;
}