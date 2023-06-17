// Program to send an HTTP request

#include <stdio.h>
#include <C:\Users\chikt\OneDrive\Desktop\VS CODE\curl\include\curl\curl.h>

int main()
{
    CURL *curl = NULL;
    CURLcode result;

    curl = curl_easy_init();

    if (curl == NULL)
    {
        fprintf(stderr, "HTTP request failed\n");
        return -1;
    }

    curl_easy_setopt(curl, CURLOPT_URL, "https://www.google.com");

    curl_easy_perform(curl);

    if(result != CURLE_OK)
    {
        fprintf(stderr,"Error: %s\n",curl_easy_strerror(result));
    }

    curl_easy_cleanup(curl);

    return 0;
}