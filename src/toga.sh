rm *.o

icc -o toga *.cpp -w -Ot -march=pentiumpro -DNDEBUG -D_MSC_VER -D_LINUX -lm -static -unroll -vec -ipo -prof_use


