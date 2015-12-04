/*
    ਇੱਕ ਇਨਸਾਨ ਦਾ ਨਾਂ ਪੁੱਛਦਾ ਹੈ।‌ 
    ਉਸ ਨੂੰ ਸਤਿ ਸ਼੍ਰੀ ਅਕਾਲ ਬੁਲਾਉਂਦਾ ਹੈ। 
*/

#include <iostream> 
#include <string> 

int main()
{
    std::cout << "ਆਪਣਾ ਪਹਿਲਾ ਨਾਂ ਲਿੱਖੋ: ";
    std::string name; 
    std::cin >> name; 
    
    // ਉਹ ਮੈਸੇਜ ਲਿੱਖੋ ਜੋ ਕਿ ਸਕਰੀਨ ਉੱਤੇ ਦਿੱਖੇਗਾ।
    const std::string greeting = "ਸਤਿ ਸ਼੍ਰੀ ਅਕਾਲ, " + name + "!"; 
    
    // ਆਊਟਪੁਟ ਦੀਆਂ ਦੂਜੀ ਅਤੇ ਚੋਥੀ ਲਾਈਨਾਂ ਲਿੱਖੋ। 
    const std::string spaces(greeting.size(), ' '); 
    const std::string second = "* " + spaces + " *"; 
    
    
    // ਆਊਟਪੁਟ ਦੀਆਂ ਪਹਿਲੀ ਅਤੇ ਪੰਜਵੀ ਲਾਈਨਾਂ ਲਿੱਖੋ।
    const std::string first (second.size(), '*'); 
    
    
    // ਸਬ ਕੁਝ ਸਕਰੀਨ ਉੱਤੇ ਲਿੱਖੋ।  
    std::cout << std::endl; 
    std::cout << first << std::endl;
    std::cout << second << std::endl; 
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    
    return 0;
}
