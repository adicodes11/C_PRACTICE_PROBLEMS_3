// ********************** WARNING ONCE REMOVED, DIRECTORY CAN'T BE BROUGHT BACK AGAIN *************************\\ 


// Program to remove A Directory Using _rmdir()

// Directory:  create a new folder any where on the system and just paste its loction in the dir_name string


#include<stdio.h>
#include<string.h>
#include<direct.h>
#include<errno.h>

int main()
{
    char dir_name[100];
    printf("// ********************** WARNING ONCE REMOVED, DIRECTORY CAN'T BE BROUGHT BACK AGAIN ************************* \\\n");
    // printf("Enter the directory to be removed: ");
    // // // // // // fgets(dir_name,100,stdin);
    // dir_name[strlen(dir_name)-1]='\0';

    if((_rmdir(dir_name))==-1)
    {
        printf("Error removing the directory...\n");

        if(errno == ENOENT)     //This error is generated if that directory doesn't even exits 
        {
            printf("Path not found...\n");
        }
        else if (errno == EACCES)       //Windows doesn't allows deleting a directory that is being currently used
        {
            printf("Currently the directory is being used by other programs...\n");
        }
        else if(errno == ENOTEMPTY)     //Windows doesn't allows deleting a filled directory
        {
            printf("Directory is not empty...\n");
        }
        return 1;
    }
    else
    {
        printf("Directory removed successfully...\n");
    }

    return 0;
}