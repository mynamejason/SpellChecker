#ifndef SpellChecker_hpp
#define SpellChecker_hpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class SpellChecker
{
public:
    SpellChecker();
    SpellChecker(const std::vector<std::string>& inputDictionary, std::vector<std::string>& userInput);
    ~SpellChecker();

private:
	void checkSpelling();
    void insertion(const std::string& currentIncorrectWord);
    void deletion(const std::string& currentIncorrectWord);
    void swap(const std::string& currentIncorrectWord);
    void replace(const std::string& currentIncorrectWord);
    void createAnsFile();

    std::vector<std::string> fixedWords_;
    std::vector<std::string> dictionary_;
    std::vector<std::string> userInputWords_;
    std::string answer_;
    bool hasFoundAns_;
};

#include "SpellChecker.cpp"
#endif /* SpellCheck_hpp */