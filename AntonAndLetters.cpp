/**
 * @Author: Saniyat Mushrat Lamim
 * @Date:   20-Apr-2021
 * @Email:  robertarmstrong096@gmail.com
 * @Filename: arivalOfGeneral.cpp
 * @Last modified by:   Saniyat Mushrat Lamim
 * @Last modified time: 21-Apr-2021
 */



#include "bits/stdc++.h"

using namespace std;

int main() {

        char arr[100];
        char arr2[100];
        int i,j,count = 0;

        gets(arr);
        strcpy(arr2,arr);
        for (int i = 1; i < strlen(arr); i=i+3) {
                for (int j = 1; j < strlen(arr); j=j+3) {
                        if (arr[i] == arr[j]) {
                                break;
                        }
                        else{
                                count++;
                        }
                }
        }
        std::cout << count << '\n';
        return 0;
}
