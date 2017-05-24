// values.h

#ifndef VALUE_H

#define VALUE_H

// macros

#define VALUE_MATE(height) (-30000+(height))
#define VALUE_PIECE(piece) (value_piece[piece])

// variables

extern int value_piece[256];

// functions

extern void value_init();
extern bool value_is_ok(int value);
extern bool range_is_ok(int min, int max);
extern bool value_is_mate(int value);
extern int value_to_trans(int value, int height);
extern int value_from_trans(int value, int height);
extern int value_to_mate(int value);

#endif // !defined VALUE_H

// end of values.h
