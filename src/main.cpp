
// main.cpp

// includes

#include <cstdio>
#include <cstdlib>

#include "attack.h"
#include "book.h"
#include "hash.h"
#include "move_do.h"
#include "option.h"
#include "pawn.h"
#include "piece.h"
#include "protocol.h"
#include "random.h"
#include "square.h"
#include "trans.h"
#include "util.h"
#include "value.h"
#include "vector.h"
#include "probe.h"

static char * egbb_path = "c:/egbb/";
static uint32 egbb_cache_size = 16; 

// functions

// main()

int main(int argc, char * argv[]) {

   // init

   util_init();
   my_random_init(); // for opening book

   printf("Toga II 3.0 UCI based on Fruit 2.1 by Thomas Gaksch, Fabien Letouzey and Jerry Donald. Settings by Dieter Eberle\n");
   printf("Code was based on Toga II 1.4.1SE by Thomas Gaksch and Chris Formula, with bugfixes by Michel van den Bergh\n");

   // early initialisation (the rest is done after UCI options are parsed in protocol.cpp)

   option_init();

   square_init();
   piece_init();
   pawn_init_bit();
   value_init();
   vector_init();
   attack_init();
   move_do_init();

   random_init();
   hash_init();

   trans_init(Trans);
   book_init();

   egbb_cache_size = (egbb_cache_size * 1024 * 1024);
   egbb_is_loaded = LoadEgbbLibrary(egbb_path,egbb_cache_size);
   if (!egbb_is_loaded)
		printf("EgbbProbe not Loaded!\n");

   // loop

   loop();

   return EXIT_SUCCESS;
}

// end of main.cpp

