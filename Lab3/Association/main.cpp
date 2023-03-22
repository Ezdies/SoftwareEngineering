#include <iostream>
#include <string>

using namespace std;

#include "TReader.h"

int main(){
    auto *reader = new TReader;
    reader->setName("Maks");
    reader->setSurname("Dudziak");
    auto *book = new TBook;
    book->setAuthor("Mickiewicz");
    book->setTitle("Pan Tadeusz");
    book->setReader(reader);

    reader->setBook(book);

    std::cout << reader->getBook()->getAuthor() << "\n";
    std::cout << reader->getBook()->getTitle() << "\n";

    delete reader;
    delete book;

    return 0;
}