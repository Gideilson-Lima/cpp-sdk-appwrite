#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string documentId = "document123";

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().getDocument(databaseId, collectionId, documentId); 
        std::cout << "Document fetched successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
