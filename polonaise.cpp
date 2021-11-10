#include <iostream>
#include <string>
#include <vector>

//float operation(std::vector<float>& vect, const int i ){
//    std::array<string, 4> liste
//  list[0]="+"
//    list[1]="-"
//    list[2]="/"
//    list[3]="x"
//    std::string a = argv[i]
//    int ope = -1
//    if(a=="+"){
//        ope=0
//    }
//    else if(a=="-"){
//        ope=1
//    }
//    else if(a=="/"){
//        ope=2
//    }
//    else if(a=="x"){
//        ope=3
//    }
//    else{
//        vect.push_back(std::stof(a))
//    }
//    float b = vect.back()
//    vect.pop_back()
//    float c = vect.back()
//    vect.pop_back()
//    vect.push_back
//
//}  

int main(int argc, char** argv){
    std::vector<std::string> v {"+","-","/","x"};
    std::cout << v.at(0) << std::endl;
    // v.back() renvoie le dernier
    // v.size() pour la longueur
    v.push_back("r");
    std::cout << v.back() << std::endl;
    v.pop_back();
    std::cout << v.back() << std::endl;

    std::vector<float> vect;
    for( int i = 1; i < argc; i++ ){
        std::string a = argv[i];
        if(a == "+"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c+b);
        }
        else if(a=="-"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c-b);

        }
        else if(a=="x"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c*b);
        }
        else if(a=="/"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c/b);
        }
        else{
            vect.push_back(std::stof(a));
        }
    }
    float result = vect.back();

    std::cout << "Le résultat est : " <<  result << std::endl;

}