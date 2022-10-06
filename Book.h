#include <string.h>
class Book
{
private:
	string title;
	vector<string> paragraphs;
	vector<string> images;
	vector<string> tables;
public:
	Book(string title);
	void createNewParagraph(string paragraph);
	void createNewImage(string image);
	void createNewTable(string table);
	void print();
};
