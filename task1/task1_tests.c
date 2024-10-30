#include "checkit.h"
#include "task1.h"

void testMixed() {
   char input[] = "Hello THERE";
   char result[12];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}


void testAll() {
   char input[] = "HELLO WORLD";
   char result[12];
   char *expected = "hello world";

   str_lower(input, result);

   checkit_string(result, expected);
}


void testNonLetter() {
   char input[] = "123!!!";
   char result[7];
   char *expected = "123!!!";

   str_lower(input, result);

   checkit_string(result, expected);
}

void testEmpty() {
   char input[] = "";
   char result[1];
   char *expected = "";

   str_lower(input, result);

   checkit_string(result, expected);
}

void testMixedMutate() {
   char input[] = "Hello THERE";
   char *expected = "hello there";

   str_lower_mutate(input);

   checkit_string(input, expected);
}


void testAllMutate() {
   char input[] = "HELLO WORLD";
   char *expected = "hello world";

   str_lower_mutate(input);

   checkit_string(input, expected);
}


void testNonLetterMutate() {
   char input[] = "123!!!";
   char *expected = "123!!!";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

void testEmptyMutate() {
   char input[] = "";
   char *expected = "";

   str_lower_mutate(input);

   checkit_string(input, expected);
}


int main(void) {
   // Testing str_lower
   testMixed();
   testAll();
   testNonLetter();
   testEmpty();


   // Testing str_lower_mutate
   testMixedMutate();
   testAllMutate();
   testNonLetterMutate();
   testEmptyMutate();

   return 0;
}
