#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string threshold = "5";
    std::string apiKey = "";
    Appwrite appwrite(projectId, apiKey);
    
    try {
        std::string response = appwrite.getHealth().getQueueFunctions(threshold);
        std::cout << "Health Check Done! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
