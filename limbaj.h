#include <stdlib.h>

#define OUTPUT_FILE "symbol_table.txt"

unsigned program_status = 1;

void tables_config()
{
   printf("Test\n");
}

void print_results()
{
   // Delete delete the existing symbol table.
   if(remove(OUTPUT_FILE) == 0)
      printf("Deleted successfully.\n");
   else
      printf("Unable to delete the file. Don't worry, maybe it didn't exist.\n");

   // Create symbol table.
   FILE *symbol_table;
   symbol_table = fopen(OUTPUT_FILE, "w");
   if(!symbol_table)
   {
      printf("Unable to open %s.\n", OUTPUT_FILE);
      exit(EXIT_FAILURE);
   }
   printf("Printare.\n");
}
