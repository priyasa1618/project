#include <curl/curl.h>

#include <string>

#include <iostream>

#include "app.h"

void sendData(std::string name, int v1, int v2) {

    CURL *curl = curl_easy_init();

    if(curl) {

        // Prepare the data string in key=value pairs

        std::string postData = "user=" + name + "&val1=" + std::to_string(v1) + "&val2=" + std::to_string(v2);

        

        // Specify the URL of your PHP script

        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2404244/priya.php");

        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postData.c_str());

        // Perform the request

        CURLcode res = curl_easy_perform(curl);

        if(res != CURLE_OK)

            fprintf(stderr, "Request failed: %s\n", curl_easy_strerror(res));

        curl_easy_cleanup(curl);

    }

}
