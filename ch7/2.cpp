/*
    This program shows the workings of static variables.
    ਇਹ ਪ੍ਰੋਗਾਮ static ਵੇਰੀਏਬਲਾਂ ਦੀ ਕੰਮ ਕਰਨ ਦੀ ਤਕਨੀਕ ਦਰਸਾਉਂਦਾ ਹੈ।
*/

#include <iostream> 

// static ਜਦੋਂ ਹਟਾ ਦਿੱਤਾ ਜਾਂਦਾ ਹੈ, ਤਾਂ ਇਹ ਪ੍ਰੋਗਾਮ ਕੰਮ ਨਹੀ ਕਰਦਾ। 
int running_avg (int i)
{
    static int sum = 0, count = 0; 
    sum += i;
    count++;
    return (sum/count); 
}

int main()
{
    int num;
    do {
        std::cout << "ਨੰਬਰ ਲਿਖੋ (ਖਤਮ ਕਰਨ ਲਈ -1 ਲਿਖੋ): ";
        std::cin >> num; 
        if (num != -1) {
            std::cout << "ਐਵਰਿਜ ਹੈ: " 
                      << running_avg (num);
             }
             std::cout << '\n';
         } while (num > -1);
         
     return 0; 
}
