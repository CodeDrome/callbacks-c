
#include<stdio.h>
#include<stdlib.h>

//--------------------------------------------------------
// FUNCTION PROTOTYPES
//--------------------------------------------------------
void displaydata(char* data);
void displayerror(char* errormessage);
void getdata(void(*onsuccess)(char* data), void(*onerror)(char* errormessage));

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(int argc, char* argv[])
{
    puts("-------------------------------------");
    puts("| codedrome.com                     |");
    puts("| on success and on error callbacks |");
    puts("-------------------------------------\n");

    getdata(displaydata, displayerror);

    return EXIT_SUCCESS;
}

//--------------------------------------------------------
// FUNCTION getdata
//--------------------------------------------------------
void getdata(void(*onsuccess)(char*), void(*onerror)(char*))
{
    char* data = "This is your data :)";
    char* errormessage = "Something went wrong :(";

    onsuccess(data);

    onerror(errormessage);
}

//--------------------------------------------------------
// FUNCTION displaydata
//--------------------------------------------------------
void displaydata(char* data)
{
    printf("success: %s\n", data);
}

//--------------------------------------------------------
// FUNCTION displayerror
//--------------------------------------------------------
void displayerror(char* errormessage)
{
    printf("error: %s\n", errormessage);
}
