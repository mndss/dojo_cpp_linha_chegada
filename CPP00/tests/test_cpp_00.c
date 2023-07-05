#include "minunit.h"
// #include <main.cpp>
#include <PhoneBook.hpp>
#include <Contact.hpp>

MU_TEST(check_contacts_array_size){
    // Arrange
    PhoneBook phonebook;

    // Assert
    mu_assert((phonebook.getTotalContacts() == 8), "Constacts wrong size");
}

MU_TEST_SUITE(tests_ex_01) {
	MU_RUN_TEST(check_contacts_array_size);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(tests_ex_01);
	MU_REPORT();
	return MU_EXIT_CODE;
}

