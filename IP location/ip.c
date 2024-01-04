#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <cJSON.h>

int main(void)
{
    CURL *curl;
    CURLcode res;
    char *url = "https://api.opencagedata.com/geocode/v1/json?q=New+York+City&key=YOUR-API-KEY";

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        res = curl_easy_perform(curl);

        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }
        else {
            cJSON *json, *results, *geometry, *location, *lat, *lng;
            json = cJSON_Parse(curl_buffer->memory);

            if (json != NULL) {
                results = cJSON_GetObjectItemCaseSensitive(json, "results");

                if (cJSON_IsArray(results) && cJSON_GetArraySize(results) > 0) {
                    geometry = cJSON_GetObjectItemCaseSensitive(cJSON_GetArrayItem(results, 0), "geometry");
                    location = cJSON_GetObjectItemCaseSensitive(geometry, "location");
                    lat = cJSON_GetObjectItemCaseSensitive(location, "lat");
                    lng = cJSON_GetObjectItemCaseSensitive(location, "lng");

                    printf("Latitude: %f, Longitude: %f\n", lat->valuedouble, lng->valuedouble);
                }

                cJSON_Delete(json);
            }
        }

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}
