#include <stdio.h>
#include <string.h>

int main()
{
    // Declare a File pointer
    FILE *filepointer;

    // Get the data to be written in file
    char dataToBeWritten[50] = "RitikRaj - Computer Science Student";

    // Opening a file using fopen()

    filepointer = fopen("test.txt", "w");

    // check if the filepointer is null
    // which maybe if the file does not exist

    if (filepointer == NULL)
    {
        printf("test.txt file fail to Open");
    }

    else
    {

        printf("This file is now opened. \n");

        // Writinf the data into the file
        if (strlen(dataToBeWritten) > 0)
        {
            /* Writing in the file using fputs() */
            fputs(dataToBeWritten, filepointer);
            fputs("\n", filepointer);
        }

        // Closing the file using fclose()
        fclose(filepointer);

        printf("Data is successfully written in the file \n");
        printf("The file is now closed.");
    }

    return 0;
}