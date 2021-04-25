/**
 * @Author: Saniyat Mushrat Lamim
 * @Date:   20-Apr-2021
 * @Email:  robertarmstrong096@gmail.com
 * @Filename: horseshoe228.cpp
 * @Last modified by:   Saniyat Mushrat Lamim
 * @Last modified time: 20-Apr-2021
 */

#include <iostream>

using namespace std;

int main() {
        long long arr[100];
        int count = 0;
        for (int i = 0; i < 4; i++) {
                std::cin >> arr[i];
        }
        for (int i = 0; i < 4; i++) {
                if(arr[i] == arr[i+1] || arr[i] == arr[i+2] || arr[i] == arr[i+3])
                {
                        count++;
                }
        }
        std::cout << count << '\n';
        return 0;
}
