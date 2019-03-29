#include <iostream>
#include <fstream>
#include <string>
#include "addressbook.pb.h"
using namespace std;

// Iterates though all people in the AddressBook and prints info about them.
void ListPeople(const tutorial::t1& address_book) {
	cout << "a= " << address_book.a() << endl;
	cout << "b= " << address_book.b() << endl;
	cout << "name: " << address_book.has_name() << endl;
	cout << "name= " << address_book.name() << endl;
	cout << "id: " << address_book.has_id() << endl;
	cout << "id= " << address_book.id() << endl;
	cout << "m.size= " << address_book.m().size() << endl;
	for (auto i=address_book.m().begin(); i != address_book.m().end(); ++i) {
		cout << "key= " << i->first  << "value=" << i->second << endl;
	}

}


// Main function:  Reads the entire address book from a file and prints all
//   the information inside.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 2) {
    cerr << "Usage:  " << argv[0] << " ADDRESS_BOOK_FILE" << endl;
    return -1;
  }

  tutorial::t1 address_book;

  {
    // Read the existing address book.
    fstream input(argv[1], ios::in | ios::binary);
    if (!address_book.ParseFromIstream(&input)) {
      cerr << "Failed to parse address book." << endl;
      return -1;
    }
  }

  ListPeople(address_book);

  return 0;
}
