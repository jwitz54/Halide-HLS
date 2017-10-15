// The only Halide header file you need is Halide.h. It includes all of Halide.
#include "Halide.h"
//#include "template.h"

// Include some support code for loading pngs.
#include "../tools/halide_image_io.h"
using namespace Halide;

int main(int argc, char **argv) {

    //Halide::Buffer<test_int> input = load_and_convert_image("../tutorial/images/rgb.png");
    Buffer<int64_t> input(10);
    for (int i = 0; i < 10; i++){
        input(i) = 0;
    }

    Var x;
    Func brighter;
    brighter(x) = input(x) + 1;

    //Halide::Buffer<test_int> output =
        //brighter.realize(10);
    brighter.compile_to_c("brighter.cpp", {}, "brighter");

    printf("Success!\n");
    return 0;
}
