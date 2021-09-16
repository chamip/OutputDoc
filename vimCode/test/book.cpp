/*
 * @Author: chamip
 * @Date: 2021-09-16 09:47:22
 * @LastEditTime: 2021-09-16 10:03:47
 * @LastEditors: chamip
 * @Description: 结构体/结构指针/typedef
 * @FilePath: /OutputDoc/vimCode/test/book.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <cstring>

typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}Books;

void PrintBook(Books book);

int main()
{
    Books book1, book2;
    strcpy(book1.title, "C Primer plus plus");
    strcpy(book1.author, "Julia");
    strcpy(book1.subject, "computer");
    book1.book_id = 123;
    PrintBook(book1);

    strcpy(book2.title, "syr");
    strcpy(book2.author, "chamip");
    strcpy(book2.subject, "literature");
    book2.book_id = 312;
    PrintBook(book2);
    return 0;
}

void PrintBook(Books book) {
    std::cout << "title: " << book.title << std::endl;
    std::cout << "author: " << book.author << std::endl;
    std::cout << "subject: " << book.subject << std::endl;
    std::cout << "book_id: " << book.book_id << std::endl;
    return ;
}

